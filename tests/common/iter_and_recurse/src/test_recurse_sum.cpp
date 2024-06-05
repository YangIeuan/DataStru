#include "test_recurse_sum.h"

#include "recurse_sum.h"

#include "print_array.h"

#include <iostream>

void TestRecurseSumCase2()
{
    int A[] = { 1, 2, 3, 4, 5, 6 };
    int lo = 0;
    int hi = 5;
    int ret = RecurSumDivideConcur(A, lo, hi);
    std::cout << ret << std::endl;
}