set(CMAKE_BUILD_TYPE Release CACHE STRING "")
set(CMAKE_BUILD_WITH_INSTALL_RPATH ON CACHE BOOL "")
set(CMAKE_C_FLAGS "-D__LIBC_NO_CPP_MATH_OVERLOADS__" CACHE STRING "")
set(CMAKE_CXX_FLAGS "-D__LIBC_NO_CPP_MATH_OVERLOADS__" CACHE STRING "")
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,-G -Wl,-bcdtors:all:-2147483548:s" CACHE STRING "")

set(LIBCXX_USE_COMPILER_RT ON CACHE BOOL "")
set(LIBCXX_ENABLE_ASSERTIONS OFF CACHE BOOL "")
set(LIBCXX_ABI_VERSION "1" CACHE STRING "")
set(LIBCXX_ENABLE_ABI_LINKER_SCRIPT OFF CACHE BOOL "")
set(LIBCXX_ENABLE_EXPERIMENTAL_LIBRARY OFF CACHE BOOL "")
set(LIBCXX_ENABLE_SHARED ON CACHE BOOL "")
set(LIBCXX_ENABLE_STATIC OFF CACHE BOOL "")
set(LIBCXXABI_ENABLE_SHARED ON CACHE BOOL "")
set(LIBCXXABI_ENABLE_STATIC OFF CACHE BOOL "")
set(LIBCXX_CXX_ABI libcxxabi CACHE STRING "")
set(LIBCXXABI_USE_LLVM_UNWINDER ON CACHE BOOL "")
set(LIBUNWIND_ENABLE_SHARED ON CACHE BOOL "")
set(LIBUNWIND_ENABLE_STATIC OFF CACHE BOOL "")
