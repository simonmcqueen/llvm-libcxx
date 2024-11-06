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

// <mutex>

// Test the feature test macros defined by <mutex>

/*  Constant                 Value
    __cpp_lib_scoped_lock    201703L [C++17]
*/

#include <mutex>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_scoped_lock
#   error "__cpp_lib_scoped_lock should not be defined before c++17"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_scoped_lock
#   error "__cpp_lib_scoped_lock should not be defined before c++17"
# endif

#elif TEST_STD_VER == 17

# if !defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS
#   ifndef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should be defined in c++17"
#   endif
#   if __cpp_lib_scoped_lock != 201703L
#     error "__cpp_lib_scoped_lock should have the value 201703L in c++17"
#   endif
# else
#   ifdef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should not be defined when the requirement '!defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS' is not met!"
#   endif
# endif

#elif TEST_STD_VER == 20

# if !defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS
#   ifndef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should be defined in c++20"
#   endif
#   if __cpp_lib_scoped_lock != 201703L
#     error "__cpp_lib_scoped_lock should have the value 201703L in c++20"
#   endif
# else
#   ifdef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should not be defined when the requirement '!defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS' is not met!"
#   endif
# endif

#elif TEST_STD_VER == 23

# if !defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS
#   ifndef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should be defined in c++23"
#   endif
#   if __cpp_lib_scoped_lock != 201703L
#     error "__cpp_lib_scoped_lock should have the value 201703L in c++23"
#   endif
# else
#   ifdef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should not be defined when the requirement '!defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS' is not met!"
#   endif
# endif

#elif TEST_STD_VER > 23

# if !defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS
#   ifndef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should be defined in c++26"
#   endif
#   if __cpp_lib_scoped_lock != 201703L
#     error "__cpp_lib_scoped_lock should have the value 201703L in c++26"
#   endif
# else
#   ifdef __cpp_lib_scoped_lock
#     error "__cpp_lib_scoped_lock should not be defined when the requirement '!defined(_LIBCPP_VERSION) || _LIBCPP_HAS_THREADS' is not met!"
#   endif
# endif

#endif // TEST_STD_VER > 23

