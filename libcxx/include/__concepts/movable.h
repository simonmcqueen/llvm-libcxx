//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___CONCEPTS_MOVABLE_H
#define _LIBCPP___CONCEPTS_MOVABLE_H

#include <__concepts/assignable.h>
#include <__concepts/constructible.h>
#include <__concepts/swappable.h>
#include <__config>
#include <type_traits>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#if !defined(_LIBCPP_HAS_NO_CONCEPTS)

// [concepts.object]

template<class _Tp>
concept movable =
  is_object_v<_Tp> &&
  move_constructible<_Tp> &&
  assignable_from<_Tp&, _Tp> &&
  swappable<_Tp>;

#endif // !defined(_LIBCPP_HAS_NO_CONCEPTS)

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___CONCEPTS_MOVABLE_H
