set(LIBCXX_ENABLE_FILESYSTEM OFF CACHE BOOL "")

# Speed up the CI
set(LIBCXX_TEST_PARAMS "enable_modules=clang" CACHE STRING "")
set(LIBCXXABI_TEST_PARAMS "${LIBCXX_TEST_PARAMS}" CACHE STRING "")
