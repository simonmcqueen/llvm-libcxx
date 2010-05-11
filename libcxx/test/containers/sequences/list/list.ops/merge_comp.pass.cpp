//===----------------------------------------------------------------------===//
//
// ΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚThe LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <list>

// template <class Compare> void merge(list& x, Compare comp);

#include <list>
#include <functional>
#include <cassert>

int main()
{
    int a1[] = {10, 9, 7, 3, 1};
    int a2[] = {11, 8, 6, 5, 4, 2, 0};
    int a3[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    std::list<int> c1(a1, a1+sizeof(a1)/sizeof(a1[0]));
    std::list<int> c2(a2, a2+sizeof(a2)/sizeof(a2[0]));
    c1.merge(c2, std::greater<int>());
    assert(c1 == std::list<int>(a3, a3+sizeof(a3)/sizeof(a3[0])));
}
