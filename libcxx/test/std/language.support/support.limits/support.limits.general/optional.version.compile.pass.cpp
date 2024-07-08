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

// <optional>

// Test the feature test macros defined by <optional>

/*  Constant                            Value
    __cpp_lib_constrained_equality      202403L [C++26]
    __cpp_lib_freestanding_optional     202311L [C++26]
    __cpp_lib_optional                  201606L [C++17]
                                        202110L [C++23]
    __cpp_lib_optional_range_support    202406L [C++26]
*/

#include <optional>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_constrained_equality
#   error "__cpp_lib_constrained_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_freestanding_optional
#   error "__cpp_lib_freestanding_optional should not be defined before c++26"
# endif

# ifdef __cpp_lib_optional
#   error "__cpp_lib_optional should not be defined before c++17"
# endif

# ifdef __cpp_lib_optional_range_support
#   error "__cpp_lib_optional_range_support should not be defined before c++26"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_constrained_equality
#   error "__cpp_lib_constrained_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_freestanding_optional
#   error "__cpp_lib_freestanding_optional should not be defined before c++26"
# endif

# ifdef __cpp_lib_optional
#   error "__cpp_lib_optional should not be defined before c++17"
# endif

# ifdef __cpp_lib_optional_range_support
#   error "__cpp_lib_optional_range_support should not be defined before c++26"
# endif

#elif TEST_STD_VER == 17

# ifdef __cpp_lib_constrained_equality
#   error "__cpp_lib_constrained_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_freestanding_optional
#   error "__cpp_lib_freestanding_optional should not be defined before c++26"
# endif

# ifndef __cpp_lib_optional
#   error "__cpp_lib_optional should be defined in c++17"
# endif
# if __cpp_lib_optional != 201606L
#   error "__cpp_lib_optional should have the value 201606L in c++17"
# endif

# ifdef __cpp_lib_optional_range_support
#   error "__cpp_lib_optional_range_support should not be defined before c++26"
# endif

#elif TEST_STD_VER == 20

# ifdef __cpp_lib_constrained_equality
#   error "__cpp_lib_constrained_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_freestanding_optional
#   error "__cpp_lib_freestanding_optional should not be defined before c++26"
# endif

# ifndef __cpp_lib_optional
#   error "__cpp_lib_optional should be defined in c++20"
# endif
# if __cpp_lib_optional != 201606L
#   error "__cpp_lib_optional should have the value 201606L in c++20"
# endif

# ifdef __cpp_lib_optional_range_support
#   error "__cpp_lib_optional_range_support should not be defined before c++26"
# endif

#elif TEST_STD_VER == 23

# ifdef __cpp_lib_constrained_equality
#   error "__cpp_lib_constrained_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_freestanding_optional
#   error "__cpp_lib_freestanding_optional should not be defined before c++26"
# endif

# ifndef __cpp_lib_optional
#   error "__cpp_lib_optional should be defined in c++23"
# endif
# if __cpp_lib_optional != 202110L
#   error "__cpp_lib_optional should have the value 202110L in c++23"
# endif

# ifdef __cpp_lib_optional_range_support
#   error "__cpp_lib_optional_range_support should not be defined before c++26"
# endif

#elif TEST_STD_VER > 23

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_constrained_equality
#     error "__cpp_lib_constrained_equality should be defined in c++26"
#   endif
#   if __cpp_lib_constrained_equality != 202403L
#     error "__cpp_lib_constrained_equality should have the value 202403L in c++26"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_constrained_equality
#     error "__cpp_lib_constrained_equality should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_freestanding_optional
#     error "__cpp_lib_freestanding_optional should be defined in c++26"
#   endif
#   if __cpp_lib_freestanding_optional != 202311L
#     error "__cpp_lib_freestanding_optional should have the value 202311L in c++26"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_freestanding_optional
#     error "__cpp_lib_freestanding_optional should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifndef __cpp_lib_optional
#   error "__cpp_lib_optional should be defined in c++26"
# endif
# if __cpp_lib_optional != 202110L
#   error "__cpp_lib_optional should have the value 202110L in c++26"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_optional_range_support
#     error "__cpp_lib_optional_range_support should be defined in c++26"
#   endif
#   if __cpp_lib_optional_range_support != 202406L
#     error "__cpp_lib_optional_range_support should have the value 202406L in c++26"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_optional_range_support
#     error "__cpp_lib_optional_range_support should not be defined because it is unimplemented in libc++!"
#   endif
# endif

#endif // TEST_STD_VER > 23

