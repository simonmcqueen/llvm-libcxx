// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___MEMORY_ALLOCATOR_H
#define _LIBCPP___MEMORY_ALLOCATOR_H

#include <__config>
#include <__memory/allocator_traits.h>
#include <cstddef>
#include <new>
#include <stdexcept>
#include <type_traits>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

_LIBCPP_PUSH_MACROS
#include <__undef_macros>

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Tp> class allocator;

#if _LIBCPP_STD_VER <= 17 || defined(_LIBCPP_ENABLE_CXX20_REMOVED_ALLOCATOR_MEMBERS)
template <>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_DEPRECATED_IN_CXX17 allocator<void>
{
public:
    typedef void*             pointer;
    typedef const void*       const_pointer;
    typedef void              value_type;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};
};

template <>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_DEPRECATED_IN_CXX17 allocator<const void>
{
public:
    typedef const void*       pointer;
    typedef const void*       const_pointer;
    typedef const void        value_type;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};
};
#endif

// allocator

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS allocator
{
public:
    typedef size_t      size_type;
    typedef ptrdiff_t   difference_type;
    typedef _Tp         value_type;
    typedef true_type   propagate_on_container_move_assignment;
    typedef true_type   is_always_equal;

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator() _NOEXCEPT { }

    template <class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator(const allocator<_Up>&) _NOEXCEPT { }

    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    _Tp* allocate(size_t __n) {
        if (__n > allocator_traits<allocator>::max_size(*this))
            __throw_length_error("allocator<T>::allocate(size_t n)"
                                 " 'n' exceeds maximum supported size");
        if (__libcpp_is_constant_evaluated()) {
            return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
        } else {
            return static_cast<_Tp*>(_VSTD::__libcpp_allocate(__n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp)));
        }
    }

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    void deallocate(_Tp* __p, size_t __n) _NOEXCEPT {
        if (__libcpp_is_constant_evaluated()) {
            ::operator delete(__p);
        } else {
            _VSTD::__libcpp_deallocate((void*)__p, __n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp));
        }
    }

    // C++20 Removed members
#if _LIBCPP_STD_VER <= 17 || defined(_LIBCPP_ENABLE_CXX20_REMOVED_ALLOCATOR_MEMBERS)
    _LIBCPP_DEPRECATED_IN_CXX17 typedef _Tp*       pointer;
    _LIBCPP_DEPRECATED_IN_CXX17 typedef const _Tp* const_pointer;
    _LIBCPP_DEPRECATED_IN_CXX17 typedef _Tp&       reference;
    _LIBCPP_DEPRECATED_IN_CXX17 typedef const _Tp& const_reference;

    template <class _Up>
    struct _LIBCPP_DEPRECATED_IN_CXX17 rebind {
        typedef allocator<_Up> other;
    };

    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    pointer address(reference __x) const _NOEXCEPT {
        return _VSTD::addressof(__x);
    }
    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    const_pointer address(const_reference __x) const _NOEXCEPT {
        return _VSTD::addressof(__x);
    }

    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY _LIBCPP_DEPRECATED_IN_CXX17
    _Tp* allocate(size_t __n, const void*) {
        return allocate(__n);
    }

    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY size_type max_size() const _NOEXCEPT {
        return size_type(~0) / sizeof(_Tp);
    }

    template <class _Up, class... _Args>
    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    void construct(_Up* __p, _Args&&... __args) {
        ::new ((void*)__p) _Up(_VSTD::forward<_Args>(__args)...);
    }

    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    void destroy(pointer __p) {
        __p->~_Tp();
    }
#endif
};

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS allocator<const _Tp>
{
public:
    typedef size_t      size_type;
    typedef ptrdiff_t   difference_type;
    typedef const _Tp   value_type;
    typedef true_type   propagate_on_container_move_assignment;
    typedef true_type   is_always_equal;

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator() _NOEXCEPT { }

    template <class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator(const allocator<_Up>&) _NOEXCEPT { }

    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    const _Tp* allocate(size_t __n) {
        if (__n > allocator_traits<allocator>::max_size(*this))
            __throw_length_error("allocator<const T>::allocate(size_t n)"
                                 " 'n' exceeds maximum supported size");
        if (__libcpp_is_constant_evaluated()) {
            return static_cast<const _Tp*>(::operator new(__n * sizeof(_Tp)));
        } else {
            return static_cast<const _Tp*>(_VSTD::__libcpp_allocate(__n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp)));
        }
    }

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    void deallocate(const _Tp* __p, size_t __n) {
        if (__libcpp_is_constant_evaluated()) {
            ::operator delete(const_cast<_Tp*>(__p));
        } else {
            _VSTD::__libcpp_deallocate((void*) const_cast<_Tp *>(__p), __n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp));
        }
    }

    // C++20 Removed members
#if _LIBCPP_STD_VER <= 17 || defined(_LIBCPP_ENABLE_CXX20_REMOVED_ALLOCATOR_MEMBERS)
    _LIBCPP_DEPRECATED_IN_CXX17 typedef const _Tp* pointer;
    _LIBCPP_DEPRECATED_IN_CXX17 typedef const _Tp* const_pointer;
    _LIBCPP_DEPRECATED_IN_CXX17 typedef const _Tp& reference;
    _LIBCPP_DEPRECATED_IN_CXX17 typedef const _Tp& const_reference;

    template <class _Up>
    struct _LIBCPP_DEPRECATED_IN_CXX17 rebind {
        typedef allocator<_Up> other;
    };

    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    const_pointer address(const_reference __x) const _NOEXCEPT {
        return _VSTD::addressof(__x);
    }

    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY _LIBCPP_DEPRECATED_IN_CXX17
    const _Tp* allocate(size_t __n, const void*) {
        return allocate(__n);
    }

    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY size_type max_size() const _NOEXCEPT {
        return size_type(~0) / sizeof(_Tp);
    }

    template <class _Up, class... _Args>
    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    void construct(_Up* __p, _Args&&... __args) {
        ::new ((void*)__p) _Up(_VSTD::forward<_Args>(__args)...);
    }

    _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_INLINE_VISIBILITY
    void destroy(pointer __p) {
        __p->~_Tp();
    }
#endif
};

template <class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
bool operator==(const allocator<_Tp>&, const allocator<_Up>&) _NOEXCEPT {return true;}

template <class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
bool operator!=(const allocator<_Tp>&, const allocator<_Up>&) _NOEXCEPT {return false;}

template <class _Tp>
struct __is_default_allocator<allocator<_Tp> > : true_type { };

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP___MEMORY_ALLOCATOR_H
