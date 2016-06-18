//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03

// <experimental/filesystem>

// class path

// template <class ECharT, class Traits = char_traits<ECharT>,
//           class Allocator = allocator<ECharT>>
// basic_string<ECharT, Traits, Allocator>
// string(const Allocator& a = Allocator()) const;

#include <experimental/filesystem>
#include <type_traits>
#include <cassert>

#include "test_macros.h"
#include "test_iterators.h"
#include "count_new.hpp"
#include "min_allocator.h"
#include "filesystem_test_helper.hpp"
#include "assert_checkpoint.h"

namespace fs = std::experimental::filesystem;

MultiStringType shortString = MKSTR("abc");
MultiStringType longString = MKSTR("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ/123456789/abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

template <class CharT>
void doShortStringTest(MultiStringType const& MS) {
  using namespace fs;
  using Ptr = CharT const*;
  using Str = std::basic_string<CharT>;
  using Alloc = std::allocator<CharT>;
  Ptr value = MS;
  const path p((const char*)MS);
  {
      DisableAllocationGuard g; // should not allocate
      CHECKPOINT("short string default constructed allocator");
      Str s = p.string<CharT>();
      assert(s == value);
      CHECKPOINT("short string provided allocator");
      Str s2 = p.string<CharT>(Alloc{});
      assert(s2 == value);
  }
}

template <class CharT>
void doLongStringTest(MultiStringType const& MS) {
  using namespace fs;
  using Ptr = CharT const*;
  using Str = std::basic_string<CharT>;
  Ptr value = MS;
  const path p((const char*)MS);
  { // Default allocator
      using Alloc = std::allocator<CharT>;
      RequireAllocationGuard g;
      Str s = p.string<CharT>();
      assert(s == value);
      Str s2 = p.string<CharT>(Alloc{});
      assert(s2 == value);
  }
  using MAlloc = malloc_allocator<CharT>;
  MAlloc::reset();
  CHECKPOINT("Malloc allocator test - default construct");
  { // Other allocator - default construct
      using Traits = std::char_traits<CharT>;
      using AStr = std::basic_string<CharT, Traits, MAlloc>;
      DisableAllocationGuard g;
      AStr s = p.string<CharT, Traits, MAlloc>();
      assert(s == value);
      assert(MAlloc::alloc_count > 0);
      assert(MAlloc::outstanding_alloc() == 1);
  }
  MAlloc::reset();
  CHECKPOINT("Malloc allocator test - provided copy");
  { // Other allocator - provided copy
      using Traits = std::char_traits<CharT>;
      using AStr = std::basic_string<CharT, Traits, MAlloc>;
      DisableAllocationGuard g;
      MAlloc a;
      // don't allow another allocator to be default constructed.
      MAlloc::disable_default_constructor = true;
      AStr s = p.string<CharT, Traits, MAlloc>(a);
      assert(s == value);
      assert(MAlloc::alloc_count > 0);
      assert(MAlloc::outstanding_alloc() == 1);
  }
  MAlloc::reset();
  /////////////////////////////////////////////////////////////////////////////
}

int main()
{
  using namespace fs;
  {
    auto const& S = shortString;
    doShortStringTest<char>(S);
    doShortStringTest<wchar_t>(S);
    doShortStringTest<char16_t>(S);
    doShortStringTest<char32_t>(S);
  }
  {
    auto const& S = longString;
    doLongStringTest<char>(S);
    doLongStringTest<wchar_t>(S);
    doLongStringTest<char16_t>(S);
    doLongStringTest<char32_t>(S);
  }
}
