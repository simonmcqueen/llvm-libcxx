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

// <atomic>

// Test the feature test macros defined by <atomic>

/*  Constant                                   Value
    __cpp_lib_atomic_flag_test                 201907L [C++20]
    __cpp_lib_atomic_float                     201711L [C++20]
    __cpp_lib_atomic_is_always_lock_free       201603L [C++17]
    __cpp_lib_atomic_lock_free_type_aliases    201907L [C++20]
    __cpp_lib_atomic_ref                       201806L [C++20]
    __cpp_lib_atomic_shared_ptr                201711L [C++20]
    __cpp_lib_atomic_value_initialization      201911L [C++20]
    __cpp_lib_atomic_wait                      201907L [C++20]
    __cpp_lib_char8_t                          201907L [C++20]
*/

#include <atomic>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_atomic_flag_test
#   error "__cpp_lib_atomic_flag_test should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_float
#   error "__cpp_lib_atomic_float should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_is_always_lock_free
#   error "__cpp_lib_atomic_is_always_lock_free should not be defined before c++17"
# endif

# ifdef __cpp_lib_atomic_lock_free_type_aliases
#   error "__cpp_lib_atomic_lock_free_type_aliases should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_ref
#   error "__cpp_lib_atomic_ref should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_shared_ptr
#   error "__cpp_lib_atomic_shared_ptr should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_wait
#   error "__cpp_lib_atomic_wait should not be defined before c++20"
# endif

# ifdef __cpp_lib_char8_t
#   error "__cpp_lib_char8_t should not be defined before c++20"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_atomic_flag_test
#   error "__cpp_lib_atomic_flag_test should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_float
#   error "__cpp_lib_atomic_float should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_is_always_lock_free
#   error "__cpp_lib_atomic_is_always_lock_free should not be defined before c++17"
# endif

# ifdef __cpp_lib_atomic_lock_free_type_aliases
#   error "__cpp_lib_atomic_lock_free_type_aliases should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_ref
#   error "__cpp_lib_atomic_ref should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_shared_ptr
#   error "__cpp_lib_atomic_shared_ptr should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_wait
#   error "__cpp_lib_atomic_wait should not be defined before c++20"
# endif

# ifdef __cpp_lib_char8_t
#   error "__cpp_lib_char8_t should not be defined before c++20"
# endif

#elif TEST_STD_VER == 17

# ifdef __cpp_lib_atomic_flag_test
#   error "__cpp_lib_atomic_flag_test should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_float
#   error "__cpp_lib_atomic_float should not be defined before c++20"
# endif

# ifndef __cpp_lib_atomic_is_always_lock_free
#   error "__cpp_lib_atomic_is_always_lock_free should be defined in c++17"
# endif
# if __cpp_lib_atomic_is_always_lock_free != 201603L
#   error "__cpp_lib_atomic_is_always_lock_free should have the value 201603L in c++17"
# endif

# ifdef __cpp_lib_atomic_lock_free_type_aliases
#   error "__cpp_lib_atomic_lock_free_type_aliases should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_ref
#   error "__cpp_lib_atomic_ref should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_shared_ptr
#   error "__cpp_lib_atomic_shared_ptr should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_wait
#   error "__cpp_lib_atomic_wait should not be defined before c++20"
# endif

# ifdef __cpp_lib_char8_t
#   error "__cpp_lib_char8_t should not be defined before c++20"
# endif

#elif TEST_STD_VER == 20

# ifndef __cpp_lib_atomic_flag_test
#   error "__cpp_lib_atomic_flag_test should be defined in c++20"
# endif
# if __cpp_lib_atomic_flag_test != 201907L
#   error "__cpp_lib_atomic_flag_test should have the value 201907L in c++20"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_atomic_float
#     error "__cpp_lib_atomic_float should be defined in c++20"
#   endif
#   if __cpp_lib_atomic_float != 201711L
#     error "__cpp_lib_atomic_float should have the value 201711L in c++20"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_atomic_float
#     error "__cpp_lib_atomic_float should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifndef __cpp_lib_atomic_is_always_lock_free
#   error "__cpp_lib_atomic_is_always_lock_free should be defined in c++20"
# endif
# if __cpp_lib_atomic_is_always_lock_free != 201603L
#   error "__cpp_lib_atomic_is_always_lock_free should have the value 201603L in c++20"
# endif

# ifndef __cpp_lib_atomic_lock_free_type_aliases
#   error "__cpp_lib_atomic_lock_free_type_aliases should be defined in c++20"
# endif
# if __cpp_lib_atomic_lock_free_type_aliases != 201907L
#   error "__cpp_lib_atomic_lock_free_type_aliases should have the value 201907L in c++20"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_atomic_ref
#     error "__cpp_lib_atomic_ref should be defined in c++20"
#   endif
#   if __cpp_lib_atomic_ref != 201806L
#     error "__cpp_lib_atomic_ref should have the value 201806L in c++20"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_atomic_ref
#     error "__cpp_lib_atomic_ref should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_atomic_shared_ptr
#     error "__cpp_lib_atomic_shared_ptr should be defined in c++20"
#   endif
#   if __cpp_lib_atomic_shared_ptr != 201711L
#     error "__cpp_lib_atomic_shared_ptr should have the value 201711L in c++20"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_atomic_shared_ptr
#     error "__cpp_lib_atomic_shared_ptr should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifndef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should be defined in c++20"
# endif
# if __cpp_lib_atomic_value_initialization != 201911L
#   error "__cpp_lib_atomic_value_initialization should have the value 201911L in c++20"
# endif

# if !defined(_LIBCPP_AVAILABILITY_DISABLE_FTM___cpp_lib_atomic_wait)
#   ifndef __cpp_lib_atomic_wait
#     error "__cpp_lib_atomic_wait should be defined in c++20"
#   endif
#   if __cpp_lib_atomic_wait != 201907L
#     error "__cpp_lib_atomic_wait should have the value 201907L in c++20"
#   endif
# else
#   ifdef __cpp_lib_atomic_wait
#     error "__cpp_lib_atomic_wait should not be defined when !defined(_LIBCPP_AVAILABILITY_DISABLE_FTM___cpp_lib_atomic_wait) is not defined!"
#   endif
# endif

# if defined(__cpp_char8_t)
#   ifndef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should be defined in c++20"
#   endif
#   if __cpp_lib_char8_t != 201907L
#     error "__cpp_lib_char8_t should have the value 201907L in c++20"
#   endif
# else
#   ifdef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should not be defined when defined(__cpp_char8_t) is not defined!"
#   endif
# endif

#elif TEST_STD_VER > 20

# ifndef __cpp_lib_atomic_flag_test
#   error "__cpp_lib_atomic_flag_test should be defined in c++2b"
# endif
# if __cpp_lib_atomic_flag_test != 201907L
#   error "__cpp_lib_atomic_flag_test should have the value 201907L in c++2b"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_atomic_float
#     error "__cpp_lib_atomic_float should be defined in c++2b"
#   endif
#   if __cpp_lib_atomic_float != 201711L
#     error "__cpp_lib_atomic_float should have the value 201711L in c++2b"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_atomic_float
#     error "__cpp_lib_atomic_float should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifndef __cpp_lib_atomic_is_always_lock_free
#   error "__cpp_lib_atomic_is_always_lock_free should be defined in c++2b"
# endif
# if __cpp_lib_atomic_is_always_lock_free != 201603L
#   error "__cpp_lib_atomic_is_always_lock_free should have the value 201603L in c++2b"
# endif

# ifndef __cpp_lib_atomic_lock_free_type_aliases
#   error "__cpp_lib_atomic_lock_free_type_aliases should be defined in c++2b"
# endif
# if __cpp_lib_atomic_lock_free_type_aliases != 201907L
#   error "__cpp_lib_atomic_lock_free_type_aliases should have the value 201907L in c++2b"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_atomic_ref
#     error "__cpp_lib_atomic_ref should be defined in c++2b"
#   endif
#   if __cpp_lib_atomic_ref != 201806L
#     error "__cpp_lib_atomic_ref should have the value 201806L in c++2b"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_atomic_ref
#     error "__cpp_lib_atomic_ref should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_atomic_shared_ptr
#     error "__cpp_lib_atomic_shared_ptr should be defined in c++2b"
#   endif
#   if __cpp_lib_atomic_shared_ptr != 201711L
#     error "__cpp_lib_atomic_shared_ptr should have the value 201711L in c++2b"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_atomic_shared_ptr
#     error "__cpp_lib_atomic_shared_ptr should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifndef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should be defined in c++2b"
# endif
# if __cpp_lib_atomic_value_initialization != 201911L
#   error "__cpp_lib_atomic_value_initialization should have the value 201911L in c++2b"
# endif

# if !defined(_LIBCPP_AVAILABILITY_DISABLE_FTM___cpp_lib_atomic_wait)
#   ifndef __cpp_lib_atomic_wait
#     error "__cpp_lib_atomic_wait should be defined in c++2b"
#   endif
#   if __cpp_lib_atomic_wait != 201907L
#     error "__cpp_lib_atomic_wait should have the value 201907L in c++2b"
#   endif
# else
#   ifdef __cpp_lib_atomic_wait
#     error "__cpp_lib_atomic_wait should not be defined when !defined(_LIBCPP_AVAILABILITY_DISABLE_FTM___cpp_lib_atomic_wait) is not defined!"
#   endif
# endif

# if defined(__cpp_char8_t)
#   ifndef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should be defined in c++2b"
#   endif
#   if __cpp_lib_char8_t != 201907L
#     error "__cpp_lib_char8_t should have the value 201907L in c++2b"
#   endif
# else
#   ifdef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should not be defined when defined(__cpp_char8_t) is not defined!"
#   endif
# endif

#endif // TEST_STD_VER > 20

