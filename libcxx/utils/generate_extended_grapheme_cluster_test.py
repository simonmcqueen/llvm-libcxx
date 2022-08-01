#!/usr/bin/env python
# ===----------------------------------------------------------------------===##
#
# Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
# See https://llvm.org/LICENSE.txt for license information.
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#
# ===----------------------------------------------------------------------===##

# The code is based on
# https://github.com/microsoft/STL/blob/main/tools/unicode_properties_parse/grapheme_break_test_data_gen.py
#
# Copyright (c) Microsoft Corporation.
# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

from pathlib import Path
from dataclasses import dataclass, field
from typing import Optional, TextIO
from array import array


@dataclass
class BreakTestItem:
    code_points: list[int] = field(default_factory=list)
    encoded: str = ""
    breaks_utf8: list[int] = field(default_factory=list)
    breaks_utf16: list[int] = field(default_factory=list)
    breaks_utf32: list[int] = field(default_factory=list)


class CommentLine:
    pass


class EOF:
    pass


def parseBreakTestLine(input: TextIO) -> Optional[BreakTestItem]:
    result = BreakTestItem()
    code_point = -1
    utf8 = 0
    utf16 = 0
    utf32 = 0

    while True:
        c = input.read(1)
        if c == "\N{DIVISION SIGN}":
            # The line starts with a division sign, don't add it to the output.
            if code_point != -1:
                result.code_points.append(code_point)
                code_point = -1
                result.breaks_utf8.append(utf8)
                result.breaks_utf16.append(utf16)
                result.breaks_utf32.append(utf32)

            assert input.read(1).isspace()
            continue
        if c == "\N{MULTIPLICATION SIGN}":
            assert input.read(1).isspace()
            continue
        if c.isalnum():
            while next := input.read(1):
                if next.isalnum():
                    c += next
                else:
                    assert next.isspace()
                    break
            i = int(c, base=16)
            if code_point == -1:
                code_point = i

            result.encoded += f"\\U{i:08x}"
            c = chr(i)
            utf8 += c.encode().__len__()
            # Since we only care about the number of code units the byte order
            # doesn't matter. The byte order is specified to avoid the BOM
            utf16 += int(c.encode("utf-16-le").__len__() / 2)
            utf32 += int(c.encode("utf-32-le").__len__() / 4)
            continue
        if c == "#":
            input.readline()
            return result
        if c == "\n":
            return result
        if c == "":
            return None
        assert False


cpp_template = """// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// WARNING, this entire header is generated by
// utiles/generate_extended_grapheme_cluster_test.py
// DO NOT MODIFY!

// UNICODE, INC. LICENSE AGREEMENT - DATA FILES AND SOFTWARE
//
// See Terms of Use <https://www.unicode.org/copyright.html>
// for definitions of Unicode Inc.'s Data Files and Software.
//
// NOTICE TO USER: Carefully read the following legal agreement.
// BY DOWNLOADING, INSTALLING, COPYING OR OTHERWISE USING UNICODE INC.'S
// DATA FILES ("DATA FILES"), AND/OR SOFTWARE ("SOFTWARE"),
// YOU UNEQUIVOCALLY ACCEPT, AND AGREE TO BE BOUND BY, ALL OF THE
// TERMS AND CONDITIONS OF THIS AGREEMENT.
// IF YOU DO NOT AGREE, DO NOT DOWNLOAD, INSTALL, COPY, DISTRIBUTE OR USE
// THE DATA FILES OR SOFTWARE.
//
// COPYRIGHT AND PERMISSION NOTICE
//
// Copyright (c) 1991-2022 Unicode, Inc. All rights reserved.
// Distributed under the Terms of Use in https://www.unicode.org/copyright.html.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of the Unicode data files and any associated documentation
// (the "Data Files") or Unicode software and any associated documentation
// (the "Software") to deal in the Data Files or Software
// without restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, and/or sell copies of
// the Data Files or Software, and to permit persons to whom the Data Files
// or Software are furnished to do so, provided that either
// (a) this copyright and permission notice appear with all copies
// of the Data Files or Software, or
// (b) this copyright and permission notice appear in associated
// Documentation.
//
// THE DATA FILES AND SOFTWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY OF
// ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT OF THIRD PARTY RIGHTS.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS
// NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL
// DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
// DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
// TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THE DATA FILES OR SOFTWARE.
//
// Except as contained in this notice, the name of a copyright holder
// shall not be used in advertising or otherwise to promote the sale,
// use or other dealings in these Data Files or Software without prior
// written authorization of the copyright holder.

#ifndef LIBCXX_TEST_STD_UTILITIES_FORMAT_FORMAT_STRING_FORMAT_STRING_STD_EXTENDED_GRAPHEME_CLUSTER_H
#define LIBCXX_TEST_STD_UTILITIES_FORMAT_FORMAT_STRING_FORMAT_STRING_STD_EXTENDED_GRAPHEME_CLUSTER_H

#include <array>
#include <string_view>
#include <vector>

template <class CharT>
struct data {{
  /// The input to parse.
  std::basic_string_view<CharT> input;

  /// The first code point all extended grapheme clusters in the input.
  std::vector<char32_t> code_points;

  /// The offset of the last code units of the extended grapheme clusters in the input.
  ///
  /// The vector has the same number of entries as \\ref code_points.
  std::vector<size_t> breaks;
}};

/// The data for UTF-8.
std::array<data<char>, {0}> data_utf8 = {{{{
{1}}}}};

/// The data for UTF-16.
///
/// Note that most of the data for the UTF-16 and UTF-32 are identical. However
/// since the size of the code units differ the breaks can contain different
/// values.
std::array<data<wchar_t>, {0}> data_utf16 = {{{{
{2}}}}};

/// The data for UTF-8.
///
/// Note that most of the data for the UTF-16 and UTF-32 are identical. However
/// since the size of the code units differ the breaks can contain different
/// values.
std::array<data<wchar_t>, {0}> data_utf32 = {{{{
{3}}}}};

#endif // LIBCXX_TEST_STD_UTILITIES_FORMAT_FORMAT_STRING_FORMAT_STRING_STD_EXTENDED_GRAPHEME_CLUSTER_H"""

cpp_test_data_line_template = "     {{{}, {{{}}}, {{{}}}}}"


def lineToCppDataLineUtf8(line: BreakTestItem) -> str:
    return cpp_test_data_line_template.format(
        f'"{line.encoded}"',
        ", ".join([str(x) for x in line.code_points]),
        ", ".join([str(x) for x in line.breaks_utf8]),
    )


def lineToCppDataLineUtf16(line: BreakTestItem) -> str:
    return cpp_test_data_line_template.format(
        f'L"{line.encoded}"',
        ", ".join([str(x) for x in line.code_points]),
        ", ".join([str(x) for x in line.breaks_utf16]),
    )


def lineToCppDataLineUtf32(line: BreakTestItem) -> str:
    return cpp_test_data_line_template.format(
        f'L"{line.encoded}"',
        ", ".join([str(x) for x in line.code_points]),
        ", ".join([str(x) for x in line.breaks_utf32]),
    )


"""
Generate test data from "GraphemeBreakText.txt"
This file can be downloaded from:
https://www.unicode.org/Public/UCD/latest/ucd/auxiliary/GraphemeBreakTest.txt
This script looks for GraphemeBreakTest.txt in same directory as this script
"""


def generate_all() -> str:
    test_data_path = Path(__file__)
    test_data_path = test_data_path.absolute()
    test_data_path = test_data_path.with_name("GraphemeBreakTest.txt")
    lines = list()
    with open(test_data_path, mode="rt", encoding="utf-8") as file:
        while line := parseBreakTestLine(file):
            if len(line.encoded) > 0:
                lines.append(line)
    return cpp_template.format(
        len(lines),
        ",\n".join(map(lineToCppDataLineUtf8, lines)),
        ",\n".join(map(lineToCppDataLineUtf16, lines)),
        ",\n".join(map(lineToCppDataLineUtf32, lines)),
    )


if __name__ == "__main__":
    print(generate_all())
