//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// WARNING: This test was generated by generate_feature_test_macro_components.py
// and should not be edited manually.
//
// clang-format off

// UNSUPPORTED: no-threads

// <stop_token>

// Test the feature test macros defined by <stop_token>

/*  Constant             Value
    __cpp_lib_jthread    201911L [C++20]
*/

#include <stop_token>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_jthread
#   error "__cpp_lib_jthread should not be defined before c++20"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_jthread
#   error "__cpp_lib_jthread should not be defined before c++20"
# endif

#elif TEST_STD_VER == 17

# ifdef __cpp_lib_jthread
#   error "__cpp_lib_jthread should not be defined before c++20"
# endif

#elif TEST_STD_VER == 20

# if !defined(_LIBCPP_HAS_NO_THREADS) && (!defined(_LIBCPP_VERSION) || _LIBCPP_AVAILABILITY_HAS_SYNC)
#   ifndef __cpp_lib_jthread
#     error "__cpp_lib_jthread should be defined in c++20"
#   endif
#   if __cpp_lib_jthread != 201911L
#     error "__cpp_lib_jthread should have the value 201911L in c++20"
#   endif
# else
#   ifdef __cpp_lib_jthread
#     error "__cpp_lib_jthread should not be defined when the requirement '!defined(_LIBCPP_HAS_NO_THREADS) && (!defined(_LIBCPP_VERSION) || _LIBCPP_AVAILABILITY_HAS_SYNC)' is not met!"
#   endif
# endif

#elif TEST_STD_VER == 23

# if !defined(_LIBCPP_HAS_NO_THREADS) && (!defined(_LIBCPP_VERSION) || _LIBCPP_AVAILABILITY_HAS_SYNC)
#   ifndef __cpp_lib_jthread
#     error "__cpp_lib_jthread should be defined in c++23"
#   endif
#   if __cpp_lib_jthread != 201911L
#     error "__cpp_lib_jthread should have the value 201911L in c++23"
#   endif
# else
#   ifdef __cpp_lib_jthread
#     error "__cpp_lib_jthread should not be defined when the requirement '!defined(_LIBCPP_HAS_NO_THREADS) && (!defined(_LIBCPP_VERSION) || _LIBCPP_AVAILABILITY_HAS_SYNC)' is not met!"
#   endif
# endif

#elif TEST_STD_VER > 23

# if !defined(_LIBCPP_HAS_NO_THREADS) && (!defined(_LIBCPP_VERSION) || _LIBCPP_AVAILABILITY_HAS_SYNC)
#   ifndef __cpp_lib_jthread
#     error "__cpp_lib_jthread should be defined in c++26"
#   endif
#   if __cpp_lib_jthread != 201911L
#     error "__cpp_lib_jthread should have the value 201911L in c++26"
#   endif
# else
#   ifdef __cpp_lib_jthread
#     error "__cpp_lib_jthread should not be defined when the requirement '!defined(_LIBCPP_HAS_NO_THREADS) && (!defined(_LIBCPP_VERSION) || _LIBCPP_AVAILABILITY_HAS_SYNC)' is not met!"
#   endif
# endif

#endif // TEST_STD_VER > 23

