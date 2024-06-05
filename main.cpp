#include <iostream>
#include "test_swap.h"
#include "test_sort.h"
#include "test_iter_find.h"
#include "test_recurse_reverse.h"
#include "test_recurse_sum.h"

int main()
{
    TestSwapCase1();
    TestSortCase1();
    TestRecurseReverseCase1();
    TestRecurseSumCase2();
    TestIterFindCase1();
    TestIterFindCase2();
    return 0;
}