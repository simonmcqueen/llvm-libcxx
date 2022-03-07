//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++03, windows, libcxx-no-debug-mode
// ADDITIONAL_COMPILE_FLAGS: -D_LIBCPP_DEBUG=0

// test that array<T, 0>::operator[] triggers an assertion

#include <array>

#include "check_assertion.h"

int main(int, char**) {
  {
    typedef std::array<int, 0> C;
    C c = {};
    C const& cc = c;
    TEST_LIBCPP_ASSERT_FAILURE(c[0], "cannot call array<T, 0>::operator[] on a zero-sized array");
    TEST_LIBCPP_ASSERT_FAILURE(c[1], "cannot call array<T, 0>::operator[] on a zero-sized array");
    TEST_LIBCPP_ASSERT_FAILURE(cc[0], "cannot call array<T, 0>::operator[] on a zero-sized array");
    TEST_LIBCPP_ASSERT_FAILURE(cc[1], "cannot call array<T, 0>::operator[] on a zero-sized array");
  }
  {
    typedef std::array<const int, 0> C;
    C c = {{}};
    C const& cc = c;
    TEST_LIBCPP_ASSERT_FAILURE(c[0], "cannot call array<T, 0>::operator[] on a zero-sized array");
    TEST_LIBCPP_ASSERT_FAILURE(c[1], "cannot call array<T, 0>::operator[] on a zero-sized array");
    TEST_LIBCPP_ASSERT_FAILURE(cc[0], "cannot call array<T, 0>::operator[] on a zero-sized array");
    TEST_LIBCPP_ASSERT_FAILURE(cc[1], "cannot call array<T, 0>::operator[] on a zero-sized array");
  }

  return 0;
}
