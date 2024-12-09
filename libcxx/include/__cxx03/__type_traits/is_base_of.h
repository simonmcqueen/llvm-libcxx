//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___CXX03___TYPE_TRAITS_IS_BASE_OF_H
#define _LIBCPP___CXX03___TYPE_TRAITS_IS_BASE_OF_H

#include <__cxx03/__config>
#include <__cxx03/__type_traits/integral_constant.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Bp, class _Dp>
struct _LIBCPP_TEMPLATE_VIS is_base_of : public integral_constant<bool, __is_base_of(_Bp, _Dp)> {};

#if _LIBCPP_STD_VER >= 17
template <class _Bp, class _Dp>
inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);
#endif

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___CXX03___TYPE_TRAITS_IS_BASE_OF_H
