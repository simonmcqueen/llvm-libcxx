//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef TEST_LIBCXX_ALGORITHMS_ALG_SORTING_BAD_COMPARATOR_VALUES_H
#define TEST_LIBCXX_ALGORITHMS_ALG_SORTING_BAD_COMPARATOR_VALUES_H

#include <string_view>

inline constexpr std::string_view NTH_ELEMENT_DATA = R"(
0 0 0
0 1 0
0 2 0
0 3 0
0 4 1
0 5 0
0 6 0
0 7 0
1 0 0
1 1 0
1 2 0
1 3 1
1 4 1
1 5 1
1 6 1
1 7 1
2 0 1
2 1 1
2 2 1
2 3 1
2 4 1
2 5 1
2 6 1
2 7 1
3 0 1
3 1 1
3 2 1
3 3 1
3 4 1
3 5 1
3 6 1
3 7 1
4 0 1
4 1 1
4 2 1
4 3 1
4 4 1
4 5 1
4 6 1
4 7 1
5 0 1
5 1 1
5 2 1
5 3 1
5 4 1
5 5 1
5 6 1
5 7 1
6 0 1
6 1 1
6 2 1
6 3 1
6 4 1
6 5 1
6 6 1
6 7 1
7 0 1
7 1 1
7 2 1
7 3 1
7 4 1
7 5 1
7 6 1
7 7 1
)";

inline constexpr std::string_view SORT_DATA = R"(
0 0 0
0 1 1
0 2 1
0 3 1
0 4 1
0 5 1
0 6 1
0 7 1
0 8 1
0 9 1
0 10 1
0 11 1
0 12 1
0 13 1
0 14 1
0 15 1
0 16 1
0 17 1
0 18 1
0 19 1
0 20 1
0 21 1
0 22 1
0 23 1
0 24 1
0 25 1
0 26 1
0 27 1
0 28 1
0 29 1
0 30 1
0 31 1
0 32 1
0 33 1
0 34 1
0 35 1
0 36 1
0 37 1
0 38 1
0 39 1
0 40 1
0 41 1
0 42 1
0 43 1
0 44 1
0 45 1
0 46 1
0 47 1
0 48 1
0 49 1
0 50 1
0 51 1
0 52 1
0 53 1
0 54 1
0 55 1
0 56 1
0 57 1
0 58 1
1 0 0
1 1 0
1 2 1
1 3 1
1 4 1
1 5 1
1 6 1
1 7 1
1 8 1
1 9 1
1 10 1
1 11 1
1 12 1
1 13 1
1 14 1
1 15 1
1 16 1
1 17 1
1 18 1
1 19 1
1 20 1
1 21 1
1 22 1
1 23 1
1 24 1
1 25 1
1 26 1
1 27 1
1 28 1
1 29 1
1 30 1
1 31 1
1 32 1
1 33 1
1 34 1
1 35 1
1 36 1
1 37 1
1 38 1
1 39 1
1 40 1
1 41 1
1 42 1
1 43 1
1 44 1
1 45 1
1 46 1
1 47 1
1 48 1
1 49 1
1 50 1
1 51 1
1 52 1
1 53 1
1 54 1
1 55 1
1 56 1
1 57 1
1 58 1
2 0 0
2 1 0
2 2 0
2 3 1
2 4 1
2 5 1
2 6 1
2 7 1
2 8 1
2 9 1
2 10 1
2 11 1
2 12 1
2 13 1
2 14 1
2 15 1
2 16 1
2 17 1
2 18 1
2 19 1
2 20 1
2 21 1
2 22 1
2 23 1
2 24 1
2 25 1
2 26 1
2 27 1
2 28 1
2 29 1
2 30 1
2 31 1
2 32 1
2 33 1
2 34 1
2 35 1
2 36 1
2 37 1
2 38 1
2 39 1
2 40 1
2 41 1
2 42 1
2 43 1
2 44 1
2 45 1
2 46 1
2 47 1
2 48 1
2 49 1
2 50 1
2 51 1
2 52 1
2 53 1
2 54 1
2 55 1
2 56 1
2 57 1
2 58 1
3 0 0
3 1 0
3 2 0
3 3 0
3 4 1
3 5 1
3 6 1
3 7 1
3 8 1
3 9 1
3 10 1
3 11 1
3 12 1
3 13 1
3 14 1
3 15 1
3 16 1
3 17 1
3 18 1
3 19 1
3 20 1
3 21 1
3 22 1
3 23 1
3 24 1
3 25 1
3 26 1
3 27 1
3 28 1
3 29 1
3 30 1
3 31 1
3 32 1
3 33 1
3 34 1
3 35 1
3 36 1
3 37 1
3 38 1
3 39 1
3 40 1
3 41 1
3 42 1
3 43 1
3 44 1
3 45 1
3 46 1
3 47 1
3 48 1
3 49 1
3 50 1
3 51 1
3 52 1
3 53 1
3 54 1
3 55 1
3 56 1
3 57 1
3 58 1
4 0 0
4 1 0
4 2 0
4 3 0
4 4 0
4 5 1
4 6 1
4 7 1
4 8 1
4 9 1
4 10 1
4 11 1
4 12 1
4 13 1
4 14 1
4 15 1
4 16 1
4 17 1
4 18 1
4 19 1
4 20 1
4 21 1
4 22 1
4 23 1
4 24 1
4 25 1
4 26 1
4 27 1
4 28 1
4 29 1
4 30 1
4 31 1
4 32 1
4 33 1
4 34 1
4 35 1
4 36 1
4 37 1
4 38 1
4 39 1
4 40 1
4 41 1
4 42 1
4 43 1
4 44 1
4 45 1
4 46 1
4 47 1
4 48 1
4 49 1
4 50 1
4 51 1
4 52 1
4 53 1
4 54 1
4 55 1
4 56 1
4 57 1
4 58 1
5 0 0
5 1 0
5 2 0
5 3 0
5 4 0
5 5 0
5 6 1
5 7 1
5 8 1
5 9 1
5 10 1
5 11 1
5 12 1
5 13 1
5 14 1
5 15 1
5 16 1
5 17 1
5 18 1
5 19 1
5 20 1
5 21 1
5 22 1
5 23 1
5 24 1
5 25 1
5 26 1
5 27 1
5 28 1
5 29 1
5 30 1
5 31 1
5 32 1
5 33 1
5 34 1
5 35 1
5 36 1
5 37 1
5 38 1
5 39 1
5 40 1
5 41 1
5 42 1
5 43 1
5 44 1
5 45 1
5 46 1
5 47 1
5 48 1
5 49 1
5 50 1
5 51 1
5 52 1
5 53 1
5 54 1
5 55 1
5 56 1
5 57 1
5 58 1
6 0 0
6 1 0
6 2 0
6 3 0
6 4 0
6 5 0
6 6 0
6 7 1
6 8 1
6 9 1
6 10 1
6 11 1
6 12 1
6 13 1
6 14 1
6 15 1
6 16 1
6 17 1
6 18 1
6 19 1
6 20 1
6 21 1
6 22 1
6 23 1
6 24 1
6 25 1
6 26 1
6 27 1
6 28 1
6 29 1
6 30 1
6 31 1
6 32 1
6 33 1
6 34 1
6 35 1
6 36 1
6 37 1
6 38 1
6 39 1
6 40 1
6 41 1
6 42 1
6 43 1
6 44 1
6 45 1
6 46 1
6 47 1
6 48 1
6 49 1
6 50 1
6 51 1
6 52 1
6 53 1
6 54 1
6 55 1
6 56 1
6 57 1
6 58 1
7 0 0
7 1 0
7 2 0
7 3 0
7 4 0
7 5 0
7 6 0
7 7 0
7 8 1
7 9 1
7 10 1
7 11 1
7 12 1
7 13 1
7 14 1
7 15 1
7 16 1
7 17 1
7 18 1
7 19 1
7 20 1
7 21 1
7 22 1
7 23 1
7 24 1
7 25 1
7 26 1
7 27 1
7 28 1
7 29 1
7 30 1
7 31 1
7 32 1
7 33 1
7 34 1
7 35 1
7 36 1
7 37 1
7 38 1
7 39 1
7 40 1
7 41 1
7 42 1
7 43 1
7 44 1
7 45 1
7 46 1
7 47 1
7 48 1
7 49 1
7 50 1
7 51 1
7 52 1
7 53 1
7 54 1
7 55 1
7 56 1
7 57 1
7 58 1
8 0 0
8 1 0
8 2 0
8 3 0
8 4 0
8 5 0
8 6 0
8 7 0
8 8 0
8 9 1
8 10 1
8 11 1
8 12 1
8 13 1
8 14 1
8 15 1
8 16 1
8 17 1
8 18 1
8 19 1
8 20 1
8 21 1
8 22 1
8 23 1
8 24 1
8 25 1
8 26 1
8 27 1
8 28 1
8 29 1
8 30 1
8 31 1
8 32 1
8 33 1
8 34 1
8 35 1
8 36 1
8 37 1
8 38 1
8 39 1
8 40 1
8 41 1
8 42 1
8 43 1
8 44 1
8 45 1
8 46 1
8 47 1
8 48 1
8 49 1
8 50 1
8 51 1
8 52 1
8 53 1
8 54 1
8 55 1
8 56 1
8 57 1
8 58 1
9 0 0
9 1 0
9 2 0
9 3 0
9 4 0
9 5 0
9 6 0
9 7 0
9 8 0
9 9 0
9 10 1
9 11 1
9 12 1
9 13 1
9 14 1
9 15 1
9 16 1
9 17 1
9 18 1
9 19 1
9 20 1
9 21 1
9 22 1
9 23 1
9 24 1
9 25 1
9 26 1
9 27 1
9 28 1
9 29 1
9 30 1
9 31 1
9 32 1
9 33 1
9 34 1
9 35 1
9 36 1
9 37 1
9 38 1
9 39 1
9 40 1
9 41 1
9 42 1
9 43 1
9 44 1
9 45 1
9 46 1
9 47 1
9 48 1
9 49 1
9 50 1
9 51 1
9 52 1
9 53 1
9 54 1
9 55 1
9 56 1
9 57 1
9 58 1
10 0 0
10 1 0
10 2 0
10 3 0
10 4 0
10 5 0
10 6 0
10 7 0
10 8 0
10 9 0
10 10 0
10 11 1
10 12 1
10 13 1
10 14 1
10 15 1
10 16 1
10 17 1
10 18 1
10 19 1
10 20 1
10 21 1
10 22 1
10 23 1
10 24 1
10 25 1
10 26 1
10 27 1
10 28 1
10 29 1
10 30 1
10 31 1
10 32 1
10 33 1
10 34 1
10 35 1
10 36 1
10 37 1
10 38 1
10 39 1
10 40 1
10 41 1
10 42 1
10 43 1
10 44 1
10 45 1
10 46 1
10 47 1
10 48 1
10 49 1
10 50 1
10 51 1
10 52 1
10 53 1
10 54 1
10 55 1
10 56 1
10 57 1
10 58 1
11 0 0
11 1 0
11 2 0
11 3 0
11 4 0
11 5 0
11 6 0
11 7 0
11 8 0
11 9 0
11 10 0
11 11 0
11 12 1
11 13 1
11 14 1
11 15 1
11 16 1
11 17 1
11 18 1
11 19 1
11 20 1
11 21 1
11 22 1
11 23 1
11 24 1
11 25 1
11 26 1
11 27 1
11 28 1
11 29 1
11 30 1
11 31 1
11 32 1
11 33 1
11 34 1
11 35 1
11 36 1
11 37 1
11 38 1
11 39 1
11 40 1
11 41 1
11 42 1
11 43 1
11 44 1
11 45 1
11 46 1
11 47 1
11 48 1
11 49 1
11 50 1
11 51 1
11 52 1
11 53 1
11 54 1
11 55 1
11 56 1
11 57 1
11 58 1
12 0 0
12 1 0
12 2 0
12 3 0
12 4 0
12 5 0
12 6 0
12 7 0
12 8 0
12 9 0
12 10 0
12 11 0
12 12 0
12 13 1
12 14 1
12 15 1
12 16 1
12 17 1
12 18 1
12 19 1
12 20 1
12 21 1
12 22 1
12 23 1
12 24 1
12 25 1
12 26 1
12 27 1
12 28 1
12 29 1
12 30 1
12 31 1
12 32 1
12 33 1
12 34 1
12 35 1
12 36 1
12 37 1
12 38 1
12 39 1
12 40 1
12 41 1
12 42 1
12 43 1
12 44 1
12 45 1
12 46 1
12 47 1
12 48 1
12 49 1
12 50 1
12 51 1
12 52 1
12 53 1
12 54 1
12 55 1
12 56 1
12 57 1
12 58 1
13 0 0
13 1 0
13 2 0
13 3 0
13 4 0
13 5 0
13 6 0
13 7 0
13 8 0
13 9 0
13 10 0
13 11 0
13 12 0
13 13 0
13 14 1
13 15 1
13 16 1
13 17 1
13 18 1
13 19 1
13 20 1
13 21 1
13 22 1
13 23 1
13 24 1
13 25 1
13 26 1
13 27 1
13 28 1
13 29 1
13 30 1
13 31 1
13 32 1
13 33 1
13 34 1
13 35 1
13 36 1
13 37 1
13 38 1
13 39 1
13 40 1
13 41 1
13 42 1
13 43 1
13 44 1
13 45 1
13 46 1
13 47 1
13 48 1
13 49 1
13 50 1
13 51 1
13 52 1
13 53 1
13 54 1
13 55 1
13 56 1
13 57 1
13 58 1
14 0 0
14 1 0
14 2 0
14 3 0
14 4 0
14 5 0
14 6 0
14 7 0
14 8 0
14 9 0
14 10 0
14 11 0
14 12 0
14 13 0
14 14 0
14 15 1
14 16 1
14 17 1
14 18 1
14 19 1
14 20 1
14 21 1
14 22 1
14 23 1
14 24 1
14 25 1
14 26 1
14 27 1
14 28 1
14 29 1
14 30 1
14 31 1
14 32 1
14 33 1
14 34 1
14 35 1
14 36 1
14 37 1
14 38 1
14 39 1
14 40 1
14 41 1
14 42 1
14 43 1
14 44 1
14 45 1
14 46 1
14 47 1
14 48 1
14 49 1
14 50 1
14 51 1
14 52 1
14 53 1
14 54 1
14 55 1
14 56 1
14 57 1
14 58 1
15 0 0
15 1 0
15 2 0
15 3 0
15 4 0
15 5 0
15 6 0
15 7 0
15 8 0
15 9 0
15 10 0
15 11 0
15 12 0
15 13 0
15 14 0
15 15 0
15 16 1
15 17 1
15 18 1
15 19 1
15 20 1
15 21 1
15 22 1
15 23 1
15 24 1
15 25 1
15 26 1
15 27 1
15 28 1
15 29 1
15 30 1
15 31 1
15 32 1
15 33 1
15 34 1
15 35 1
15 36 1
15 37 1
15 38 1
15 39 1
15 40 1
15 41 1
15 42 1
15 43 1
15 44 1
15 45 1
15 46 1
15 47 1
15 48 1
15 49 1
15 50 1
15 51 1
15 52 1
15 53 1
15 54 1
15 55 1
15 56 1
15 57 1
15 58 1
16 0 0
16 1 0
16 2 0
16 3 0
16 4 0
16 5 0
16 6 0
16 7 0
16 8 0
16 9 0
16 10 0
16 11 0
16 12 0
16 13 0
16 14 0
16 15 0
16 16 0
16 17 1
16 18 1
16 19 1
16 20 1
16 21 1
16 22 1
16 23 1
16 24 1
16 25 1
16 26 1
16 27 1
16 28 1
16 29 1
16 30 1
16 31 1
16 32 1
16 33 1
16 34 1
16 35 1
16 36 1
16 37 1
16 38 1
16 39 1
16 40 1
16 41 1
16 42 1
16 43 1
16 44 1
16 45 1
16 46 1
16 47 1
16 48 1
16 49 1
16 50 1
16 51 1
16 52 1
16 53 1
16 54 1
16 55 1
16 56 1
16 57 1
16 58 1
17 0 0
17 1 0
17 2 0
17 3 0
17 4 0
17 5 0
17 6 0
17 7 0
17 8 0
17 9 0
17 10 0
17 11 0
17 12 0
17 13 0
17 14 0
17 15 0
17 16 0
17 17 0
17 18 1
17 19 1
17 20 1
17 21 1
17 22 1
17 23 1
17 24 1
17 25 1
17 26 1
17 27 1
17 28 1
17 29 1
17 30 1
17 31 1
17 32 1
17 33 1
17 34 1
17 35 1
17 36 1
17 37 1
17 38 1
17 39 1
17 40 1
17 41 1
17 42 1
17 43 1
17 44 1
17 45 1
17 46 1
17 47 1
17 48 1
17 49 1
17 50 1
17 51 1
17 52 1
17 53 1
17 54 1
17 55 1
17 56 1
17 57 1
17 58 1
18 0 0
18 1 0
18 2 0
18 3 0
18 4 0
18 5 0
18 6 0
18 7 0
18 8 0
18 9 0
18 10 0
18 11 0
18 12 0
18 13 0
18 14 0
18 15 0
18 16 0
18 17 0
18 18 0
18 19 1
18 20 1
18 21 1
18 22 1
18 23 1
18 24 1
18 25 1
18 26 1
18 27 1
18 28 1
18 29 1
18 30 1
18 31 1
18 32 1
18 33 1
18 34 1
18 35 1
18 36 1
18 37 1
18 38 1
18 39 1
18 40 1
18 41 1
18 42 1
18 43 1
18 44 1
18 45 1
18 46 1
18 47 1
18 48 1
18 49 1
18 50 1
18 51 1
18 52 1
18 53 1
18 54 1
18 55 1
18 56 1
18 57 1
18 58 1
19 0 0
19 1 0
19 2 0
19 3 0
19 4 0
19 5 0
19 6 0
19 7 0
19 8 0
19 9 0
19 10 0
19 11 0
19 12 0
19 13 0
19 14 0
19 15 0
19 16 0
19 17 0
19 18 0
19 19 0
19 20 1
19 21 1
19 22 1
19 23 1
19 24 1
19 25 1
19 26 1
19 27 1
19 28 1
19 29 1
19 30 1
19 31 1
19 32 1
19 33 1
19 34 1
19 35 1
19 36 1
19 37 1
19 38 1
19 39 1
19 40 1
19 41 1
19 42 1
19 43 1
19 44 1
19 45 1
19 46 1
19 47 1
19 48 1
19 49 1
19 50 1
19 51 1
19 52 1
19 53 1
19 54 1
19 55 1
19 56 1
19 57 1
19 58 1
20 0 0
20 1 0
20 2 0
20 3 0
20 4 0
20 5 0
20 6 0
20 7 0
20 8 0
20 9 0
20 10 0
20 11 0
20 12 0
20 13 0
20 14 0
20 15 0
20 16 0
20 17 0
20 18 0
20 19 0
20 20 0
20 21 1
20 22 1
20 23 1
20 24 1
20 25 1
20 26 1
20 27 1
20 28 1
20 29 1
20 30 1
20 31 1
20 32 1
20 33 1
20 34 1
20 35 1
20 36 1
20 37 1
20 38 1
20 39 1
20 40 1
20 41 1
20 42 1
20 43 1
20 44 1
20 45 1
20 46 1
20 47 1
20 48 1
20 49 1
20 50 1
20 51 1
20 52 1
20 53 1
20 54 1
20 55 1
20 56 1
20 57 1
20 58 1
21 0 0
21 1 0
21 2 0
21 3 0
21 4 0
21 5 0
21 6 0
21 7 0
21 8 0
21 9 0
21 10 0
21 11 0
21 12 0
21 13 0
21 14 0
21 15 0
21 16 0
21 17 0
21 18 0
21 19 0
21 20 0
21 21 0
21 22 1
21 23 1
21 24 1
21 25 1
21 26 1
21 27 1
21 28 1
21 29 1
21 30 1
21 31 1
21 32 1
21 33 1
21 34 1
21 35 1
21 36 1
21 37 1
21 38 1
21 39 1
21 40 1
21 41 1
21 42 1
21 43 1
21 44 1
21 45 1
21 46 1
21 47 1
21 48 1
21 49 1
21 50 1
21 51 1
21 52 1
21 53 1
21 54 1
21 55 1
21 56 1
21 57 1
21 58 1
22 0 0
22 1 0
22 2 0
22 3 0
22 4 0
22 5 0
22 6 0
22 7 0
22 8 0
22 9 0
22 10 0
22 11 0
22 12 0
22 13 0
22 14 0
22 15 0
22 16 0
22 17 0
22 18 0
22 19 0
22 20 0
22 21 0
22 22 0
22 23 1
22 24 1
22 25 1
22 26 1
22 27 1
22 28 1
22 29 1
22 30 1
22 31 1
22 32 1
22 33 1
22 34 1
22 35 1
22 36 1
22 37 1
22 38 1
22 39 1
22 40 1
22 41 1
22 42 1
22 43 1
22 44 1
22 45 1
22 46 1
22 47 1
22 48 1
22 49 1
22 50 1
22 51 1
22 52 1
22 53 1
22 54 1
22 55 1
22 56 1
22 57 1
22 58 1
23 0 0
23 1 0
23 2 0
23 3 0
23 4 0
23 5 0
23 6 0
23 7 0
23 8 0
23 9 0
23 10 0
23 11 0
23 12 0
23 13 0
23 14 0
23 15 0
23 16 0
23 17 0
23 18 0
23 19 0
23 20 0
23 21 0
23 22 0
23 23 0
23 24 1
23 25 1
23 26 1
23 27 1
23 28 1
23 29 1
23 30 1
23 31 1
23 32 1
23 33 1
23 34 1
23 35 1
23 36 1
23 37 1
23 38 1
23 39 1
23 40 1
23 41 1
23 42 1
23 43 1
23 44 1
23 45 1
23 46 1
23 47 1
23 48 1
23 49 1
23 50 1
23 51 1
23 52 1
23 53 1
23 54 1
23 55 1
23 56 1
23 57 1
23 58 1
24 0 0
24 1 0
24 2 0
24 3 0
24 4 0
24 5 0
24 6 0
24 7 0
24 8 0
24 9 0
24 10 0
24 11 0
24 12 0
24 13 0
24 14 0
24 15 0
24 16 0
24 17 0
24 18 0
24 19 0
24 20 0
24 21 0
24 22 0
24 23 0
24 24 0
24 25 1
24 26 1
24 27 1
24 28 1
24 29 1
24 30 1
24 31 1
24 32 1
24 33 1
24 34 1
24 35 1
24 36 1
24 37 1
24 38 1
24 39 1
24 40 1
24 41 1
24 42 1
24 43 1
24 44 1
24 45 1
24 46 1
24 47 1
24 48 1
24 49 1
24 50 1
24 51 1
24 52 1
24 53 1
24 54 1
24 55 1
24 56 1
24 57 1
24 58 1
25 0 0
25 1 0
25 2 0
25 3 0
25 4 0
25 5 0
25 6 0
25 7 0
25 8 0
25 9 0
25 10 0
25 11 0
25 12 0
25 13 0
25 14 0
25 15 0
25 16 0
25 17 0
25 18 0
25 19 0
25 20 0
25 21 0
25 22 0
25 23 0
25 24 0
25 25 0
25 26 1
25 27 1
25 28 1
25 29 1
25 30 1
25 31 1
25 32 1
25 33 1
25 34 1
25 35 1
25 36 1
25 37 1
25 38 1
25 39 1
25 40 1
25 41 1
25 42 1
25 43 1
25 44 1
25 45 1
25 46 1
25 47 1
25 48 1
25 49 1
25 50 1
25 51 1
25 52 1
25 53 1
25 54 1
25 55 1
25 56 1
25 57 1
25 58 1
26 0 0
26 1 0
26 2 0
26 3 0
26 4 0
26 5 0
26 6 0
26 7 0
26 8 0
26 9 0
26 10 0
26 11 0
26 12 0
26 13 0
26 14 0
26 15 0
26 16 0
26 17 0
26 18 0
26 19 0
26 20 0
26 21 0
26 22 0
26 23 0
26 24 0
26 25 0
26 26 0
26 27 1
26 28 1
26 29 1
26 30 1
26 31 1
26 32 1
26 33 1
26 34 1
26 35 1
26 36 1
26 37 1
26 38 1
26 39 1
26 40 1
26 41 1
26 42 1
26 43 1
26 44 1
26 45 1
26 46 1
26 47 1
26 48 1
26 49 1
26 50 1
26 51 1
26 52 1
26 53 1
26 54 1
26 55 1
26 56 1
26 57 1
26 58 1
27 0 0
27 1 0
27 2 0
27 3 0
27 4 0
27 5 0
27 6 0
27 7 0
27 8 0
27 9 0
27 10 0
27 11 0
27 12 0
27 13 0
27 14 0
27 15 0
27 16 0
27 17 0
27 18 0
27 19 0
27 20 0
27 21 0
27 22 0
27 23 0
27 24 0
27 25 0
27 26 0
27 27 0
27 28 1
27 29 1
27 30 1
27 31 1
27 32 1
27 33 1
27 34 1
27 35 1
27 36 1
27 37 1
27 38 1
27 39 1
27 40 1
27 41 1
27 42 1
27 43 1
27 44 1
27 45 1
27 46 1
27 47 1
27 48 1
27 49 1
27 50 1
27 51 1
27 52 1
27 53 1
27 54 1
27 55 1
27 56 1
27 57 1
27 58 1
28 0 0
28 1 0
28 2 0
28 3 0
28 4 0
28 5 0
28 6 0
28 7 0
28 8 0
28 9 0
28 10 0
28 11 0
28 12 0
28 13 0
28 14 0
28 15 0
28 16 0
28 17 0
28 18 0
28 19 0
28 20 0
28 21 0
28 22 0
28 23 0
28 24 0
28 25 0
28 26 0
28 27 0
28 28 0
28 29 1
28 30 0
28 31 0
28 32 0
28 33 0
28 34 0
28 35 0
28 36 0
28 37 0
28 38 0
28 39 0
28 40 0
28 41 0
28 42 0
28 43 0
28 44 0
28 45 0
28 46 0
28 47 0
28 48 0
28 49 0
28 50 0
28 51 0
28 52 0
28 53 0
28 54 0
28 55 0
28 56 0
28 57 0
28 58 0
29 0 0
29 1 0
29 2 0
29 3 0
29 4 0
29 5 0
29 6 0
29 7 0
29 8 0
29 9 0
29 10 0
29 11 0
29 12 0
29 13 0
29 14 0
29 15 0
29 16 0
29 17 0
29 18 0
29 19 0
29 20 0
29 21 0
29 22 0
29 23 0
29 24 0
29 25 0
29 26 0
29 27 0
29 28 1
29 29 0
29 30 1
29 31 0
29 32 0
29 33 0
29 34 0
29 35 0
29 36 0
29 37 0
29 38 0
29 39 0
29 40 0
29 41 0
29 42 0
29 43 0
29 44 0
29 45 0
29 46 0
29 47 0
29 48 0
29 49 0
29 50 0
29 51 0
29 52 0
29 53 0
29 54 0
29 55 0
29 56 0
29 57 0
29 58 0
30 0 0
30 1 0
30 2 0
30 3 0
30 4 0
30 5 0
30 6 0
30 7 0
30 8 0
30 9 0
30 10 0
30 11 0
30 12 0
30 13 0
30 14 0
30 15 0
30 16 0
30 17 0
30 18 0
30 19 0
30 20 0
30 21 0
30 22 0
30 23 0
30 24 0
30 25 0
30 26 0
30 27 0
30 28 1
30 29 1
30 30 0
30 31 1
30 32 0
30 33 0
30 34 0
30 35 0
30 36 0
30 37 0
30 38 0
30 39 0
30 40 0
30 41 0
30 42 0
30 43 0
30 44 0
30 45 0
30 46 0
30 47 0
30 48 0
30 49 0
30 50 0
30 51 0
30 52 0
30 53 0
30 54 0
30 55 0
30 56 0
30 57 0
30 58 0
31 0 0
31 1 0
31 2 0
31 3 0
31 4 0
31 5 0
31 6 0
31 7 0
31 8 0
31 9 0
31 10 0
31 11 0
31 12 0
31 13 0
31 14 0
31 15 0
31 16 0
31 17 0
31 18 0
31 19 0
31 20 0
31 21 0
31 22 0
31 23 0
31 24 0
31 25 0
31 26 0
31 27 0
31 28 1
31 29 1
31 30 1
31 31 0
31 32 1
31 33 0
31 34 0
31 35 0
31 36 0
31 37 0
31 38 0
31 39 0
31 40 0
31 41 0
31 42 0
31 43 0
31 44 0
31 45 0
31 46 0
31 47 0
31 48 0
31 49 0
31 50 0
31 51 0
31 52 0
31 53 0
31 54 0
31 55 0
31 56 0
31 57 0
31 58 0
32 0 0
32 1 0
32 2 0
32 3 0
32 4 0
32 5 0
32 6 0
32 7 0
32 8 0
32 9 0
32 10 0
32 11 0
32 12 0
32 13 0
32 14 0
32 15 0
32 16 0
32 17 0
32 18 0
32 19 0
32 20 0
32 21 0
32 22 0
32 23 0
32 24 0
32 25 0
32 26 0
32 27 0
32 28 1
32 29 1
32 30 1
32 31 1
32 32 0
32 33 1
32 34 0
32 35 0
32 36 0
32 37 0
32 38 0
32 39 0
32 40 0
32 41 0
32 42 0
32 43 0
32 44 0
32 45 0
32 46 0
32 47 0
32 48 0
32 49 0
32 50 0
32 51 0
32 52 0
32 53 0
32 54 0
32 55 0
32 56 0
32 57 0
32 58 0
33 0 0
33 1 0
33 2 0
33 3 0
33 4 0
33 5 0
33 6 0
33 7 0
33 8 0
33 9 0
33 10 0
33 11 0
33 12 0
33 13 0
33 14 0
33 15 0
33 16 0
33 17 0
33 18 0
33 19 0
33 20 0
33 21 0
33 22 0
33 23 0
33 24 0
33 25 0
33 26 0
33 27 0
33 28 1
33 29 1
33 30 1
33 31 1
33 32 1
33 33 0
33 34 1
33 35 0
33 36 0
33 37 0
33 38 0
33 39 0
33 40 0
33 41 0
33 42 0
33 43 0
33 44 0
33 45 0
33 46 0
33 47 0
33 48 0
33 49 0
33 50 0
33 51 0
33 52 0
33 53 0
33 54 0
33 55 0
33 56 0
33 57 0
33 58 0
34 0 0
34 1 0
34 2 0
34 3 0
34 4 0
34 5 0
34 6 0
34 7 0
34 8 0
34 9 0
34 10 0
34 11 0
34 12 0
34 13 0
34 14 0
34 15 0
34 16 0
34 17 0
34 18 0
34 19 0
34 20 0
34 21 0
34 22 0
34 23 0
34 24 0
34 25 0
34 26 0
34 27 0
34 28 1
34 29 1
34 30 1
34 31 1
34 32 1
34 33 1
34 34 0
34 35 1
34 36 0
34 37 0
34 38 0
34 39 0
34 40 0
34 41 0
34 42 0
34 43 0
34 44 0
34 45 0
34 46 0
34 47 0
34 48 0
34 49 0
34 50 0
34 51 0
34 52 0
34 53 0
34 54 0
34 55 0
34 56 0
34 57 0
34 58 0
35 0 0
35 1 0
35 2 0
35 3 0
35 4 0
35 5 0
35 6 0
35 7 0
35 8 0
35 9 0
35 10 0
35 11 0
35 12 0
35 13 0
35 14 0
35 15 0
35 16 0
35 17 0
35 18 0
35 19 0
35 20 0
35 21 0
35 22 0
35 23 0
35 24 0
35 25 0
35 26 0
35 27 0
35 28 1
35 29 1
35 30 1
35 31 1
35 32 1
35 33 1
35 34 1
35 35 0
35 36 1
35 37 0
35 38 0
35 39 0
35 40 0
35 41 0
35 42 0
35 43 0
35 44 0
35 45 0
35 46 0
35 47 0
35 48 0
35 49 0
35 50 0
35 51 0
35 52 0
35 53 0
35 54 0
35 55 0
35 56 0
35 57 0
35 58 0
36 0 0
36 1 0
36 2 0
36 3 0
36 4 0
36 5 0
36 6 0
36 7 0
36 8 0
36 9 0
36 10 0
36 11 0
36 12 0
36 13 0
36 14 0
36 15 0
36 16 0
36 17 0
36 18 0
36 19 0
36 20 0
36 21 0
36 22 0
36 23 0
36 24 0
36 25 0
36 26 0
36 27 0
36 28 1
36 29 1
36 30 1
36 31 1
36 32 1
36 33 1
36 34 1
36 35 1
36 36 0
36 37 1
36 38 0
36 39 0
36 40 0
36 41 0
36 42 0
36 43 0
36 44 0
36 45 0
36 46 0
36 47 0
36 48 0
36 49 0
36 50 0
36 51 0
36 52 0
36 53 0
36 54 0
36 55 0
36 56 0
36 57 0
36 58 0
37 0 0
37 1 0
37 2 0
37 3 0
37 4 0
37 5 0
37 6 0
37 7 0
37 8 0
37 9 0
37 10 0
37 11 0
37 12 0
37 13 0
37 14 0
37 15 0
37 16 0
37 17 0
37 18 0
37 19 0
37 20 0
37 21 0
37 22 0
37 23 0
37 24 0
37 25 0
37 26 0
37 27 0
37 28 1
37 29 1
37 30 1
37 31 1
37 32 1
37 33 1
37 34 1
37 35 1
37 36 1
37 37 0
37 38 1
37 39 0
37 40 0
37 41 0
37 42 0
37 43 0
37 44 0
37 45 0
37 46 0
37 47 0
37 48 0
37 49 0
37 50 0
37 51 0
37 52 0
37 53 0
37 54 0
37 55 0
37 56 0
37 57 0
37 58 0
38 0 0
38 1 0
38 2 0
38 3 0
38 4 0
38 5 0
38 6 0
38 7 0
38 8 0
38 9 0
38 10 0
38 11 0
38 12 0
38 13 0
38 14 0
38 15 0
38 16 0
38 17 0
38 18 0
38 19 0
38 20 0
38 21 0
38 22 0
38 23 0
38 24 0
38 25 0
38 26 0
38 27 0
38 28 1
38 29 1
38 30 1
38 31 1
38 32 1
38 33 1
38 34 1
38 35 1
38 36 1
38 37 1
38 38 0
38 39 1
38 40 0
38 41 0
38 42 0
38 43 0
38 44 0
38 45 0
38 46 0
38 47 0
38 48 0
38 49 0
38 50 0
38 51 0
38 52 0
38 53 0
38 54 0
38 55 0
38 56 0
38 57 0
38 58 0
39 0 0
39 1 0
39 2 0
39 3 0
39 4 0
39 5 0
39 6 0
39 7 0
39 8 0
39 9 0
39 10 0
39 11 0
39 12 0
39 13 0
39 14 0
39 15 0
39 16 0
39 17 0
39 18 0
39 19 0
39 20 0
39 21 0
39 22 0
39 23 0
39 24 0
39 25 0
39 26 0
39 27 0
39 28 1
39 29 1
39 30 1
39 31 1
39 32 1
39 33 1
39 34 1
39 35 1
39 36 1
39 37 1
39 38 1
39 39 0
39 40 1
39 41 0
39 42 0
39 43 0
39 44 0
39 45 0
39 46 0
39 47 0
39 48 0
39 49 0
39 50 0
39 51 0
39 52 0
39 53 0
39 54 0
39 55 0
39 56 0
39 57 0
39 58 0
40 0 0
40 1 0
40 2 0
40 3 0
40 4 0
40 5 0
40 6 0
40 7 0
40 8 0
40 9 0
40 10 0
40 11 0
40 12 0
40 13 0
40 14 0
40 15 0
40 16 0
40 17 0
40 18 0
40 19 0
40 20 0
40 21 0
40 22 0
40 23 0
40 24 0
40 25 0
40 26 0
40 27 0
40 28 1
40 29 1
40 30 1
40 31 1
40 32 1
40 33 1
40 34 1
40 35 1
40 36 1
40 37 1
40 38 1
40 39 1
40 40 0
40 41 1
40 42 0
40 43 0
40 44 0
40 45 0
40 46 0
40 47 0
40 48 0
40 49 0
40 50 0
40 51 0
40 52 0
40 53 0
40 54 0
40 55 0
40 56 0
40 57 0
40 58 0
41 0 0
41 1 0
41 2 0
41 3 0
41 4 0
41 5 0
41 6 0
41 7 0
41 8 0
41 9 0
41 10 0
41 11 0
41 12 0
41 13 0
41 14 0
41 15 0
41 16 0
41 17 0
41 18 0
41 19 0
41 20 0
41 21 0
41 22 0
41 23 0
41 24 0
41 25 0
41 26 0
41 27 0
41 28 1
41 29 1
41 30 1
41 31 1
41 32 1
41 33 1
41 34 1
41 35 1
41 36 1
41 37 1
41 38 1
41 39 1
41 40 1
41 41 0
41 42 1
41 43 0
41 44 0
41 45 0
41 46 0
41 47 0
41 48 0
41 49 0
41 50 0
41 51 0
41 52 0
41 53 0
41 54 0
41 55 0
41 56 0
41 57 0
41 58 0
42 0 0
42 1 0
42 2 0
42 3 0
42 4 0
42 5 0
42 6 0
42 7 0
42 8 0
42 9 0
42 10 0
42 11 0
42 12 0
42 13 0
42 14 0
42 15 0
42 16 0
42 17 0
42 18 0
42 19 0
42 20 0
42 21 0
42 22 0
42 23 0
42 24 0
42 25 0
42 26 0
42 27 0
42 28 1
42 29 1
42 30 1
42 31 1
42 32 1
42 33 1
42 34 1
42 35 1
42 36 1
42 37 1
42 38 1
42 39 1
42 40 1
42 41 1
42 42 0
42 43 1
42 44 0
42 45 0
42 46 0
42 47 0
42 48 0
42 49 0
42 50 0
42 51 0
42 52 0
42 53 0
42 54 0
42 55 0
42 56 0
42 57 0
42 58 0
43 0 0
43 1 0
43 2 0
43 3 0
43 4 0
43 5 0
43 6 0
43 7 0
43 8 0
43 9 0
43 10 0
43 11 0
43 12 0
43 13 0
43 14 0
43 15 0
43 16 0
43 17 0
43 18 0
43 19 0
43 20 0
43 21 0
43 22 0
43 23 0
43 24 0
43 25 0
43 26 0
43 27 0
43 28 1
43 29 1
43 30 1
43 31 1
43 32 1
43 33 1
43 34 1
43 35 1
43 36 1
43 37 1
43 38 1
43 39 1
43 40 1
43 41 1
43 42 1
43 43 0
43 44 1
43 45 0
43 46 0
43 47 0
43 48 0
43 49 0
43 50 0
43 51 0
43 52 0
43 53 0
43 54 0
43 55 0
43 56 0
43 57 0
43 58 0
44 0 0
44 1 0
44 2 0
44 3 0
44 4 0
44 5 0
44 6 0
44 7 0
44 8 0
44 9 0
44 10 0
44 11 0
44 12 0
44 13 0
44 14 0
44 15 0
44 16 0
44 17 0
44 18 0
44 19 0
44 20 0
44 21 0
44 22 0
44 23 0
44 24 0
44 25 0
44 26 0
44 27 0
44 28 1
44 29 1
44 30 1
44 31 1
44 32 1
44 33 1
44 34 1
44 35 1
44 36 1
44 37 1
44 38 1
44 39 1
44 40 1
44 41 1
44 42 1
44 43 1
44 44 0
44 45 1
44 46 0
44 47 0
44 48 0
44 49 0
44 50 0
44 51 0
44 52 0
44 53 0
44 54 0
44 55 0
44 56 0
44 57 0
44 58 0
45 0 0
45 1 0
45 2 0
45 3 0
45 4 0
45 5 0
45 6 0
45 7 0
45 8 0
45 9 0
45 10 0
45 11 0
45 12 0
45 13 0
45 14 0
45 15 0
45 16 0
45 17 0
45 18 0
45 19 0
45 20 0
45 21 0
45 22 0
45 23 0
45 24 0
45 25 0
45 26 0
45 27 0
45 28 1
45 29 1
45 30 1
45 31 1
45 32 1
45 33 1
45 34 1
45 35 1
45 36 1
45 37 1
45 38 1
45 39 1
45 40 1
45 41 1
45 42 1
45 43 1
45 44 1
45 45 0
45 46 1
45 47 0
45 48 0
45 49 0
45 50 0
45 51 0
45 52 0
45 53 0
45 54 0
45 55 0
45 56 0
45 57 0
45 58 0
46 0 0
46 1 0
46 2 0
46 3 0
46 4 0
46 5 0
46 6 0
46 7 0
46 8 0
46 9 0
46 10 0
46 11 0
46 12 0
46 13 0
46 14 0
46 15 0
46 16 0
46 17 0
46 18 0
46 19 0
46 20 0
46 21 0
46 22 0
46 23 0
46 24 0
46 25 0
46 26 0
46 27 0
46 28 1
46 29 1
46 30 1
46 31 1
46 32 1
46 33 1
46 34 1
46 35 1
46 36 1
46 37 1
46 38 1
46 39 1
46 40 1
46 41 1
46 42 1
46 43 1
46 44 1
46 45 1
46 46 0
46 47 1
46 48 0
46 49 0
46 50 0
46 51 0
46 52 0
46 53 0
46 54 0
46 55 0
46 56 0
46 57 0
46 58 0
47 0 0
47 1 0
47 2 0
47 3 0
47 4 0
47 5 0
47 6 0
47 7 0
47 8 0
47 9 0
47 10 0
47 11 0
47 12 0
47 13 0
47 14 0
47 15 0
47 16 0
47 17 0
47 18 0
47 19 0
47 20 0
47 21 0
47 22 0
47 23 0
47 24 0
47 25 0
47 26 0
47 27 0
47 28 1
47 29 1
47 30 1
47 31 1
47 32 1
47 33 1
47 34 1
47 35 1
47 36 1
47 37 1
47 38 1
47 39 1
47 40 1
47 41 1
47 42 1
47 43 1
47 44 1
47 45 1
47 46 1
47 47 0
47 48 1
47 49 0
47 50 0
47 51 0
47 52 0
47 53 0
47 54 0
47 55 0
47 56 0
47 57 0
47 58 0
48 0 0
48 1 0
48 2 0
48 3 0
48 4 0
48 5 0
48 6 0
48 7 0
48 8 0
48 9 0
48 10 0
48 11 0
48 12 0
48 13 0
48 14 0
48 15 0
48 16 0
48 17 0
48 18 0
48 19 0
48 20 0
48 21 0
48 22 0
48 23 0
48 24 0
48 25 0
48 26 0
48 27 0
48 28 1
48 29 1
48 30 1
48 31 1
48 32 1
48 33 1
48 34 1
48 35 1
48 36 1
48 37 1
48 38 1
48 39 1
48 40 1
48 41 1
48 42 1
48 43 1
48 44 1
48 45 1
48 46 1
48 47 1
48 48 0
48 49 1
48 50 0
48 51 0
48 52 0
48 53 0
48 54 0
48 55 0
48 56 0
48 57 0
48 58 0
49 0 0
49 1 0
49 2 0
49 3 0
49 4 0
49 5 0
49 6 0
49 7 0
49 8 0
49 9 0
49 10 0
49 11 0
49 12 0
49 13 0
49 14 0
49 15 0
49 16 0
49 17 0
49 18 0
49 19 0
49 20 0
49 21 0
49 22 0
49 23 0
49 24 0
49 25 0
49 26 0
49 27 0
49 28 1
49 29 1
49 30 1
49 31 1
49 32 1
49 33 1
49 34 1
49 35 1
49 36 1
49 37 1
49 38 1
49 39 1
49 40 1
49 41 1
49 42 1
49 43 1
49 44 1
49 45 1
49 46 1
49 47 1
49 48 1
49 49 0
49 50 1
49 51 0
49 52 0
49 53 0
49 54 0
49 55 0
49 56 0
49 57 0
49 58 0
50 0 0
50 1 0
50 2 0
50 3 0
50 4 0
50 5 0
50 6 0
50 7 0
50 8 0
50 9 0
50 10 0
50 11 0
50 12 0
50 13 0
50 14 0
50 15 0
50 16 0
50 17 0
50 18 0
50 19 0
50 20 0
50 21 0
50 22 0
50 23 0
50 24 0
50 25 0
50 26 0
50 27 0
50 28 1
50 29 1
50 30 1
50 31 1
50 32 1
50 33 1
50 34 1
50 35 1
50 36 1
50 37 1
50 38 1
50 39 1
50 40 1
50 41 1
50 42 1
50 43 1
50 44 1
50 45 1
50 46 1
50 47 1
50 48 1
50 49 1
50 50 0
50 51 1
50 52 0
50 53 0
50 54 0
50 55 0
50 56 0
50 57 0
50 58 0
51 0 0
51 1 0
51 2 0
51 3 0
51 4 0
51 5 0
51 6 0
51 7 0
51 8 0
51 9 0
51 10 0
51 11 0
51 12 0
51 13 0
51 14 0
51 15 0
51 16 0
51 17 0
51 18 0
51 19 0
51 20 0
51 21 0
51 22 0
51 23 0
51 24 0
51 25 0
51 26 0
51 27 0
51 28 1
51 29 1
51 30 1
51 31 1
51 32 1
51 33 1
51 34 1
51 35 1
51 36 1
51 37 1
51 38 1
51 39 1
51 40 1
51 41 1
51 42 1
51 43 1
51 44 1
51 45 1
51 46 1
51 47 1
51 48 1
51 49 1
51 50 1
51 51 0
51 52 1
51 53 0
51 54 0
51 55 0
51 56 0
51 57 0
51 58 0
52 0 0
52 1 0
52 2 0
52 3 0
52 4 0
52 5 0
52 6 0
52 7 0
52 8 0
52 9 0
52 10 0
52 11 0
52 12 0
52 13 0
52 14 0
52 15 0
52 16 0
52 17 0
52 18 0
52 19 0
52 20 0
52 21 0
52 22 0
52 23 0
52 24 0
52 25 0
52 26 0
52 27 0
52 28 1
52 29 1
52 30 1
52 31 1
52 32 1
52 33 1
52 34 1
52 35 1
52 36 1
52 37 1
52 38 1
52 39 1
52 40 1
52 41 1
52 42 1
52 43 1
52 44 1
52 45 1
52 46 1
52 47 1
52 48 1
52 49 1
52 50 1
52 51 1
52 52 0
52 53 1
52 54 0
52 55 0
52 56 0
52 57 0
52 58 0
53 0 0
53 1 0
53 2 0
53 3 0
53 4 0
53 5 0
53 6 0
53 7 0
53 8 0
53 9 0
53 10 0
53 11 0
53 12 0
53 13 0
53 14 0
53 15 0
53 16 0
53 17 0
53 18 0
53 19 0
53 20 0
53 21 0
53 22 0
53 23 0
53 24 0
53 25 0
53 26 0
53 27 0
53 28 1
53 29 1
53 30 1
53 31 1
53 32 1
53 33 1
53 34 1
53 35 1
53 36 1
53 37 1
53 38 1
53 39 1
53 40 1
53 41 1
53 42 1
53 43 1
53 44 1
53 45 1
53 46 1
53 47 1
53 48 1
53 49 1
53 50 1
53 51 1
53 52 1
53 53 0
53 54 1
53 55 0
53 56 0
53 57 0
53 58 0
54 0 0
54 1 0
54 2 0
54 3 0
54 4 0
54 5 0
54 6 0
54 7 0
54 8 0
54 9 0
54 10 0
54 11 0
54 12 0
54 13 0
54 14 0
54 15 0
54 16 0
54 17 0
54 18 0
54 19 0
54 20 0
54 21 0
54 22 0
54 23 0
54 24 0
54 25 0
54 26 0
54 27 0
54 28 1
54 29 1
54 30 1
54 31 1
54 32 1
54 33 1
54 34 1
54 35 1
54 36 1
54 37 1
54 38 1
54 39 1
54 40 1
54 41 1
54 42 1
54 43 1
54 44 1
54 45 1
54 46 1
54 47 1
54 48 1
54 49 1
54 50 1
54 51 1
54 52 1
54 53 1
54 54 0
54 55 1
54 56 0
54 57 0
54 58 0
55 0 0
55 1 0
55 2 0
55 3 0
55 4 0
55 5 0
55 6 0
55 7 0
55 8 0
55 9 0
55 10 0
55 11 0
55 12 0
55 13 0
55 14 0
55 15 0
55 16 0
55 17 0
55 18 0
55 19 0
55 20 0
55 21 0
55 22 0
55 23 0
55 24 0
55 25 0
55 26 0
55 27 0
55 28 1
55 29 1
55 30 1
55 31 1
55 32 1
55 33 1
55 34 1
55 35 1
55 36 1
55 37 1
55 38 1
55 39 1
55 40 1
55 41 1
55 42 1
55 43 1
55 44 1
55 45 1
55 46 1
55 47 1
55 48 1
55 49 1
55 50 1
55 51 1
55 52 1
55 53 1
55 54 1
55 55 0
55 56 1
55 57 0
55 58 0
56 0 0
56 1 0
56 2 0
56 3 0
56 4 0
56 5 0
56 6 0
56 7 0
56 8 0
56 9 0
56 10 0
56 11 0
56 12 0
56 13 0
56 14 0
56 15 0
56 16 0
56 17 0
56 18 0
56 19 0
56 20 0
56 21 0
56 22 0
56 23 0
56 24 0
56 25 0
56 26 0
56 27 0
56 28 1
56 29 1
56 30 1
56 31 1
56 32 1
56 33 1
56 34 1
56 35 1
56 36 1
56 37 1
56 38 1
56 39 1
56 40 1
56 41 1
56 42 1
56 43 1
56 44 1
56 45 1
56 46 1
56 47 1
56 48 1
56 49 1
56 50 1
56 51 1
56 52 1
56 53 1
56 54 1
56 55 1
56 56 0
56 57 1
56 58 0
57 0 0
57 1 0
57 2 0
57 3 0
57 4 0
57 5 0
57 6 0
57 7 0
57 8 0
57 9 0
57 10 0
57 11 0
57 12 0
57 13 0
57 14 0
57 15 0
57 16 0
57 17 0
57 18 0
57 19 0
57 20 0
57 21 0
57 22 0
57 23 0
57 24 0
57 25 0
57 26 0
57 27 0
57 28 1
57 29 1
57 30 1
57 31 1
57 32 1
57 33 1
57 34 1
57 35 1
57 36 1
57 37 1
57 38 1
57 39 1
57 40 1
57 41 1
57 42 1
57 43 1
57 44 1
57 45 1
57 46 1
57 47 1
57 48 1
57 49 1
57 50 1
57 51 1
57 52 1
57 53 1
57 54 1
57 55 1
57 56 1
57 57 0
57 58 1
58 0 0
58 1 0
58 2 0
58 3 0
58 4 0
58 5 0
58 6 0
58 7 0
58 8 0
58 9 0
58 10 0
58 11 0
58 12 0
58 13 0
58 14 0
58 15 0
58 16 0
58 17 0
58 18 0
58 19 0
58 20 0
58 21 0
58 22 0
58 23 0
58 24 0
58 25 0
58 26 0
58 27 0
58 28 1
58 29 1
58 30 1
58 31 1
58 32 1
58 33 1
58 34 1
58 35 1
58 36 1
58 37 1
58 38 1
58 39 1
58 40 1
58 41 1
58 42 1
58 43 1
58 44 1
58 45 1
58 46 1
58 47 1
58 48 1
58 49 1
58 50 1
58 51 1
58 52 1
58 53 1
58 54 1
58 55 1
58 56 1
58 57 1
58 58 0
)";

#endif // TEST_LIBCXX_ALGORITHMS_ALG_SORTING_BAD_COMPARATOR_VALUES_H
