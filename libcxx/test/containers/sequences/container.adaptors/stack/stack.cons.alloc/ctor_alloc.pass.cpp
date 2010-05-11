//===----------------------------------------------------------------------===//
//
// ΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚThe LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <stack>

// template <class Alloc>
//   explicit stack(const Alloc& a);

#include <stack>
#include <cassert>

#include "../../../../test_allocator.h"

struct test
    : private std::stack<int, std::deque<int, test_allocator<int> > >
{
    typedef std::stack<int, std::deque<int, test_allocator<int> > > base;

    explicit test(const test_allocator<int>& a) : base(a) {}
    test(const container_type& c, const test_allocator<int>& a) : base(c, a) {}
#ifdef _LIBCPP_MOVE
    test(container_type&& c, const test_allocator<int>& a) : base(std::move(c), a) {}
    test(test&& q, const test_allocator<int>& a) : base(std::move(q), a) {}
#endif
    test_allocator<int> get_allocator() {return c.get_allocator();}
};

int main()
{
    test q(test_allocator<int>(3));
    assert(q.get_allocator() == test_allocator<int>(3));
}
