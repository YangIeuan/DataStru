#include "test_recurse_find.h"

#include "recurse_find.h"
#include <iostream>

void TestRecurFindCase1()
{
    int A[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int lo = 0;
    int hi = 8;
    std::pair<int, int> ret = RecurFindTwoNumDivideConcur(A, lo, hi);
    std::cout << ret.first << " " << ret.second << std::endl;
}