//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <random>

// typedef discard_block_engine<ranlux24_base, 223, 23>                ranlux24;

#include <random>
#include <cassert>

int main()
{
    std::ranlux24 e;
    e.discard(9999);
    assert(e() == 9901578u);
}
