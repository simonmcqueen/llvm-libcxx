// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// WARNING, this entire header is generated by
// utils/generate_extended_grapheme_cluster_table.py
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

#ifndef _LIBCPP___FORMAT_EXTENDED_GRAPHEME_CLUSTER_TABLE_H
#define _LIBCPP___FORMAT_EXTENDED_GRAPHEME_CLUSTER_TABLE_H

#include <__algorithm/ranges_upper_bound.h>
#include <__config>
#include <__iterator/access.h>
#include <cstddef>
#include <cstdint>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#if _LIBCPP_STD_VER >= 20

namespace __extended_grapheme_custer_property_boundary {

enum class __property : uint8_t {
  // Values generated from the data files.
  __CR,
  __Control,
  __Extend,
  __Extended_Pictographic,
  __L,
  __LF,
  __LV,
  __LVT,
  __Prepend,
  __Regional_Indicator,
  __SpacingMark,
  __T,
  __V,
  __ZWJ,

  // The properies below aren't stored in the "database".

  // Text position properties.
  __sot,
  __eot,

  // The code unit has none of above properties.
  __none
};

/// The entries of the extended grapheme cluster bondary property table.
///
/// The data is generated from
/// - https://www.unicode.org/Public/UCD/latest/ucd/auxiliary/GraphemeBreakProperty.txt
/// - https://www.unicode.org/Public/UCD/latest/ucd/emoji/emoji-data.txt
///
/// The data has 3 values
/// - bits [0, 3] The property. One of the values generated from the datafiles
///   of \ref __property
/// - bits [4, 10] The size of the range.
/// - bits [11, 31] The lower bound code point of the range. The upper bound of
///   the range is lower bound + size.
///
/// The 7 bits for the size allow a maximum range of 128 elements. Some ranges
/// in the Unicode tables are larger. They are stored in multiple consecutive
/// ranges in the data table. An alternative would be to store the sizes in a
/// separate 16-bit value. The original MSVC STL code had such an approach, but
/// this approach uses less space for the data and is about 4% faster in the
/// following benchmark.
/// libcxx/benchmarks/std_format_spec_string_unicode.bench.cpp
// clang-format off
_LIBCPP_HIDE_FROM_ABI inline constexpr uint32_t __entries[1496] = {
    0x00000091,
    0x00005005,
    0x00005811,
    0x00006800,
    0x00007111,
    0x0003fa01,
    0x00054803,
    0x00056801,
    0x00057003,
    0x001806f2,
    0x00241862,
    0x002c8ac2,
    0x002df802,
    0x002e0812,
    0x002e2012,
    0x002e3802,
    0x00300058,
    0x003080a2,
    0x0030e001,
    0x00325942,
    0x00338002,
    0x0036b062,
    0x0036e808,
    0x0036f852,
    0x00373812,
    0x00375032,
    0x00387808,
    0x00388802,
    0x003981a2,
    0x003d30a2,
    0x003f5882,
    0x003fe802,
    0x0040b032,
    0x0040d882,
    0x00412822,
    0x00414842,
    0x0042c822,
    0x00448018,
    0x0044c072,
    0x00465172,
    0x00471008,
    0x004719f2,
    0x0048180a,
    0x0049d002,
    0x0049d80a,
    0x0049e002,
    0x0049f02a,
    0x004a0872,
    0x004a483a,
    0x004a6802,
    0x004a701a,
    0x004a8862,
    0x004b1012,
    0x004c0802,
    0x004c101a,
    0x004de002,
    0x004df002,
    0x004df81a,
    0x004e0832,
    0x004e381a,
    0x004e581a,
    0x004e6802,
    0x004eb802,
    0x004f1012,
    0x004ff002,
    0x00500812,
    0x0050180a,
    0x0051e002,
    0x0051f02a,
    0x00520812,
    0x00523812,
    0x00525822,
    0x00528802,
    0x00538012,
    0x0053a802,
    0x00540812,
    0x0054180a,
    0x0055e002,
    0x0055f02a,
    0x00560842,
    0x00563812,
    0x0056480a,
    0x0056581a,
    0x00566802,
    0x00571012,
    0x0057d052,
    0x00580802,
    0x0058101a,
    0x0059e002,
    0x0059f012,
    0x005a000a,
    0x005a0832,
    0x005a381a,
    0x005a581a,
    0x005a6802,
    0x005aa822,
    0x005b1012,
    0x005c1002,
    0x005df002,
    0x005df80a,
    0x005e0002,
    0x005e081a,
    0x005e302a,
    0x005e502a,
    0x005e6802,
    0x005eb802,
    0x00600002,
    0x0060082a,
    0x00602002,
    0x0061e002,
    0x0061f022,
    0x0062083a,
    0x00623022,
    0x00625032,
    0x0062a812,
    0x00631012,
    0x00640802,
    0x0064101a,
    0x0065e002,
    0x0065f00a,
    0x0065f802,
    0x0066001a,
    0x00661002,
    0x0066181a,
    0x00663002,
    0x0066381a,
    0x0066501a,
    0x00666012,
    0x0066a812,
    0x00671012,
    0x0067980a,
    0x00680012,
    0x0068101a,
    0x0069d812,
    0x0069f002,
    0x0069f81a,
    0x006a0832,
    0x006a302a,
    0x006a502a,
    0x006a6802,
    0x006a7008,
    0x006ab802,
    0x006b1012,
    0x006c0802,
    0x006c101a,
    0x006e5002,
    0x006e7802,
    0x006e801a,
    0x006e9022,
    0x006eb002,
    0x006ec06a,
    0x006ef802,
    0x006f901a,
    0x00718802,
    0x0071980a,
    0x0071a062,
    0x00723872,
    0x00758802,
    0x0075980a,
    0x0075a082,
    0x00764062,
    0x0078c012,
    0x0079a802,
    0x0079b802,
    0x0079c802,
    0x0079f01a,
    0x007b88d2,
    0x007bf80a,
    0x007c0042,
    0x007c3012,
    0x007c68a2,
    0x007cca32,
    0x007e3002,
    0x00816832,
    0x0081880a,
    0x00819052,
    0x0081c812,
    0x0081d81a,
    0x0081e812,
    0x0082b01a,
    0x0082c012,
    0x0082f022,
    0x00838832,
    0x00841002,
    0x0084200a,
    0x00842812,
    0x00846802,
    0x0084e802,
    0x008805f4,
    0x008b047c,
    0x008d457b,
    0x009ae822,
    0x00b89022,
    0x00b8a80a,
    0x00b99012,
    0x00b9a00a,
    0x00ba9012,
    0x00bb9012,
    0x00bda012,
    0x00bdb00a,
    0x00bdb862,
    0x00bdf07a,
    0x00be3002,
    0x00be381a,
    0x00be48a2,
    0x00bee802,
    0x00c05822,
    0x00c07001,
    0x00c07802,
    0x00c42812,
    0x00c54802,
    0x00c90022,
    0x00c9183a,
    0x00c93812,
    0x00c9482a,
    0x00c9801a,
    0x00c99002,
    0x00c9985a,
    0x00c9c822,
    0x00d0b812,
    0x00d0c81a,
    0x00d0d802,
    0x00d2a80a,
    0x00d2b002,
    0x00d2b80a,
    0x00d2c062,
    0x00d30002,
    0x00d31002,
    0x00d32872,
    0x00d3685a,
    0x00d39892,
    0x00d3f802,
    0x00d581e2,
    0x00d80032,
    0x00d8200a,
    0x00d9a062,
    0x00d9d80a,
    0x00d9e002,
    0x00d9e84a,
    0x00da1002,
    0x00da181a,
    0x00db5882,
    0x00dc0012,
    0x00dc100a,
    0x00dd080a,
    0x00dd1032,
    0x00dd301a,
    0x00dd4012,
    0x00dd500a,
    0x00dd5822,
    0x00df3002,
    0x00df380a,
    0x00df4012,
    0x00df502a,
    0x00df6802,
    0x00df700a,
    0x00df7822,
    0x00df901a,
    0x00e1207a,
    0x00e16072,
    0x00e1a01a,
    0x00e1b012,
    0x00e68022,
    0x00e6a0c2,
    0x00e7080a,
    0x00e71062,
    0x00e76802,
    0x00e7a002,
    0x00e7b80a,
    0x00e7c012,
    0x00ee03f2,
    0x01005801,
    0x01006002,
    0x0100680d,
    0x01007011,
    0x01014061,
    0x0101e003,
    0x01024803,
    0x010300f1,
    0x01068202,
    0x01091003,
    0x0109c803,
    0x010ca053,
    0x010d4813,
    0x0118d013,
    0x01194003,
    0x011c4003,
    0x011e7803,
    0x011f48a3,
    0x011fc023,
    0x01261003,
    0x012d5013,
    0x012db003,
    0x012e0003,
    0x012fd833,
    0x01300053,
    0x013038b3,
    0x0130a713,
    0x01348753,
    0x013840a3,
    0x0138a003,
    0x0138b003,
    0x0138e803,
    0x01390803,
    0x01394003,
    0x01399813,
    0x013a2003,
    0x013a3803,
    0x013a6003,
    0x013a7003,
    0x013a9823,
    0x013ab803,
    0x013b1843,
    0x013ca823,
    0x013d0803,
    0x013d8003,
    0x013df803,
    0x0149a013,
    0x01582823,
    0x0158d813,
    0x015a8003,
    0x015aa803,
    0x01677822,
    0x016bf802,
    0x016f01f2,
    0x01815052,
    0x01818003,
    0x0181e803,
    0x0184c812,
    0x0194b803,
    0x0194c803,
    0x05337832,
    0x0533a092,
    0x0534f012,
    0x05378012,
    0x05401002,
    0x05403002,
    0x05405802,
    0x0541181a,
    0x05412812,
    0x0541380a,
    0x05416002,
    0x0544001a,
    0x0545a0fa,
    0x05462012,
    0x05470112,
    0x0547f802,
    0x05493072,
    0x054a38a2,
    0x054a901a,
    0x054b01c4,
    0x054c0022,
    0x054c180a,
    0x054d9802,
    0x054da01a,
    0x054db032,
    0x054dd01a,
    0x054de012,
    0x054df02a,
    0x054f2802,
    0x05514852,
    0x0551781a,
    0x05518812,
    0x0551981a,
    0x0551a812,
    0x05521802,
    0x05526002,
    0x0552680a,
    0x0553e002,
    0x05558002,
    0x05559022,
    0x0555b812,
    0x0555f012,
    0x05560802,
    0x0557580a,
    0x05576012,
    0x0557701a,
    0x0557a80a,
    0x0557b002,
    0x055f181a,
    0x055f2802,
    0x055f301a,
    0x055f4002,
    0x055f481a,
    0x055f600a,
    0x055f6802,
    0x05600006,
    0x056009a7,
    0x0560e006,
    0x0560e9a7,
    0x0561c006,
    0x0561c9a7,
    0x0562a006,
    0x0562a9a7,
    0x05638006,
    0x056389a7,
    0x05646006,
    0x056469a7,
    0x05654006,
    0x056549a7,
    0x05662006,
    0x056629a7,
    0x05670006,
    0x056709a7,
    0x0567e006,
    0x0567e9a7,
    0x0568c006,
    0x0568c9a7,
    0x0569a006,
    0x0569a9a7,
    0x056a8006,
    0x056a89a7,
    0x056b6006,
    0x056b69a7,
    0x056c4006,
    0x056c49a7,
    0x056d2006,
    0x056d29a7,
    0x056e0006,
    0x056e09a7,
    0x056ee006,
    0x056ee9a7,
    0x056fc006,
    0x056fc9a7,
    0x0570a006,
    0x0570a9a7,
    0x05718006,
    0x057189a7,
    0x05726006,
    0x057269a7,
    0x05734006,
    0x057349a7,
    0x05742006,
    0x057429a7,
    0x05750006,
    0x057509a7,
    0x0575e006,
    0x0575e9a7,
    0x0576c006,
    0x0576c9a7,
    0x0577a006,
    0x0577a9a7,
    0x05788006,
    0x057889a7,
    0x05796006,
    0x057969a7,
    0x057a4006,
    0x057a49a7,
    0x057b2006,
    0x057b29a7,
    0x057c0006,
    0x057c09a7,
    0x057ce006,
    0x057ce9a7,
    0x057dc006,
    0x057dc9a7,
    0x057ea006,
    0x057ea9a7,
    0x057f8006,
    0x057f89a7,
    0x05806006,
    0x058069a7,
    0x05814006,
    0x058149a7,
    0x05822006,
    0x058229a7,
    0x05830006,
    0x058309a7,
    0x0583e006,
    0x0583e9a7,
    0x0584c006,
    0x0584c9a7,
    0x0585a006,
    0x0585a9a7,
    0x05868006,
    0x058689a7,
    0x05876006,
    0x058769a7,
    0x05884006,
    0x058849a7,
    0x05892006,
    0x058929a7,
    0x058a0006,
    0x058a09a7,
    0x058ae006,
    0x058ae9a7,
    0x058bc006,
    0x058bc9a7,
    0x058ca006,
    0x058ca9a7,
    0x058d8006,
    0x058d89a7,
    0x058e6006,
    0x058e69a7,
    0x058f4006,
    0x058f49a7,
    0x05902006,
    0x059029a7,
    0x05910006,
    0x059109a7,
    0x0591e006,
    0x0591e9a7,
    0x0592c006,
    0x0592c9a7,
    0x0593a006,
    0x0593a9a7,
    0x05948006,
    0x059489a7,
    0x05956006,
    0x059569a7,
    0x05964006,
    0x059649a7,
    0x05972006,
    0x059729a7,
    0x05980006,
    0x059809a7,
    0x0598e006,
    0x0598e9a7,
    0x0599c006,
    0x0599c9a7,
    0x059aa006,
    0x059aa9a7,
    0x059b8006,
    0x059b89a7,
    0x059c6006,
    0x059c69a7,
    0x059d4006,
    0x059d49a7,
    0x059e2006,
    0x059e29a7,
    0x059f0006,
    0x059f09a7,
    0x059fe006,
    0x059fe9a7,
    0x05a0c006,
    0x05a0c9a7,
    0x05a1a006,
    0x05a1a9a7,
    0x05a28006,
    0x05a289a7,
    0x05a36006,
    0x05a369a7,
    0x05a44006,
    0x05a449a7,
    0x05a52006,
    0x05a529a7,
    0x05a60006,
    0x05a609a7,
    0x05a6e006,
    0x05a6e9a7,
    0x05a7c006,
    0x05a7c9a7,
    0x05a8a006,
    0x05a8a9a7,
    0x05a98006,
    0x05a989a7,
    0x05aa6006,
    0x05aa69a7,
    0x05ab4006,
    0x05ab49a7,
    0x05ac2006,
    0x05ac29a7,
    0x05ad0006,
    0x05ad09a7,
    0x05ade006,
    0x05ade9a7,
    0x05aec006,
    0x05aec9a7,
    0x05afa006,
    0x05afa9a7,
    0x05b08006,
    0x05b089a7,
    0x05b16006,
    0x05b169a7,
    0x05b24006,
    0x05b249a7,
    0x05b32006,
    0x05b329a7,
    0x05b40006,
    0x05b409a7,
    0x05b4e006,
    0x05b4e9a7,
    0x05b5c006,
    0x05b5c9a7,
    0x05b6a006,
    0x05b6a9a7,
    0x05b78006,
    0x05b789a7,
    0x05b86006,
    0x05b869a7,
    0x05b94006,
    0x05b949a7,
    0x05ba2006,
    0x05ba29a7,
    0x05bb0006,
    0x05bb09a7,
    0x05bbe006,
    0x05bbe9a7,
    0x05bcc006,
    0x05bcc9a7,
    0x05bda006,
    0x05bda9a7,
    0x05be8006,
    0x05be89a7,
    0x05bf6006,
    0x05bf69a7,
    0x05c04006,
    0x05c049a7,
    0x05c12006,
    0x05c129a7,
    0x05c20006,
    0x05c209a7,
    0x05c2e006,
    0x05c2e9a7,
    0x05c3c006,
    0x05c3c9a7,
    0x05c4a006,
    0x05c4a9a7,
    0x05c58006,
    0x05c589a7,
    0x05c66006,
    0x05c669a7,
    0x05c74006,
    0x05c749a7,
    0x05c82006,
    0x05c829a7,
    0x05c90006,
    0x05c909a7,
    0x05c9e006,
    0x05c9e9a7,
    0x05cac006,
    0x05cac9a7,
    0x05cba006,
    0x05cba9a7,
    0x05cc8006,
    0x05cc89a7,
    0x05cd6006,
    0x05cd69a7,
    0x05ce4006,
    0x05ce49a7,
    0x05cf2006,
    0x05cf29a7,
    0x05d00006,
    0x05d009a7,
    0x05d0e006,
    0x05d0e9a7,
    0x05d1c006,
    0x05d1c9a7,
    0x05d2a006,
    0x05d2a9a7,
    0x05d38006,
    0x05d389a7,
    0x05d46006,
    0x05d469a7,
    0x05d54006,
    0x05d549a7,
    0x05d62006,
    0x05d629a7,
    0x05d70006,
    0x05d709a7,
    0x05d7e006,
    0x05d7e9a7,
    0x05d8c006,
    0x05d8c9a7,
    0x05d9a006,
    0x05d9a9a7,
    0x05da8006,
    0x05da89a7,
    0x05db6006,
    0x05db69a7,
    0x05dc4006,
    0x05dc49a7,
    0x05dd2006,
    0x05dd29a7,
    0x05de0006,
    0x05de09a7,
    0x05dee006,
    0x05dee9a7,
    0x05dfc006,
    0x05dfc9a7,
    0x05e0a006,
    0x05e0a9a7,
    0x05e18006,
    0x05e189a7,
    0x05e26006,
    0x05e269a7,
    0x05e34006,
    0x05e349a7,
    0x05e42006,
    0x05e429a7,
    0x05e50006,
    0x05e509a7,
    0x05e5e006,
    0x05e5e9a7,
    0x05e6c006,
    0x05e6c9a7,
    0x05e7a006,
    0x05e7a9a7,
    0x05e88006,
    0x05e889a7,
    0x05e96006,
    0x05e969a7,
    0x05ea4006,
    0x05ea49a7,
    0x05eb2006,
    0x05eb29a7,
    0x05ec0006,
    0x05ec09a7,
    0x05ece006,
    0x05ece9a7,
    0x05edc006,
    0x05edc9a7,
    0x05eea006,
    0x05eea9a7,
    0x05ef8006,
    0x05ef89a7,
    0x05f06006,
    0x05f069a7,
    0x05f14006,
    0x05f149a7,
    0x05f22006,
    0x05f229a7,
    0x05f30006,
    0x05f309a7,
    0x05f3e006,
    0x05f3e9a7,
    0x05f4c006,
    0x05f4c9a7,
    0x05f5a006,
    0x05f5a9a7,
    0x05f68006,
    0x05f689a7,
    0x05f76006,
    0x05f769a7,
    0x05f84006,
    0x05f849a7,
    0x05f92006,
    0x05f929a7,
    0x05fa0006,
    0x05fa09a7,
    0x05fae006,
    0x05fae9a7,
    0x05fbc006,
    0x05fbc9a7,
    0x05fca006,
    0x05fca9a7,
    0x05fd8006,
    0x05fd89a7,
    0x05fe6006,
    0x05fe69a7,
    0x05ff4006,
    0x05ff49a7,
    0x06002006,
    0x060029a7,
    0x06010006,
    0x060109a7,
    0x0601e006,
    0x0601e9a7,
    0x0602c006,
    0x0602c9a7,
    0x0603a006,
    0x0603a9a7,
    0x06048006,
    0x060489a7,
    0x06056006,
    0x060569a7,
    0x06064006,
    0x060649a7,
    0x06072006,
    0x060729a7,
    0x06080006,
    0x060809a7,
    0x0608e006,
    0x0608e9a7,
    0x0609c006,
    0x0609c9a7,
    0x060aa006,
    0x060aa9a7,
    0x060b8006,
    0x060b89a7,
    0x060c6006,
    0x060c69a7,
    0x060d4006,
    0x060d49a7,
    0x060e2006,
    0x060e29a7,
    0x060f0006,
    0x060f09a7,
    0x060fe006,
    0x060fe9a7,
    0x0610c006,
    0x0610c9a7,
    0x0611a006,
    0x0611a9a7,
    0x06128006,
    0x061289a7,
    0x06136006,
    0x061369a7,
    0x06144006,
    0x061449a7,
    0x06152006,
    0x061529a7,
    0x06160006,
    0x061609a7,
    0x0616e006,
    0x0616e9a7,
    0x0617c006,
    0x0617c9a7,
    0x0618a006,
    0x0618a9a7,
    0x06198006,
    0x061989a7,
    0x061a6006,
    0x061a69a7,
    0x061b4006,
    0x061b49a7,
    0x061c2006,
    0x061c29a7,
    0x061d0006,
    0x061d09a7,
    0x061de006,
    0x061de9a7,
    0x061ec006,
    0x061ec9a7,
    0x061fa006,
    0x061fa9a7,
    0x06208006,
    0x062089a7,
    0x06216006,
    0x062169a7,
    0x06224006,
    0x062249a7,
    0x06232006,
    0x062329a7,
    0x06240006,
    0x062409a7,
    0x0624e006,
    0x0624e9a7,
    0x0625c006,
    0x0625c9a7,
    0x0626a006,
    0x0626a9a7,
    0x06278006,
    0x062789a7,
    0x06286006,
    0x062869a7,
    0x06294006,
    0x062949a7,
    0x062a2006,
    0x062a29a7,
    0x062b0006,
    0x062b09a7,
    0x062be006,
    0x062be9a7,
    0x062cc006,
    0x062cc9a7,
    0x062da006,
    0x062da9a7,
    0x062e8006,
    0x062e89a7,
    0x062f6006,
    0x062f69a7,
    0x06304006,
    0x063049a7,
    0x06312006,
    0x063129a7,
    0x06320006,
    0x063209a7,
    0x0632e006,
    0x0632e9a7,
    0x0633c006,
    0x0633c9a7,
    0x0634a006,
    0x0634a9a7,
    0x06358006,
    0x063589a7,
    0x06366006,
    0x063669a7,
    0x06374006,
    0x063749a7,
    0x06382006,
    0x063829a7,
    0x06390006,
    0x063909a7,
    0x0639e006,
    0x0639e9a7,
    0x063ac006,
    0x063ac9a7,
    0x063ba006,
    0x063ba9a7,
    0x063c8006,
    0x063c89a7,
    0x063d6006,
    0x063d69a7,
    0x063e4006,
    0x063e49a7,
    0x063f2006,
    0x063f29a7,
    0x06400006,
    0x064009a7,
    0x0640e006,
    0x0640e9a7,
    0x0641c006,
    0x0641c9a7,
    0x0642a006,
    0x0642a9a7,
    0x06438006,
    0x064389a7,
    0x06446006,
    0x064469a7,
    0x06454006,
    0x064549a7,
    0x06462006,
    0x064629a7,
    0x06470006,
    0x064709a7,
    0x0647e006,
    0x0647e9a7,
    0x0648c006,
    0x0648c9a7,
    0x0649a006,
    0x0649a9a7,
    0x064a8006,
    0x064a89a7,
    0x064b6006,
    0x064b69a7,
    0x064c4006,
    0x064c49a7,
    0x064d2006,
    0x064d29a7,
    0x064e0006,
    0x064e09a7,
    0x064ee006,
    0x064ee9a7,
    0x064fc006,
    0x064fc9a7,
    0x0650a006,
    0x0650a9a7,
    0x06518006,
    0x065189a7,
    0x06526006,
    0x065269a7,
    0x06534006,
    0x065349a7,
    0x06542006,
    0x065429a7,
    0x06550006,
    0x065509a7,
    0x0655e006,
    0x0655e9a7,
    0x0656c006,
    0x0656c9a7,
    0x0657a006,
    0x0657a9a7,
    0x06588006,
    0x065889a7,
    0x06596006,
    0x065969a7,
    0x065a4006,
    0x065a49a7,
    0x065b2006,
    0x065b29a7,
    0x065c0006,
    0x065c09a7,
    0x065ce006,
    0x065ce9a7,
    0x065dc006,
    0x065dc9a7,
    0x065ea006,
    0x065ea9a7,
    0x065f8006,
    0x065f89a7,
    0x06606006,
    0x066069a7,
    0x06614006,
    0x066149a7,
    0x06622006,
    0x066229a7,
    0x06630006,
    0x066309a7,
    0x0663e006,
    0x0663e9a7,
    0x0664c006,
    0x0664c9a7,
    0x0665a006,
    0x0665a9a7,
    0x06668006,
    0x066689a7,
    0x06676006,
    0x066769a7,
    0x06684006,
    0x066849a7,
    0x06692006,
    0x066929a7,
    0x066a0006,
    0x066a09a7,
    0x066ae006,
    0x066ae9a7,
    0x066bc006,
    0x066bc9a7,
    0x066ca006,
    0x066ca9a7,
    0x066d8006,
    0x066d89a7,
    0x066e6006,
    0x066e69a7,
    0x066f4006,
    0x066f49a7,
    0x06702006,
    0x067029a7,
    0x06710006,
    0x067109a7,
    0x0671e006,
    0x0671e9a7,
    0x0672c006,
    0x0672c9a7,
    0x0673a006,
    0x0673a9a7,
    0x06748006,
    0x067489a7,
    0x06756006,
    0x067569a7,
    0x06764006,
    0x067649a7,
    0x06772006,
    0x067729a7,
    0x06780006,
    0x067809a7,
    0x0678e006,
    0x0678e9a7,
    0x0679c006,
    0x0679c9a7,
    0x067aa006,
    0x067aa9a7,
    0x067b8006,
    0x067b89a7,
    0x067c6006,
    0x067c69a7,
    0x067d4006,
    0x067d49a7,
    0x067e2006,
    0x067e29a7,
    0x067f0006,
    0x067f09a7,
    0x067fe006,
    0x067fe9a7,
    0x0680c006,
    0x0680c9a7,
    0x0681a006,
    0x0681a9a7,
    0x06828006,
    0x068289a7,
    0x06836006,
    0x068369a7,
    0x06844006,
    0x068449a7,
    0x06852006,
    0x068529a7,
    0x06860006,
    0x068609a7,
    0x0686e006,
    0x0686e9a7,
    0x0687c006,
    0x0687c9a7,
    0x0688a006,
    0x0688a9a7,
    0x06898006,
    0x068989a7,
    0x068a6006,
    0x068a69a7,
    0x068b4006,
    0x068b49a7,
    0x068c2006,
    0x068c29a7,
    0x068d0006,
    0x068d09a7,
    0x068de006,
    0x068de9a7,
    0x068ec006,
    0x068ec9a7,
    0x068fa006,
    0x068fa9a7,
    0x06908006,
    0x069089a7,
    0x06916006,
    0x069169a7,
    0x06924006,
    0x069249a7,
    0x06932006,
    0x069329a7,
    0x06940006,
    0x069409a7,
    0x0694e006,
    0x0694e9a7,
    0x0695c006,
    0x0695c9a7,
    0x0696a006,
    0x0696a9a7,
    0x06978006,
    0x069789a7,
    0x06986006,
    0x069869a7,
    0x06994006,
    0x069949a7,
    0x069a2006,
    0x069a29a7,
    0x069b0006,
    0x069b09a7,
    0x069be006,
    0x069be9a7,
    0x069cc006,
    0x069cc9a7,
    0x069da006,
    0x069da9a7,
    0x069e8006,
    0x069e89a7,
    0x069f6006,
    0x069f69a7,
    0x06a04006,
    0x06a049a7,
    0x06a12006,
    0x06a129a7,
    0x06a20006,
    0x06a209a7,
    0x06a2e006,
    0x06a2e9a7,
    0x06a3c006,
    0x06a3c9a7,
    0x06a4a006,
    0x06a4a9a7,
    0x06a58006,
    0x06a589a7,
    0x06a66006,
    0x06a669a7,
    0x06a74006,
    0x06a749a7,
    0x06a82006,
    0x06a829a7,
    0x06a90006,
    0x06a909a7,
    0x06a9e006,
    0x06a9e9a7,
    0x06aac006,
    0x06aac9a7,
    0x06aba006,
    0x06aba9a7,
    0x06ac8006,
    0x06ac89a7,
    0x06ad6006,
    0x06ad69a7,
    0x06ae4006,
    0x06ae49a7,
    0x06af2006,
    0x06af29a7,
    0x06b00006,
    0x06b009a7,
    0x06b0e006,
    0x06b0e9a7,
    0x06b1c006,
    0x06b1c9a7,
    0x06b2a006,
    0x06b2a9a7,
    0x06b38006,
    0x06b389a7,
    0x06b46006,
    0x06b469a7,
    0x06b54006,
    0x06b549a7,
    0x06b62006,
    0x06b629a7,
    0x06b70006,
    0x06b709a7,
    0x06b7e006,
    0x06b7e9a7,
    0x06b8c006,
    0x06b8c9a7,
    0x06b9a006,
    0x06b9a9a7,
    0x06ba8006,
    0x06ba89a7,
    0x06bb6006,
    0x06bb69a7,
    0x06bc4006,
    0x06bc49a7,
    0x06bd816c,
    0x06be5b0b,
    0x07d8f002,
    0x07f000f2,
    0x07f100f2,
    0x07f7f801,
    0x07fcf012,
    0x07ff80b1,
    0x080fe802,
    0x08170002,
    0x081bb042,
    0x08500822,
    0x08502812,
    0x08506032,
    0x0851c022,
    0x0851f802,
    0x08572812,
    0x08692032,
    0x08755812,
    0x0877e822,
    0x087a30a2,
    0x087c1032,
    0x0880000a,
    0x08800802,
    0x0880100a,
    0x0881c0e2,
    0x08838002,
    0x08839812,
    0x0883f822,
    0x0884100a,
    0x0885802a,
    0x08859832,
    0x0885b81a,
    0x0885c812,
    0x0885e808,
    0x08861002,
    0x08866808,
    0x08880022,
    0x08893842,
    0x0889600a,
    0x08896872,
    0x088a281a,
    0x088b9802,
    0x088c0012,
    0x088c100a,
    0x088d982a,
    0x088db082,
    0x088df81a,
    0x088e1018,
    0x088e4832,
    0x088e700a,
    0x088e7802,
    0x0891602a,
    0x08917822,
    0x0891901a,
    0x0891a002,
    0x0891a80a,
    0x0891b012,
    0x0891f002,
    0x08920802,
    0x0896f802,
    0x0897002a,
    0x08971872,
    0x08980012,
    0x0898101a,
    0x0899d812,
    0x0899f002,
    0x0899f80a,
    0x089a0002,
    0x089a083a,
    0x089a381a,
    0x089a582a,
    0x089ab802,
    0x089b101a,
    0x089b3062,
    0x089b8042,
    0x08a1a82a,
    0x08a1c072,
    0x08a2001a,
    0x08a21022,
    0x08a2280a,
    0x08a23002,
    0x08a2f002,
    0x08a58002,
    0x08a5881a,
    0x08a59852,
    0x08a5c80a,
    0x08a5d002,
    0x08a5d81a,
    0x08a5e802,
    0x08a5f00a,
    0x08a5f812,
    0x08a6080a,
    0x08a61012,
    0x08ad7802,
    0x08ad801a,
    0x08ad9032,
    0x08adc03a,
    0x08ade012,
    0x08adf00a,
    0x08adf812,
    0x08aee012,
    0x08b1802a,
    0x08b19872,
    0x08b1d81a,
    0x08b1e802,
    0x08b1f00a,
    0x08b1f812,
    0x08b55802,
    0x08b5600a,
    0x08b56802,
    0x08b5701a,
    0x08b58052,
    0x08b5b00a,
    0x08b5b802,
    0x08b8e822,
    0x08b91032,
    0x08b9300a,
    0x08b93842,
    0x08c1602a,
    0x08c17882,
    0x08c1c00a,
    0x08c1c812,
    0x08c98002,
    0x08c9884a,
    0x08c9b81a,
    0x08c9d812,
    0x08c9e80a,
    0x08c9f002,
    0x08c9f808,
    0x08ca000a,
    0x08ca0808,
    0x08ca100a,
    0x08ca1802,
    0x08ce882a,
    0x08cea032,
    0x08ced012,
    0x08cee03a,
    0x08cf0002,
    0x08cf200a,
    0x08d00892,
    0x08d19852,
    0x08d1c80a,
    0x08d1d008,
    0x08d1d832,
    0x08d23802,
    0x08d28852,
    0x08d2b81a,
    0x08d2c822,
    0x08d42058,
    0x08d450c2,
    0x08d4b80a,
    0x08d4c012,
    0x08e1780a,
    0x08e18062,
    0x08e1c052,
    0x08e1f00a,
    0x08e1f802,
    0x08e49152,
    0x08e5480a,
    0x08e55062,
    0x08e5880a,
    0x08e59012,
    0x08e5a00a,
    0x08e5a812,
    0x08e98852,
    0x08e9d002,
    0x08e9e012,
    0x08e9f862,
    0x08ea3008,
    0x08ea3802,
    0x08ec504a,
    0x08ec8012,
    0x08ec981a,
    0x08eca802,
    0x08ecb00a,
    0x08ecb802,
    0x08f79812,
    0x08f7a81a,
    0x08f80012,
    0x08f81008,
    0x08f8180a,
    0x08f9a01a,
    0x08f9b042,
    0x08f9f01a,
    0x08fa0002,
    0x08fa080a,
    0x08fa1002,
    0x09a180f1,
    0x09a20002,
    0x09a238e2,
    0x0b578042,
    0x0b598062,
    0x0b7a7802,
    0x0b7a8b6a,
    0x0b7c7832,
    0x0b7f2002,
    0x0b7f801a,
    0x0de4e812,
    0x0de50031,
    0x0e7802d2,
    0x0e798162,
    0x0e8b2802,
    0x0e8b300a,
    0x0e8b3822,
    0x0e8b680a,
    0x0e8b7042,
    0x0e8b9871,
    0x0e8bd872,
    0x0e8c2862,
    0x0e8d5032,
    0x0e921022,
    0x0ed00362,
    0x0ed1db12,
    0x0ed3a802,
    0x0ed42002,
    0x0ed4d842,
    0x0ed508e2,
    0x0f000062,
    0x0f004102,
    0x0f00d862,
    0x0f011812,
    0x0f013042,
    0x0f047802,
    0x0f098062,
    0x0f157002,
    0x0f176032,
    0x0f276032,
    0x0f468062,
    0x0f4a2062,
    0x0f8007f3,
    0x0f8407f3,
    0x0f886823,
    0x0f897803,
    0x0f8b6053,
    0x0f8bf013,
    0x0f8c7003,
    0x0f8c8893,
    0x0f8d6b83,
    0x0f8f3199,
    0x0f9008e3,
    0x0f90d003,
    0x0f917803,
    0x0f919083,
    0x0f91e033,
    0x0f924ff3,
    0x0f964ff3,
    0x0f9a4ff3,
    0x0f9e4b13,
    0x0f9fd842,
    0x0fa007f3,
    0x0fa407f3,
    0x0fa803d3,
    0x0faa37f3,
    0x0fae37f3,
    0x0fb23093,
    0x0fb407f3,
    0x0fbba0b3,
    0x0fbeaaa3,
    0x0fc06033,
    0x0fc24073,
    0x0fc2d053,
    0x0fc44073,
    0x0fc57513,
    0x0fc862e3,
    0x0fc9e093,
    0x0fca3ff3,
    0x0fce3ff3,
    0x0fd23ff3,
    0x0fd63b83,
    0x0fe007f3,
    0x0fe407f3,
    0x0fe807f3,
    0x0fec07f3,
    0x0ff007f3,
    0x0ff407f3,
    0x0ff807f3,
    0x0ffc07d3,
    0x700001f1,
    0x700105f2,
    0x700407f1,
    0x700807f2,
    0x700c06f2,
    0x700f87f1,
    0x701387f1,
    0x701787f1,
    0x701b87f1,
    0x701f87f1,
    0x702387f1,
    0x702787f1,
    0x702b87f1,
    0x702f87f1,
    0x703387f1,
    0x703787f1,
    0x703b87f1,
    0x703f87f1,
    0x704387f1,
    0x704787f1,
    0x704b87f1,
    0x704f87f1,
    0x705387f1,
    0x705787f1,
    0x705b87f1,
    0x705f87f1,
    0x706387f1,
    0x706787f1,
    0x706b87f1,
    0x706f87f1,
    0x707387f1,
    0x707787f1,
    0x707b87f1,
    0x707f80f1};
// clang-format on

/// Returns the extended grapheme cluster bondary property of a code point.
[[nodiscard]] _LIBCPP_HIDE_FROM_ABI constexpr __property __get_property(const char32_t __code_point) noexcept {
  // The algorithm searches for the upper bound of the range and, when found,
  // steps back one entry. This algorithm is used since the code point can be
  // anywhere in the range. After a lower bound is found the next step is to
  // compare whether the code unit is indeed in the range.
  //
  // Since the entry contains a code unit, size, and property the code point
  // being sought needs to be adjusted. Just shifting the code point to the
  // proper position doesn't work; suppose an entry has property 0, size 1,
  // and lower bound 3. This results in the entry 0x1810.
  // When searching for code point 3 it will search for 0x1800, find 0x1810
  // and moves to the previous entry. Thus the lower bound value will never
  // be found.
  // The simple solution is to set the bits belonging to the property and
  // size. Then the upper bound for code point 3 will return the entry after
  // 0x1810. After moving to the previous entry the algorithm arrives at the
  // correct entry.
  ptrdiff_t __i = std::ranges::upper_bound(__entries, (__code_point << 11) | 0x7ffu) - __entries;
  if (__i == 0)
    return __property::__none;

  --__i;
  uint32_t __upper_bound = (__entries[__i] >> 11) + ((__entries[__i] >> 4) & 0x7f);
  if (__code_point <= __upper_bound)
    return static_cast<__property>(__entries[__i] & 0xf);

  return __property::__none;
}

} // namespace __extended_grapheme_custer_property_boundary

#endif // _LIBCPP_STD_VER >= 20

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___FORMAT_EXTENDED_GRAPHEME_CLUSTER_TABLE_H
