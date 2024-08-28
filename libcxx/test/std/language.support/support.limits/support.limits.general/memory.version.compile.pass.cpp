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

// <memory>

// Test the feature test macros defined by <memory>

/*  Constant                                      Value
    __cpp_lib_addressof_constexpr                 201603L [C++17]
    __cpp_lib_allocate_at_least                   202302L [C++23]
    __cpp_lib_allocator_traits_is_always_equal    201411L [C++17]
    __cpp_lib_assume_aligned                      201811L [C++20]
    __cpp_lib_atomic_value_initialization         201911L [C++20]
    __cpp_lib_constexpr_dynamic_alloc             201907L [C++20]
    __cpp_lib_constexpr_memory                    201811L [C++20]
                                                  202202L [C++23]
    __cpp_lib_enable_shared_from_this             201603L [C++17]
    __cpp_lib_make_unique                         201304L [C++14]
    __cpp_lib_out_ptr                             202106L [C++23]
                                                  202311L [C++26]
    __cpp_lib_ranges                              202110L [C++20]
                                                  202406L [C++23]
    __cpp_lib_raw_memory_algorithms               201606L [C++17]
    __cpp_lib_shared_ptr_arrays                   201611L [C++17]
                                                  201707L [C++20]
    __cpp_lib_shared_ptr_weak_type                201606L [C++17]
    __cpp_lib_smart_ptr_for_overwrite             202002L [C++20]
    __cpp_lib_smart_ptr_owner_equality            202306L [C++26]
    __cpp_lib_to_address                          201711L [C++20]
    __cpp_lib_transparent_operators               201210L [C++14]
                                                  201510L [C++17]
*/

#include <memory>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_addressof_constexpr
#   error "__cpp_lib_addressof_constexpr should not be defined before c++17"
# endif

# ifdef __cpp_lib_allocate_at_least
#   error "__cpp_lib_allocate_at_least should not be defined before c++23"
# endif

# ifdef __cpp_lib_allocator_traits_is_always_equal
#   error "__cpp_lib_allocator_traits_is_always_equal should not be defined before c++17"
# endif

# ifdef __cpp_lib_assume_aligned
#   error "__cpp_lib_assume_aligned should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should not be defined before c++20"
# endif

# ifdef __cpp_lib_constexpr_dynamic_alloc
#   error "__cpp_lib_constexpr_dynamic_alloc should not be defined before c++20"
# endif

# ifdef __cpp_lib_constexpr_memory
#   error "__cpp_lib_constexpr_memory should not be defined before c++20"
# endif

# ifdef __cpp_lib_enable_shared_from_this
#   error "__cpp_lib_enable_shared_from_this should not be defined before c++17"
# endif

# ifdef __cpp_lib_make_unique
#   error "__cpp_lib_make_unique should not be defined before c++14"
# endif

# ifdef __cpp_lib_out_ptr
#   error "__cpp_lib_out_ptr should not be defined before c++23"
# endif

# ifdef __cpp_lib_ranges
#   error "__cpp_lib_ranges should not be defined before c++20"
# endif

# ifdef __cpp_lib_raw_memory_algorithms
#   error "__cpp_lib_raw_memory_algorithms should not be defined before c++17"
# endif

# ifdef __cpp_lib_shared_ptr_arrays
#   error "__cpp_lib_shared_ptr_arrays should not be defined before c++17"
# endif

# ifdef __cpp_lib_shared_ptr_weak_type
#   error "__cpp_lib_shared_ptr_weak_type should not be defined before c++17"
# endif

# ifdef __cpp_lib_smart_ptr_for_overwrite
#   error "__cpp_lib_smart_ptr_for_overwrite should not be defined before c++20"
# endif

# ifdef __cpp_lib_smart_ptr_owner_equality
#   error "__cpp_lib_smart_ptr_owner_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_to_address
#   error "__cpp_lib_to_address should not be defined before c++20"
# endif

# ifdef __cpp_lib_transparent_operators
#   error "__cpp_lib_transparent_operators should not be defined before c++14"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_addressof_constexpr
#   error "__cpp_lib_addressof_constexpr should not be defined before c++17"
# endif

# ifdef __cpp_lib_allocate_at_least
#   error "__cpp_lib_allocate_at_least should not be defined before c++23"
# endif

# ifdef __cpp_lib_allocator_traits_is_always_equal
#   error "__cpp_lib_allocator_traits_is_always_equal should not be defined before c++17"
# endif

# ifdef __cpp_lib_assume_aligned
#   error "__cpp_lib_assume_aligned should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should not be defined before c++20"
# endif

# ifdef __cpp_lib_constexpr_dynamic_alloc
#   error "__cpp_lib_constexpr_dynamic_alloc should not be defined before c++20"
# endif

# ifdef __cpp_lib_constexpr_memory
#   error "__cpp_lib_constexpr_memory should not be defined before c++20"
# endif

# ifdef __cpp_lib_enable_shared_from_this
#   error "__cpp_lib_enable_shared_from_this should not be defined before c++17"
# endif

# ifndef __cpp_lib_make_unique
#   error "__cpp_lib_make_unique should be defined in c++14"
# endif
# if __cpp_lib_make_unique != 201304L
#   error "__cpp_lib_make_unique should have the value 201304L in c++14"
# endif

# ifdef __cpp_lib_out_ptr
#   error "__cpp_lib_out_ptr should not be defined before c++23"
# endif

# ifdef __cpp_lib_ranges
#   error "__cpp_lib_ranges should not be defined before c++20"
# endif

# ifdef __cpp_lib_raw_memory_algorithms
#   error "__cpp_lib_raw_memory_algorithms should not be defined before c++17"
# endif

# ifdef __cpp_lib_shared_ptr_arrays
#   error "__cpp_lib_shared_ptr_arrays should not be defined before c++17"
# endif

# ifdef __cpp_lib_shared_ptr_weak_type
#   error "__cpp_lib_shared_ptr_weak_type should not be defined before c++17"
# endif

# ifdef __cpp_lib_smart_ptr_for_overwrite
#   error "__cpp_lib_smart_ptr_for_overwrite should not be defined before c++20"
# endif

# ifdef __cpp_lib_smart_ptr_owner_equality
#   error "__cpp_lib_smart_ptr_owner_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_to_address
#   error "__cpp_lib_to_address should not be defined before c++20"
# endif

# ifndef __cpp_lib_transparent_operators
#   error "__cpp_lib_transparent_operators should be defined in c++14"
# endif
# if __cpp_lib_transparent_operators != 201210L
#   error "__cpp_lib_transparent_operators should have the value 201210L in c++14"
# endif

#elif TEST_STD_VER == 17

# ifndef __cpp_lib_addressof_constexpr
#   error "__cpp_lib_addressof_constexpr should be defined in c++17"
# endif
# if __cpp_lib_addressof_constexpr != 201603L
#   error "__cpp_lib_addressof_constexpr should have the value 201603L in c++17"
# endif

# ifdef __cpp_lib_allocate_at_least
#   error "__cpp_lib_allocate_at_least should not be defined before c++23"
# endif

# ifndef __cpp_lib_allocator_traits_is_always_equal
#   error "__cpp_lib_allocator_traits_is_always_equal should be defined in c++17"
# endif
# if __cpp_lib_allocator_traits_is_always_equal != 201411L
#   error "__cpp_lib_allocator_traits_is_always_equal should have the value 201411L in c++17"
# endif

# ifdef __cpp_lib_assume_aligned
#   error "__cpp_lib_assume_aligned should not be defined before c++20"
# endif

# ifdef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should not be defined before c++20"
# endif

# ifdef __cpp_lib_constexpr_dynamic_alloc
#   error "__cpp_lib_constexpr_dynamic_alloc should not be defined before c++20"
# endif

# ifdef __cpp_lib_constexpr_memory
#   error "__cpp_lib_constexpr_memory should not be defined before c++20"
# endif

# ifndef __cpp_lib_enable_shared_from_this
#   error "__cpp_lib_enable_shared_from_this should be defined in c++17"
# endif
# if __cpp_lib_enable_shared_from_this != 201603L
#   error "__cpp_lib_enable_shared_from_this should have the value 201603L in c++17"
# endif

# ifndef __cpp_lib_make_unique
#   error "__cpp_lib_make_unique should be defined in c++17"
# endif
# if __cpp_lib_make_unique != 201304L
#   error "__cpp_lib_make_unique should have the value 201304L in c++17"
# endif

# ifdef __cpp_lib_out_ptr
#   error "__cpp_lib_out_ptr should not be defined before c++23"
# endif

# ifdef __cpp_lib_ranges
#   error "__cpp_lib_ranges should not be defined before c++20"
# endif

# ifndef __cpp_lib_raw_memory_algorithms
#   error "__cpp_lib_raw_memory_algorithms should be defined in c++17"
# endif
# if __cpp_lib_raw_memory_algorithms != 201606L
#   error "__cpp_lib_raw_memory_algorithms should have the value 201606L in c++17"
# endif

# ifndef __cpp_lib_shared_ptr_arrays
#   error "__cpp_lib_shared_ptr_arrays should be defined in c++17"
# endif
# if __cpp_lib_shared_ptr_arrays != 201611L
#   error "__cpp_lib_shared_ptr_arrays should have the value 201611L in c++17"
# endif

# ifndef __cpp_lib_shared_ptr_weak_type
#   error "__cpp_lib_shared_ptr_weak_type should be defined in c++17"
# endif
# if __cpp_lib_shared_ptr_weak_type != 201606L
#   error "__cpp_lib_shared_ptr_weak_type should have the value 201606L in c++17"
# endif

# ifdef __cpp_lib_smart_ptr_for_overwrite
#   error "__cpp_lib_smart_ptr_for_overwrite should not be defined before c++20"
# endif

# ifdef __cpp_lib_smart_ptr_owner_equality
#   error "__cpp_lib_smart_ptr_owner_equality should not be defined before c++26"
# endif

# ifdef __cpp_lib_to_address
#   error "__cpp_lib_to_address should not be defined before c++20"
# endif

# ifndef __cpp_lib_transparent_operators
#   error "__cpp_lib_transparent_operators should be defined in c++17"
# endif
# if __cpp_lib_transparent_operators != 201510L
#   error "__cpp_lib_transparent_operators should have the value 201510L in c++17"
# endif

#elif TEST_STD_VER == 20

# ifndef __cpp_lib_addressof_constexpr
#   error "__cpp_lib_addressof_constexpr should be defined in c++20"
# endif
# if __cpp_lib_addressof_constexpr != 201603L
#   error "__cpp_lib_addressof_constexpr should have the value 201603L in c++20"
# endif

# ifdef __cpp_lib_allocate_at_least
#   error "__cpp_lib_allocate_at_least should not be defined before c++23"
# endif

# ifndef __cpp_lib_allocator_traits_is_always_equal
#   error "__cpp_lib_allocator_traits_is_always_equal should be defined in c++20"
# endif
# if __cpp_lib_allocator_traits_is_always_equal != 201411L
#   error "__cpp_lib_allocator_traits_is_always_equal should have the value 201411L in c++20"
# endif

# ifndef __cpp_lib_assume_aligned
#   error "__cpp_lib_assume_aligned should be defined in c++20"
# endif
# if __cpp_lib_assume_aligned != 201811L
#   error "__cpp_lib_assume_aligned should have the value 201811L in c++20"
# endif

# ifndef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should be defined in c++20"
# endif
# if __cpp_lib_atomic_value_initialization != 201911L
#   error "__cpp_lib_atomic_value_initialization should have the value 201911L in c++20"
# endif

# ifndef __cpp_lib_constexpr_dynamic_alloc
#   error "__cpp_lib_constexpr_dynamic_alloc should be defined in c++20"
# endif
# if __cpp_lib_constexpr_dynamic_alloc != 201907L
#   error "__cpp_lib_constexpr_dynamic_alloc should have the value 201907L in c++20"
# endif

# ifndef __cpp_lib_constexpr_memory
#   error "__cpp_lib_constexpr_memory should be defined in c++20"
# endif
# if __cpp_lib_constexpr_memory != 201811L
#   error "__cpp_lib_constexpr_memory should have the value 201811L in c++20"
# endif

# ifndef __cpp_lib_enable_shared_from_this
#   error "__cpp_lib_enable_shared_from_this should be defined in c++20"
# endif
# if __cpp_lib_enable_shared_from_this != 201603L
#   error "__cpp_lib_enable_shared_from_this should have the value 201603L in c++20"
# endif

# ifndef __cpp_lib_make_unique
#   error "__cpp_lib_make_unique should be defined in c++20"
# endif
# if __cpp_lib_make_unique != 201304L
#   error "__cpp_lib_make_unique should have the value 201304L in c++20"
# endif

# ifdef __cpp_lib_out_ptr
#   error "__cpp_lib_out_ptr should not be defined before c++23"
# endif

# ifndef __cpp_lib_ranges
#   error "__cpp_lib_ranges should be defined in c++20"
# endif
# if __cpp_lib_ranges != 202110L
#   error "__cpp_lib_ranges should have the value 202110L in c++20"
# endif

# ifndef __cpp_lib_raw_memory_algorithms
#   error "__cpp_lib_raw_memory_algorithms should be defined in c++20"
# endif
# if __cpp_lib_raw_memory_algorithms != 201606L
#   error "__cpp_lib_raw_memory_algorithms should have the value 201606L in c++20"
# endif

# ifndef __cpp_lib_shared_ptr_arrays
#   error "__cpp_lib_shared_ptr_arrays should be defined in c++20"
# endif
# if __cpp_lib_shared_ptr_arrays != 201707L
#   error "__cpp_lib_shared_ptr_arrays should have the value 201707L in c++20"
# endif

# ifndef __cpp_lib_shared_ptr_weak_type
#   error "__cpp_lib_shared_ptr_weak_type should be defined in c++20"
# endif
# if __cpp_lib_shared_ptr_weak_type != 201606L
#   error "__cpp_lib_shared_ptr_weak_type should have the value 201606L in c++20"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_smart_ptr_for_overwrite
#     error "__cpp_lib_smart_ptr_for_overwrite should be defined in c++20"
#   endif
#   if __cpp_lib_smart_ptr_for_overwrite != 202002L
#     error "__cpp_lib_smart_ptr_for_overwrite should have the value 202002L in c++20"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_smart_ptr_for_overwrite
#     error "__cpp_lib_smart_ptr_for_overwrite should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifdef __cpp_lib_smart_ptr_owner_equality
#   error "__cpp_lib_smart_ptr_owner_equality should not be defined before c++26"
# endif

# ifndef __cpp_lib_to_address
#   error "__cpp_lib_to_address should be defined in c++20"
# endif
# if __cpp_lib_to_address != 201711L
#   error "__cpp_lib_to_address should have the value 201711L in c++20"
# endif

# ifndef __cpp_lib_transparent_operators
#   error "__cpp_lib_transparent_operators should be defined in c++20"
# endif
# if __cpp_lib_transparent_operators != 201510L
#   error "__cpp_lib_transparent_operators should have the value 201510L in c++20"
# endif

#elif TEST_STD_VER == 23

# ifndef __cpp_lib_addressof_constexpr
#   error "__cpp_lib_addressof_constexpr should be defined in c++23"
# endif
# if __cpp_lib_addressof_constexpr != 201603L
#   error "__cpp_lib_addressof_constexpr should have the value 201603L in c++23"
# endif

# ifndef __cpp_lib_allocate_at_least
#   error "__cpp_lib_allocate_at_least should be defined in c++23"
# endif
# if __cpp_lib_allocate_at_least != 202302L
#   error "__cpp_lib_allocate_at_least should have the value 202302L in c++23"
# endif

# ifndef __cpp_lib_allocator_traits_is_always_equal
#   error "__cpp_lib_allocator_traits_is_always_equal should be defined in c++23"
# endif
# if __cpp_lib_allocator_traits_is_always_equal != 201411L
#   error "__cpp_lib_allocator_traits_is_always_equal should have the value 201411L in c++23"
# endif

# ifndef __cpp_lib_assume_aligned
#   error "__cpp_lib_assume_aligned should be defined in c++23"
# endif
# if __cpp_lib_assume_aligned != 201811L
#   error "__cpp_lib_assume_aligned should have the value 201811L in c++23"
# endif

# ifndef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should be defined in c++23"
# endif
# if __cpp_lib_atomic_value_initialization != 201911L
#   error "__cpp_lib_atomic_value_initialization should have the value 201911L in c++23"
# endif

# ifndef __cpp_lib_constexpr_dynamic_alloc
#   error "__cpp_lib_constexpr_dynamic_alloc should be defined in c++23"
# endif
# if __cpp_lib_constexpr_dynamic_alloc != 201907L
#   error "__cpp_lib_constexpr_dynamic_alloc should have the value 201907L in c++23"
# endif

# ifndef __cpp_lib_constexpr_memory
#   error "__cpp_lib_constexpr_memory should be defined in c++23"
# endif
# if __cpp_lib_constexpr_memory != 202202L
#   error "__cpp_lib_constexpr_memory should have the value 202202L in c++23"
# endif

# ifndef __cpp_lib_enable_shared_from_this
#   error "__cpp_lib_enable_shared_from_this should be defined in c++23"
# endif
# if __cpp_lib_enable_shared_from_this != 201603L
#   error "__cpp_lib_enable_shared_from_this should have the value 201603L in c++23"
# endif

# ifndef __cpp_lib_make_unique
#   error "__cpp_lib_make_unique should be defined in c++23"
# endif
# if __cpp_lib_make_unique != 201304L
#   error "__cpp_lib_make_unique should have the value 201304L in c++23"
# endif

# ifndef __cpp_lib_out_ptr
#   error "__cpp_lib_out_ptr should be defined in c++23"
# endif
# if __cpp_lib_out_ptr != 202106L
#   error "__cpp_lib_out_ptr should have the value 202106L in c++23"
# endif

# ifndef __cpp_lib_ranges
#   error "__cpp_lib_ranges should be defined in c++23"
# endif
# if __cpp_lib_ranges != 202406L
#   error "__cpp_lib_ranges should have the value 202406L in c++23"
# endif

# ifndef __cpp_lib_raw_memory_algorithms
#   error "__cpp_lib_raw_memory_algorithms should be defined in c++23"
# endif
# if __cpp_lib_raw_memory_algorithms != 201606L
#   error "__cpp_lib_raw_memory_algorithms should have the value 201606L in c++23"
# endif

# ifndef __cpp_lib_shared_ptr_arrays
#   error "__cpp_lib_shared_ptr_arrays should be defined in c++23"
# endif
# if __cpp_lib_shared_ptr_arrays != 201707L
#   error "__cpp_lib_shared_ptr_arrays should have the value 201707L in c++23"
# endif

# ifndef __cpp_lib_shared_ptr_weak_type
#   error "__cpp_lib_shared_ptr_weak_type should be defined in c++23"
# endif
# if __cpp_lib_shared_ptr_weak_type != 201606L
#   error "__cpp_lib_shared_ptr_weak_type should have the value 201606L in c++23"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_smart_ptr_for_overwrite
#     error "__cpp_lib_smart_ptr_for_overwrite should be defined in c++23"
#   endif
#   if __cpp_lib_smart_ptr_for_overwrite != 202002L
#     error "__cpp_lib_smart_ptr_for_overwrite should have the value 202002L in c++23"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_smart_ptr_for_overwrite
#     error "__cpp_lib_smart_ptr_for_overwrite should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifdef __cpp_lib_smart_ptr_owner_equality
#   error "__cpp_lib_smart_ptr_owner_equality should not be defined before c++26"
# endif

# ifndef __cpp_lib_to_address
#   error "__cpp_lib_to_address should be defined in c++23"
# endif
# if __cpp_lib_to_address != 201711L
#   error "__cpp_lib_to_address should have the value 201711L in c++23"
# endif

# ifndef __cpp_lib_transparent_operators
#   error "__cpp_lib_transparent_operators should be defined in c++23"
# endif
# if __cpp_lib_transparent_operators != 201510L
#   error "__cpp_lib_transparent_operators should have the value 201510L in c++23"
# endif

#elif TEST_STD_VER > 23

# ifndef __cpp_lib_addressof_constexpr
#   error "__cpp_lib_addressof_constexpr should be defined in c++26"
# endif
# if __cpp_lib_addressof_constexpr != 201603L
#   error "__cpp_lib_addressof_constexpr should have the value 201603L in c++26"
# endif

# ifndef __cpp_lib_allocate_at_least
#   error "__cpp_lib_allocate_at_least should be defined in c++26"
# endif
# if __cpp_lib_allocate_at_least != 202302L
#   error "__cpp_lib_allocate_at_least should have the value 202302L in c++26"
# endif

# ifndef __cpp_lib_allocator_traits_is_always_equal
#   error "__cpp_lib_allocator_traits_is_always_equal should be defined in c++26"
# endif
# if __cpp_lib_allocator_traits_is_always_equal != 201411L
#   error "__cpp_lib_allocator_traits_is_always_equal should have the value 201411L in c++26"
# endif

# ifndef __cpp_lib_assume_aligned
#   error "__cpp_lib_assume_aligned should be defined in c++26"
# endif
# if __cpp_lib_assume_aligned != 201811L
#   error "__cpp_lib_assume_aligned should have the value 201811L in c++26"
# endif

# ifndef __cpp_lib_atomic_value_initialization
#   error "__cpp_lib_atomic_value_initialization should be defined in c++26"
# endif
# if __cpp_lib_atomic_value_initialization != 201911L
#   error "__cpp_lib_atomic_value_initialization should have the value 201911L in c++26"
# endif

# ifndef __cpp_lib_constexpr_dynamic_alloc
#   error "__cpp_lib_constexpr_dynamic_alloc should be defined in c++26"
# endif
# if __cpp_lib_constexpr_dynamic_alloc != 201907L
#   error "__cpp_lib_constexpr_dynamic_alloc should have the value 201907L in c++26"
# endif

# ifndef __cpp_lib_constexpr_memory
#   error "__cpp_lib_constexpr_memory should be defined in c++26"
# endif
# if __cpp_lib_constexpr_memory != 202202L
#   error "__cpp_lib_constexpr_memory should have the value 202202L in c++26"
# endif

# ifndef __cpp_lib_enable_shared_from_this
#   error "__cpp_lib_enable_shared_from_this should be defined in c++26"
# endif
# if __cpp_lib_enable_shared_from_this != 201603L
#   error "__cpp_lib_enable_shared_from_this should have the value 201603L in c++26"
# endif

# ifndef __cpp_lib_make_unique
#   error "__cpp_lib_make_unique should be defined in c++26"
# endif
# if __cpp_lib_make_unique != 201304L
#   error "__cpp_lib_make_unique should have the value 201304L in c++26"
# endif

# ifndef __cpp_lib_out_ptr
#   error "__cpp_lib_out_ptr should be defined in c++26"
# endif
# if __cpp_lib_out_ptr != 202311L
#   error "__cpp_lib_out_ptr should have the value 202311L in c++26"
# endif

# ifndef __cpp_lib_ranges
#   error "__cpp_lib_ranges should be defined in c++26"
# endif
# if __cpp_lib_ranges != 202406L
#   error "__cpp_lib_ranges should have the value 202406L in c++26"
# endif

# ifndef __cpp_lib_raw_memory_algorithms
#   error "__cpp_lib_raw_memory_algorithms should be defined in c++26"
# endif
# if __cpp_lib_raw_memory_algorithms != 201606L
#   error "__cpp_lib_raw_memory_algorithms should have the value 201606L in c++26"
# endif

# ifndef __cpp_lib_shared_ptr_arrays
#   error "__cpp_lib_shared_ptr_arrays should be defined in c++26"
# endif
# if __cpp_lib_shared_ptr_arrays != 201707L
#   error "__cpp_lib_shared_ptr_arrays should have the value 201707L in c++26"
# endif

# ifndef __cpp_lib_shared_ptr_weak_type
#   error "__cpp_lib_shared_ptr_weak_type should be defined in c++26"
# endif
# if __cpp_lib_shared_ptr_weak_type != 201606L
#   error "__cpp_lib_shared_ptr_weak_type should have the value 201606L in c++26"
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_smart_ptr_for_overwrite
#     error "__cpp_lib_smart_ptr_for_overwrite should be defined in c++26"
#   endif
#   if __cpp_lib_smart_ptr_for_overwrite != 202002L
#     error "__cpp_lib_smart_ptr_for_overwrite should have the value 202002L in c++26"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_smart_ptr_for_overwrite
#     error "__cpp_lib_smart_ptr_for_overwrite should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# if !defined(_LIBCPP_VERSION)
#   ifndef __cpp_lib_smart_ptr_owner_equality
#     error "__cpp_lib_smart_ptr_owner_equality should be defined in c++26"
#   endif
#   if __cpp_lib_smart_ptr_owner_equality != 202306L
#     error "__cpp_lib_smart_ptr_owner_equality should have the value 202306L in c++26"
#   endif
# else // _LIBCPP_VERSION
#   ifdef __cpp_lib_smart_ptr_owner_equality
#     error "__cpp_lib_smart_ptr_owner_equality should not be defined because it is unimplemented in libc++!"
#   endif
# endif

# ifndef __cpp_lib_to_address
#   error "__cpp_lib_to_address should be defined in c++26"
# endif
# if __cpp_lib_to_address != 201711L
#   error "__cpp_lib_to_address should have the value 201711L in c++26"
# endif

# ifndef __cpp_lib_transparent_operators
#   error "__cpp_lib_transparent_operators should be defined in c++26"
# endif
# if __cpp_lib_transparent_operators != 201510L
#   error "__cpp_lib_transparent_operators should have the value 201510L in c++26"
# endif

#endif // TEST_STD_VER > 23

