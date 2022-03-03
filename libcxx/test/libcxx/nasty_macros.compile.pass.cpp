//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// Test that headers are not tripped up by the surrounding code defining various
// alphabetic macros.

// Prevent <ext/hash_map> from generating deprecated warnings for this test.
#if defined(__DEPRECATED)
#    undef __DEPRECATED
#endif

#define NASTY_MACRO This should not be expanded!!!

// libc++ does not use single-letter names as a matter of principle.
// But Windows' own <wchar.h>, <math.h>, and <exception> use many of these
// (at least C,E,F,I,M,N,P,S,X,Y,Z) as uglified function parameter names,
// so don't define these on Windows.
//
#ifndef _WIN32
#define _A NASTY_MACRO
#define _B NASTY_MACRO
#define _C NASTY_MACRO
#define _D NASTY_MACRO
#define _E NASTY_MACRO
#define _F NASTY_MACRO
#define _G NASTY_MACRO
#define _H NASTY_MACRO
#define _I NASTY_MACRO
#define _J NASTY_MACRO
#define _K NASTY_MACRO
#define _L NASTY_MACRO
#define _M NASTY_MACRO
#define _N NASTY_MACRO
#define _O NASTY_MACRO
#define _P NASTY_MACRO
#define _Q NASTY_MACRO
#define _R NASTY_MACRO
#define _S NASTY_MACRO
#define _T NASTY_MACRO
#define _U NASTY_MACRO
#define _V NASTY_MACRO
#define _W NASTY_MACRO
#define _X NASTY_MACRO
#define _Y NASTY_MACRO
#define _Z NASTY_MACRO
#endif

// FreeBSD's <sys/types.h> uses _M
//
#ifdef __FreeBSD__
# undef _M
#endif

// tchar.h defines these macros on Windows
#ifndef _WIN32
# define _UI   NASTY_MACRO
# define _PUC  NASTY_MACRO
# define _CPUC NASTY_MACRO
# define _PC   NASTY_MACRO
# define _CRPC NASTY_MACRO
# define _CPC  NASTY_MACRO
#endif

// yvals.h on MINGW defines this macro
#ifndef _WIN32
# define _C2 NASTY_MACRO
#endif

// Test that libc++ doesn't use names that collide with Win32 API macros.
// Obviously we can only define these on non-Windows platforms.
#ifndef _WIN32
# define __allocator NASTY_MACRO
# define __deallocate NASTY_MACRO
# define __deref NASTY_MACRO
# define __full NASTY_MACRO
# define __in NASTY_MACRO
# define __inout NASTY_MACRO
# define __nz NASTY_MACRO
# define __out NASTY_MACRO
# define __part NASTY_MACRO
# define __post NASTY_MACRO
# define __pre NASTY_MACRO
#endif

#define __input NASTY_MACRO
#define __output NASTY_MACRO

#define __acquire NASTY_MACRO
#define __release NASTY_MACRO

// These names are not reserved, so the user can macro-define them.
// These are intended to find improperly _Uglified template parameters.
#define A NASTY_MACRO
#define Arg NASTY_MACRO
#define Args NASTY_MACRO
#define As NASTY_MACRO
#define B NASTY_MACRO
#define Bs NASTY_MACRO
#define C NASTY_MACRO
#define Cp NASTY_MACRO
#define Cs NASTY_MACRO
#define D NASTY_MACRO
#define Dp NASTY_MACRO
#define Ds NASTY_MACRO
#define E NASTY_MACRO
#define Ep NASTY_MACRO
#define Es NASTY_MACRO
#define R NASTY_MACRO
#define Rp NASTY_MACRO
#define Rs NASTY_MACRO
#define T NASTY_MACRO
#define Tp NASTY_MACRO
#define Ts NASTY_MACRO
#define Type NASTY_MACRO
#define Types NASTY_MACRO
#define U NASTY_MACRO
#define Up NASTY_MACRO
#define Us NASTY_MACRO
#define V NASTY_MACRO
#define Vp NASTY_MACRO
#define Vs NASTY_MACRO
#define X NASTY_MACRO
#define Xp NASTY_MACRO
#define Xs NASTY_MACRO

////////////////////////////////////////////////////////////////////////////////
// BEGIN-GENERATED-HEADERS
////////////////////////////////////////////////////////////////////////////////

// clang-format off

// WARNING: This test was generated by generate_header_tests.py
// and should not be edited manually.

// Top level headers
#include <algorithm>
#include <any>
#include <array>
#include <atomic>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <barrier>
#endif
#include <bit>
#include <bitset>
#include <cassert>
#include <ccomplex>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <charconv>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <clocale>
#endif
#include <cmath>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <codecvt>
#endif
#include <compare>
#include <complex>
#include <complex.h>
#include <concepts>
#include <condition_variable>
#ifndef _LIBCPP_HAS_NO_CXX20_COROUTINES
#    include <coroutine>
#endif
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <ctype.h>
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
#    include <cwchar>
#endif
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
#    include <cwctype>
#endif
#include <deque>
#include <errno.h>
#include <exception>
#include <execution>
#include <fenv.h>
#ifndef _LIBCPP_HAS_NO_FILESYSTEM_LIBRARY
#    include <filesystem>
#endif
#include <float.h>
#ifndef _LIBCPP_HAS_NO_INCOMPLETE_FORMAT
#    include <format>
#endif
#include <forward_list>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <fstream>
#endif
#include <functional>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <future>
#endif
#include <initializer_list>
#include <inttypes.h>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <iomanip>
#endif
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <ios>
#endif
#include <iosfwd>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <iostream>
#endif
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <istream>
#endif
#include <iterator>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <latch>
#endif
#include <limits>
#include <limits.h>
#include <list>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <locale>
#endif
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <locale.h>
#endif
#include <map>
#include <math.h>
#include <memory>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <mutex>
#endif
#include <new>
#include <numbers>
#include <numeric>
#include <optional>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <ostream>
#endif
#include <queue>
#include <random>
#ifndef _LIBCPP_HAS_NO_INCOMPLETE_RANGES
#    include <ranges>
#endif
#include <ratio>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <regex>
#endif
#include <scoped_allocator>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <semaphore>
#endif
#include <set>
#include <setjmp.h>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <shared_mutex>
#endif
#include <span>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <sstream>
#endif
#include <stack>
#include <stdbool.h>
#include <stddef.h>
#include <stdexcept>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <streambuf>
#endif
#include <string>
#include <string.h>
#include <string_view>
#ifndef _LIBCPP_HAS_NO_LOCALIZATION
#    include <strstream>
#endif
#include <system_error>
#include <tgmath.h>
#ifndef _LIBCPP_HAS_NO_THREADS
#    include <thread>
#endif
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>
#include <version>
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
#    include <wchar.h>
#endif
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
#    include <wctype.h>
#endif

// experimental headers
#if __cplusplus >= 201103L
#    include <experimental/algorithm>
#    ifndef _LIBCPP_HAS_NO_EXPERIMENTAL_COROUTINES
#        include <experimental/coroutine>
#    endif
#    include <experimental/deque>
#    include <experimental/forward_list>
#    include <experimental/functional>
#    include <experimental/iterator>
#    include <experimental/list>
#    include <experimental/map>
#    include <experimental/memory_resource>
#    include <experimental/propagate_const>
#    ifndef _LIBCPP_HAS_NO_LOCALIZATION
#        include <experimental/regex>
#    endif
#    include <experimental/set>
#    include <experimental/simd>
#    include <experimental/string>
#    include <experimental/type_traits>
#    include <experimental/unordered_map>
#    include <experimental/unordered_set>
#    include <experimental/utility>
#    include <experimental/vector>
#endif // __cplusplus >= 201103L

// clang-format on

////////////////////////////////////////////////////////////////////////////////
// END-GENERATED-HEADERS
////////////////////////////////////////////////////////////////////////////////
