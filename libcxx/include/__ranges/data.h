// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#ifndef _LIBCPP___RANGES_DATA_H
#define _LIBCPP___RANGES_DATA_H

#include <__config>
#include <__iterator/concepts.h>
#include <__iterator/iterator_traits.h>
#include <__memory/pointer_traits.h>
#include <__ranges/access.h>
#include <__utility/auto_cast.h>
#include <type_traits>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#if !defined(_LIBCPP_HAS_NO_RANGES)

// [range.prim.data]

namespace ranges {
namespace __data {
  template <class _Tp>
  concept __ptr_to_object = is_pointer_v<_Tp> && is_object_v<remove_pointer_t<_Tp>>;

  template <class _Tp>
  concept __member_data =
    __can_borrow<_Tp> &&
    requires(_Tp&& __t) {
      { _LIBCPP_AUTO_CAST(__t.data()) } -> __ptr_to_object;
    };

  template <class _Tp>
  concept __ranges_begin_invocable =
    !__member_data<_Tp> &&
    __can_borrow<_Tp> &&
    requires(_Tp&& __t) {
      { ranges::begin(__t) } -> contiguous_iterator;
    };

  struct __fn {
    template <__member_data _Tp>
    _LIBCPP_HIDE_FROM_ABI
    constexpr auto operator()(_Tp&& __t) const
        noexcept(noexcept(__t.data())) {
      return __t.data();
    }

    template<__ranges_begin_invocable _Tp>
    _LIBCPP_HIDE_FROM_ABI
    constexpr auto operator()(_Tp&& __t) const
        noexcept(noexcept(_VSTD::to_address(ranges::begin(__t)))) {
      return _VSTD::to_address(ranges::begin(__t));
    }
  };
}

inline namespace __cpo {
  inline constexpr auto data = __data::__fn{};
} // namespace __cpo
} // namespace ranges

#endif // !defined(_LIBCPP_HAS_NO_RANGES)

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___RANGES_DATA_H
