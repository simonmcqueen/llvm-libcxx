//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___TYPE_IS_CONSTRUCTIBLE_H
#define _LIBCPP___TYPE_IS_CONSTRUCTIBLE_H

#include <__cxx03/__config>
#include <__cxx03/__type_traits/add_lvalue_reference.h>
#include <__cxx03/__type_traits/add_rvalue_reference.h>
#include <__cxx03/__type_traits/integral_constant.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Tp, class... _Args>
struct _LIBCPP_TEMPLATE_VIS is_constructible : public integral_constant<bool, __is_constructible(_Tp, _Args...)> {};

#if _LIBCPP_STD_VER >= 17
template <class _Tp, class... _Args>
inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);
#endif

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_copy_constructible
    : public integral_constant<bool, __is_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};

#if _LIBCPP_STD_VER >= 17
template <class _Tp>
inline constexpr bool is_copy_constructible_v = is_copy_constructible<_Tp>::value;
#endif

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_move_constructible
    : public integral_constant<bool, __is_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};

#if _LIBCPP_STD_VER >= 17
template <class _Tp>
inline constexpr bool is_move_constructible_v = is_move_constructible<_Tp>::value;
#endif

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_default_constructible : public integral_constant<bool, __is_constructible(_Tp)> {};

#if _LIBCPP_STD_VER >= 17
template <class _Tp>
inline constexpr bool is_default_constructible_v = __is_constructible(_Tp);
#endif

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___TYPE_IS_CONSTRUCTIBLE_H
