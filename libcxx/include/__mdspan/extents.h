// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
//===---------------------------------------------------------------------===//

#ifndef _LIBCPP___MDSPAN_EXTENTS_H
#define _LIBCPP___MDSPAN_EXTENTS_H

#include <__assert>
#include <__config>
#include <__type_traits/common_type.h>
#include <__type_traits/is_convertible.h>
#include <__type_traits/is_nothrow_constructible.h>
#include <__type_traits/is_same.h>
#include <__type_traits/make_unsigned.h>
#include <__utility/integer_sequence.h>
#include <__utility/unreachable.h>
#include <array>
#include <cinttypes>
#include <concepts>
#include <cstddef>
#include <limits>
#include <span>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_PUSH_MACROS
#include <__undef_macros>

_LIBCPP_BEGIN_NAMESPACE_STD

#if _LIBCPP_STD_VER >= 23

namespace __mdspan_detail {

// ------------------------------------------------------------------
// ------------ __static_array --------------------------------------
// ------------------------------------------------------------------
// array like class which provides an array of static values with get
template <class _Tp, _Tp... _Values>
struct __static_array {
  static constexpr array<_Tp, sizeof...(_Values)> __array = {_Values...};

public:
  _LIBCPP_HIDE_FROM_ABI static constexpr size_t __size() { return sizeof...(_Values); }
  _LIBCPP_HIDE_FROM_ABI static constexpr _Tp __get(size_t __index) noexcept { return __array[__index]; }

  template <size_t _Index>
  _LIBCPP_HIDE_FROM_ABI static constexpr _Tp __get() {
    return __get(_Index);
  }
};

// ------------------------------------------------------------------
// ------------ __possibly_empty_array  -----------------------------
// ------------------------------------------------------------------

// array like class which provides get function and operator [], and
// has a specialization for the size 0 case.
// This is needed to make the __maybe_static_array be truly empty, for
// all static values.

template <class _Tp, size_t _Size>
struct __possibly_empty_array {
  _Tp __vals_[_Size];
  _LIBCPP_HIDE_FROM_ABI constexpr _Tp& operator[](size_t __index) { return __vals_[__index]; }
  _LIBCPP_HIDE_FROM_ABI constexpr const _Tp& operator[](size_t __index) const { return __vals_[__index]; }
};

template <class _Tp>
struct __possibly_empty_array<_Tp, 0> {
  _LIBCPP_HIDE_FROM_ABI constexpr _Tp& operator[](size_t) { __libcpp_unreachable(); }
  _LIBCPP_HIDE_FROM_ABI constexpr const _Tp& operator[](size_t) const { __libcpp_unreachable(); }
};

// ------------------------------------------------------------------
// ------------ static_partial_sums ---------------------------------
// ------------------------------------------------------------------

// Provides a compile time partial sum one can index into

template <size_t... _Values>
struct __static_partial_sums {
  _LIBCPP_HIDE_FROM_ABI static constexpr array<size_t, sizeof...(_Values)> __static_partial_sums_impl() {
    array<size_t, sizeof...(_Values)> __values{_Values...};
    array<size_t, sizeof...(_Values)> __partial_sums{{}};
    size_t __running_sum = 0;
    for (int __i = 0; __i != sizeof...(_Values); ++__i) {
      __partial_sums[__i] = __running_sum;
      __running_sum += __values[__i];
    }
    return __partial_sums;
  }
  static constexpr array<size_t, sizeof...(_Values)> __result{__static_partial_sums_impl()};

  _LIBCPP_HIDE_FROM_ABI static constexpr size_t __get(size_t __index) { return __result[__index]; }
};

// ------------------------------------------------------------------
// ------------ __maybe_static_array --------------------------------
// ------------------------------------------------------------------

// array like class which has a mix of static and runtime values but
// only stores the runtime values.
// The type of the static and the runtime values can be different.
// The position of a dynamic value is indicated through a tag value.
template <class _TDynamic, class _TStatic, _TStatic _DynTag, _TStatic... _Values>
struct __maybe_static_array {
  static_assert(is_convertible<_TStatic, _TDynamic>::value,
                "__maybe_static_array: _TStatic must be convertible to _TDynamic");
  static_assert(is_convertible<_TDynamic, _TStatic>::value,
                "__maybe_static_array: _TDynamic must be convertible to _TStatic");

private:
  // Static values member
  static constexpr size_t __size_         = sizeof...(_Values);
  static constexpr size_t __size_dynamic_ = ((_Values == _DynTag) + ... + 0);
  using _StaticValues                     = __static_array<_TStatic, _Values...>;
  using _DynamicValues                    = __possibly_empty_array<_TDynamic, __size_dynamic_>;

  // Dynamic values member
  _LIBCPP_NO_UNIQUE_ADDRESS _DynamicValues __dyn_vals_;

  // static mapping of indices to the position in the dynamic values array
  using _DynamicIdxMap = __static_partial_sums<static_cast<size_t>(_Values == _DynTag)...>;

  template <size_t... Indices>
  _LIBCPP_HIDE_FROM_ABI static constexpr _DynamicValues __zeros(index_sequence<Indices...>) noexcept {
    return _DynamicValues{((void)Indices, 0)...};
  }

public:
  _LIBCPP_HIDE_FROM_ABI constexpr __maybe_static_array() noexcept
      : __dyn_vals_{__zeros(make_index_sequence<__size_dynamic_>())} {}

  // constructors from dynamic values only -- this covers the case for rank() == 0
  template <class... _DynVals>
    requires(sizeof...(_DynVals) == __size_dynamic_)
  _LIBCPP_HIDE_FROM_ABI constexpr __maybe_static_array(_DynVals... __vals)
      : __dyn_vals_{static_cast<_TDynamic>(__vals)...} {}

  template <class _Tp, size_t _Size >
    requires(_Size == __size_dynamic_)
  _LIBCPP_HIDE_FROM_ABI constexpr __maybe_static_array([[maybe_unused]] const span<_Tp, _Size>& __vals) {
    if constexpr (_Size > 0) {
      for (size_t __i = 0; __i < _Size; __i++)
        __dyn_vals_[__i] = static_cast<_TDynamic>(__vals[__i]);
    }
  }

  // constructors from all values -- here rank will be greater than 0
  template <class... _DynVals>
    requires(sizeof...(_DynVals) != __size_dynamic_)
  _LIBCPP_HIDE_FROM_ABI constexpr __maybe_static_array(_DynVals... __vals) {
    static_assert((sizeof...(_DynVals) == __size_), "Invalid number of values.");
    _TDynamic __values[__size_] = {static_cast<_TDynamic>(__vals)...};
    for (size_t __i = 0; __i < __size_; __i++) {
      _TStatic __static_val = _StaticValues::__get(__i);
      if (__static_val == _DynTag) {
        __dyn_vals_[_DynamicIdxMap::__get(__i)] = __values[__i];
      }
      // Precondition check
      else
        _LIBCPP_ASSERT(__values[__i] == static_cast<_TDynamic>(__static_val),
                       "extents construction: mismatch of provided arguments with static extents.");
    }
  }

  template <class _Tp, size_t _Size>
    requires(_Size != __size_dynamic_)
  _LIBCPP_HIDE_FROM_ABI constexpr __maybe_static_array(const span<_Tp, _Size>& __vals) {
    static_assert((_Size == __size_) || (__size_ == dynamic_extent));
    for (size_t __i = 0; __i < __size_; __i++) {
      _TStatic __static_val = _StaticValues::__get(__i);
      if (__static_val == _DynTag) {
        __dyn_vals_[_DynamicIdxMap::__get(__i)] = static_cast<_TDynamic>(__vals[__i]);
      }
      // Precondition check
      else
        _LIBCPP_ASSERT(static_cast<_TDynamic>(__vals[__i]) == static_cast<_TDynamic>(__static_val),
                       "extents construction: mismatch of provided arguments with static extents.");
    }
  }

  // access functions
  _LIBCPP_HIDE_FROM_ABI static constexpr _TStatic __static_value(size_t __i) noexcept {
    _LIBCPP_ASSERT(__i < __size_, "extents access: index must be less than rank");
    return _StaticValues::__get(__i);
  }

  _LIBCPP_HIDE_FROM_ABI constexpr _TDynamic __value(size_t __i) const {
    _LIBCPP_ASSERT(__i < __size_, "extents access: index must be less than rank");
    _TStatic __static_val = _StaticValues::__get(__i);
    return __static_val == _DynTag ? __dyn_vals_[_DynamicIdxMap::__get(__i)] : static_cast<_TDynamic>(__static_val);
  }
  _LIBCPP_HIDE_FROM_ABI constexpr _TDynamic operator[](size_t __i) const {
    _LIBCPP_ASSERT(__i < __size_, "extents access: index must be less than rank");
    return __value(__i);
  }

  // observers
  _LIBCPP_HIDE_FROM_ABI static constexpr size_t __size() { return __size_; }
  _LIBCPP_HIDE_FROM_ABI static constexpr size_t __size_dynamic() { return __size_dynamic_; }
};

// Function to check whether a value is representable as another type
// value must be a positive integer otherwise returns false
// if _From is not an integral, we just check positivity
template <integral _To, class _From>
  requires(is_integral_v<_From>)
_LIBCPP_HIDE_FROM_ABI constexpr bool __is_representable_as(_From __value) {
  using _To_u   = make_unsigned_t<_To>;
  using _From_u = make_unsigned_t<_From>;
  if constexpr (is_signed_v<_From>) {
    if (__value < 0)
      return false;
  }
  if constexpr (static_cast<_To_u>(numeric_limits<_To>::max()) >= static_cast<_From_u>(numeric_limits<_From>::max())) {
    return true;
  } else {
    return static_cast<_To_u>(numeric_limits<_To>::max()) >= static_cast<_From_u>(__value);
  }
}

template <integral _To, class _From>
  requires(!is_integral_v<_From>)
_LIBCPP_HIDE_FROM_ABI constexpr bool __is_representable_as(_From __value) {
  if constexpr (is_signed_v<_To>) {
    if (static_cast<_To>(__value) < 0)
      return false;
  }
  return true;
}

template <integral _To, class... _From>
_LIBCPP_HIDE_FROM_ABI constexpr bool __are_representable_as(_From... __values) {
  return (__mdspan_detail::__is_representable_as<_To>(__values) && ... && true);
}

template <integral _To, class _From, size_t _Size>
_LIBCPP_HIDE_FROM_ABI constexpr bool __are_representable_as(span<_From, _Size> __values) {
  for (size_t __i = 0; __i < _Size; __i++)
    if (!__mdspan_detail::__is_representable_as<_To>(__values[__i]))
      return false;
  return true;
}

} // namespace __mdspan_detail

// ------------------------------------------------------------------
// ------------ extents ---------------------------------------------
// ------------------------------------------------------------------

// Class to describe the extents of a multi dimensional array.
// Used by mdspan, mdarray and layout mappings.
// See ISO C++ standard [mdspan.extents]

template <class _IndexType, size_t... _Extents>
class extents {
public:
  // typedefs for integral types used
  using index_type = _IndexType;
  using size_type  = make_unsigned_t<index_type>;
  using rank_type  = size_t;

  static_assert(is_integral<index_type>::value && !is_same<index_type, bool>::value,
                "extents::index_type must be a signed or unsigned integer type");
  static_assert(((__mdspan_detail::__is_representable_as<index_type>(_Extents) || (_Extents == dynamic_extent)) && ...),
                "extents ctor: arguments must be representable as index_type and nonnegative");

private:
  static constexpr rank_type __rank_         = sizeof...(_Extents);
  static constexpr rank_type __rank_dynamic_ = ((_Extents == dynamic_extent) + ... + 0);

  // internal storage type using __maybe_static_array
  using _Values = __mdspan_detail::__maybe_static_array<_IndexType, size_t, dynamic_extent, _Extents...>;
  [[no_unique_address]] _Values __vals_;

public:
  // [mdspan.extents.obs], observers of multidimensional index space
  _LIBCPP_HIDE_FROM_ABI static constexpr rank_type rank() noexcept { return __rank_; }
  _LIBCPP_HIDE_FROM_ABI static constexpr rank_type rank_dynamic() noexcept { return __rank_dynamic_; }

  _LIBCPP_HIDE_FROM_ABI constexpr index_type extent(rank_type __r) const noexcept { return __vals_.__value(__r); }
  _LIBCPP_HIDE_FROM_ABI static constexpr size_t static_extent(rank_type __r) noexcept {
    return _Values::__static_value(__r);
  }

  // [mdspan.extents.cons], constructors
  _LIBCPP_HIDE_FROM_ABI constexpr extents() noexcept = default;

  // Construction from just dynamic or all values.
  // Precondition check is deferred to __maybe_static_array constructor
  template <class... _OtherIndexTypes>
    requires((is_convertible_v<_OtherIndexTypes, index_type> && ...) &&
             (is_nothrow_constructible_v<index_type, _OtherIndexTypes> && ...) &&
             (sizeof...(_OtherIndexTypes) == __rank_ || sizeof...(_OtherIndexTypes) == __rank_dynamic_))
  _LIBCPP_HIDE_FROM_ABI constexpr explicit extents(_OtherIndexTypes... __dynvals) noexcept
      : __vals_(static_cast<index_type>(__dynvals)...) {
    _LIBCPP_ASSERT(__mdspan_detail::__are_representable_as<index_type>(__dynvals...),
                   "extents ctor: arguments must be representable as index_type and nonnegative");
  }

  template <class _OtherIndexType, size_t _Size>
    requires(is_convertible_v<_OtherIndexType, index_type> && is_nothrow_constructible_v<index_type, _OtherIndexType> &&
             (_Size == __rank_ || _Size == __rank_dynamic_))
  explicit(_Size != __rank_dynamic_)
      _LIBCPP_HIDE_FROM_ABI constexpr extents(const array<_OtherIndexType, _Size>& __exts) noexcept
      : __vals_(span(__exts)) {
    _LIBCPP_ASSERT(__mdspan_detail::__are_representable_as<index_type>(span(__exts)),
                   "extents ctor: arguments must be representable as index_type and nonnegative");
  }

  template <class _OtherIndexType, size_t _Size>
    requires(is_convertible_v<_OtherIndexType, index_type> && is_nothrow_constructible_v<index_type, _OtherIndexType> &&
             (_Size == __rank_ || _Size == __rank_dynamic_))
  explicit(_Size != __rank_dynamic_)
      _LIBCPP_HIDE_FROM_ABI constexpr extents(const span<_OtherIndexType, _Size>& __exts) noexcept
      : __vals_(__exts) {
    _LIBCPP_ASSERT(__mdspan_detail::__are_representable_as<index_type>(__exts),
                   "extents ctor: arguments must be representable as index_type and nonnegative");
  }

private:
  // Function to construct extents storage from other extents.
  template <size_t _DynCount, size_t _Idx, class _OtherExtents, class... _DynamicValues>
    requires(_Idx < __rank_)
  _LIBCPP_HIDE_FROM_ABI constexpr _Values __construct_vals_from_extents(
      integral_constant<size_t, _DynCount>,
      integral_constant<size_t, _Idx>,
      const _OtherExtents& __exts,
      _DynamicValues... __dynamic_values) noexcept {
    if constexpr (static_extent(_Idx) == dynamic_extent)
      return __construct_vals_from_extents(
          integral_constant<size_t, _DynCount + 1>(),
          integral_constant<size_t, _Idx + 1>(),
          __exts,
          __dynamic_values...,
          __exts.extent(_Idx));
    else
      return __construct_vals_from_extents(
          integral_constant<size_t, _DynCount>(), integral_constant<size_t, _Idx + 1>(), __exts, __dynamic_values...);
  }

  template <size_t _DynCount, size_t _Idx, class _OtherExtents, class... _DynamicValues>
    requires((_Idx == __rank_) && (_DynCount == __rank_dynamic_))
  _LIBCPP_HIDE_FROM_ABI constexpr _Values __construct_vals_from_extents(
      integral_constant<size_t, _DynCount>,
      integral_constant<size_t, _Idx>,
      const _OtherExtents&,
      _DynamicValues... __dynamic_values) noexcept {
    return _Values{static_cast<index_type>(__dynamic_values)...};
  }

public:
  // Converting constructor from other extents specializations
  template <class _OtherIndexType, size_t... _OtherExtents>
    requires((sizeof...(_OtherExtents) == sizeof...(_Extents)) &&
             ((_OtherExtents == dynamic_extent || _Extents == dynamic_extent || _OtherExtents == _Extents) && ...))
  explicit((((_Extents != dynamic_extent) && (_OtherExtents == dynamic_extent)) || ...) ||
           (static_cast<make_unsigned_t<index_type>>(numeric_limits<index_type>::max()) <
            static_cast<make_unsigned_t<_OtherIndexType>>(numeric_limits<_OtherIndexType>::max())))
      _LIBCPP_HIDE_FROM_ABI constexpr extents(const extents<_OtherIndexType, _OtherExtents...>& __other) noexcept
      : __vals_(
            __construct_vals_from_extents(integral_constant<size_t, 0>(), integral_constant<size_t, 0>(), __other)) {
    if constexpr (rank() > 0) {
      for (size_t __r = 0; __r < rank(); __r++) {
        if constexpr (static_cast<make_unsigned_t<index_type>>(numeric_limits<index_type>::max()) <
                      static_cast<make_unsigned_t<_OtherIndexType>>(numeric_limits<_OtherIndexType>::max())) {
          _LIBCPP_ASSERT(__mdspan_detail::__is_representable_as<index_type>(__other.extent(__r)),
                         "extents ctor: arguments must be representable as index_type and nonnegative");
        }
        _LIBCPP_ASSERT(
            (_Values::__static_value(__r) == dynamic_extent) ||
                (static_cast<index_type>(__other.extent(__r)) == static_cast<index_type>(_Values::__static_value(__r))),
            "extents construction: mismatch of provided arguments with static extents.");
      }
    }
  }

  // Comparison operator
  template <class _OtherIndexType, size_t... _OtherExtents>
  _LIBCPP_HIDE_FROM_ABI friend constexpr bool
  operator==(const extents& __lhs, const extents<_OtherIndexType, _OtherExtents...>& __rhs) noexcept {
    if constexpr (rank() != sizeof...(_OtherExtents)) {
      return false;
    } else {
      for (rank_type __r = 0; __r < __rank_; __r++) {
        // avoid warning when comparing signed and unsigner integers and pick the wider of two types
        using _CommonType = common_type_t<index_type, _OtherIndexType>;
        if (static_cast<_CommonType>(__lhs.extent(__r)) != static_cast<_CommonType>(__rhs.extent(__r))) {
          return false;
        }
      }
    }
    return true;
  }
};

// Recursive helper classes to implement dextents alias for extents
namespace __mdspan_detail {

template <class _IndexType, size_t _Rank, class _Extents = extents<_IndexType>>
struct __make_dextents;

template <class _IndexType, size_t _Rank, size_t... _ExtentsPack>
struct __make_dextents< _IndexType, _Rank, extents<_IndexType, _ExtentsPack...>> {
  using type =
      typename __make_dextents< _IndexType, _Rank - 1, extents<_IndexType, dynamic_extent, _ExtentsPack...>>::type;
};

template <class _IndexType, size_t... _ExtentsPack>
struct __make_dextents< _IndexType, 0, extents<_IndexType, _ExtentsPack...>> {
  using type = extents<_IndexType, _ExtentsPack...>;
};

} // end namespace __mdspan_detail

// [mdspan.extents.dextents], alias template
template <class _IndexType, size_t _Rank>
using dextents = typename __mdspan_detail::__make_dextents<_IndexType, _Rank>::type;

// Deduction guide for extents
template <class... _IndexTypes>
extents(_IndexTypes...) -> extents<size_t, size_t((_IndexTypes(), dynamic_extent))...>;

// Helper type traits for identifying a class as extents.
namespace __mdspan_detail {

template <class _Tp>
struct __is_extents : false_type {};

template <class _IndexType, size_t... _ExtentsPack>
struct __is_extents<extents<_IndexType, _ExtentsPack...>> : true_type {};

template <class _Tp>
inline constexpr bool __is_extents_v = __is_extents<_Tp>::value;

} // namespace __mdspan_detail

#endif // _LIBCPP_STD_VER >= 23

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP___MDSPAN_EXTENTS_H
