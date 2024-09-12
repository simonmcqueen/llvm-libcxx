//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___MATH_ROOTS_H
#define _LIBCPP___MATH_ROOTS_H

#include <__config>
#include <__type_traits/enable_if.h>
#include <__type_traits/is_integral.h>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

namespace __math {

// sqrt

inline _LIBCPP_HIDE_FROM_ABI float sqrt(float __x) _NOEXCEPT { return __builtin_sqrtf(__x); }

template <class = int>
_LIBCPP_HIDE_FROM_ABI double sqrt(double __x) _NOEXCEPT {
  return __builtin_sqrt(__x);
}

inline _LIBCPP_HIDE_FROM_ABI long double sqrt(long double __x) _NOEXCEPT { return __builtin_sqrtl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline _LIBCPP_HIDE_FROM_ABI double sqrt(_A1 __x) _NOEXCEPT {
  return __builtin_sqrt((double)__x);
}

// cbrt

[[__nodiscard__]] inline _LIBCPP_HIDE_FROM_ABI float cbrt(float __x) _NOEXCEPT { return __builtin_cbrtf(__x); }

template <class = int>
[[__nodiscard__]] _LIBCPP_HIDE_FROM_ABI double cbrt(double __x) _NOEXCEPT {
  return __builtin_cbrt(__x);
}

[[__nodiscard__]] inline _LIBCPP_HIDE_FROM_ABI long double cbrt(long double __x) _NOEXCEPT {
  return __builtin_cbrtl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline _LIBCPP_HIDE_FROM_ABI double cbrt(_A1 __x) _NOEXCEPT {
  return __builtin_cbrt((double)__x);
}

} // namespace __math

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___MATH_ROOTS_H
