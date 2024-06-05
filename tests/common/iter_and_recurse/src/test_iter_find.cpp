#include "test_iter_find.h"

#include "iter_find.h"
#include <utility>

#include <iostream>

void TestIterFindCase1()
{
    int A[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int lo = 0;
    int hi = 8;
    std::pair<int, int> ret = IterFindTwoMax1(A, lo, hi);
    std::cout << ret.first << " " << ret.second << std::endl;
}

void TestIterFindCase2()
{
    int A[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int lo = 0;
    int hi = 8;
    std::pair<int, int> ret = IterFindTwoMax2(A, lo, hi);
    std::cout << ret.first << " " << ret.second << std::endl;
}