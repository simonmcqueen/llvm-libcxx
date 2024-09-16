//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// UNSUPPORTED: c++03, c++11, c++14, c++17

// <chrono>
// class year_month_weekday;

// constexpr year_month_weekday& operator+=(const years& d) noexcept;
// constexpr year_month_weekday& operator-=(const years& d) noexcept;

#include <chrono>
#include <cassert>
#include <type_traits>
#include <utility>

#include "test_macros.h"

using year               = std::chrono::year;
using month              = std::chrono::month;
using weekday            = std::chrono::weekday;
using weekday_indexed    = std::chrono::weekday_indexed;
using year_month_weekday = std::chrono::year_month_weekday;
using years              = std::chrono::years;

constexpr bool test() {
  constexpr weekday Tuesday = std::chrono::Tuesday;
  constexpr month January   = std::chrono::January;

  for (int i = 1000; i <= 1010; ++i) {
    year_month_weekday ymwd(year{i}, January, weekday_indexed{Tuesday, 2});

    assert(static_cast<int>((ymwd += years{2}).year()) == i + 2);
    assert(ymwd.month() == January);
    assert(ymwd.weekday() == Tuesday);
    assert(ymwd.index() == 2);

    assert(static_cast<int>((ymwd).year()) == i + 2);
    assert(ymwd.month() == January);
    assert(ymwd.weekday() == Tuesday);
    assert(ymwd.index() == 2);

    assert(static_cast<int>((ymwd -= years{1}).year()) == i + 1);
    assert(ymwd.month() == January);
    assert(ymwd.weekday() == Tuesday);
    assert(ymwd.index() == 2);

    assert(static_cast<int>((ymwd).year()) == i + 1);
    assert(ymwd.month() == January);
    assert(ymwd.weekday() == Tuesday);
    assert(ymwd.index() == 2);
  }
  return true;
}

int main(int, char**) {
  ASSERT_NOEXCEPT(std::declval<year_month_weekday&>() += std::declval<years>());
  ASSERT_SAME_TYPE(year_month_weekday&, decltype(std::declval<year_month_weekday&>() += std::declval<years>()));

  ASSERT_NOEXCEPT(std::declval<year_month_weekday&>() -= std::declval<years>());
  ASSERT_SAME_TYPE(year_month_weekday&, decltype(std::declval<year_month_weekday&>() -= std::declval<years>()));

  test();
  static_assert(test());

  return 0;
}
