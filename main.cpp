#include <iostream>
#include "test_swap.h"
#include "test_sort.h"
#include "test_iter_find.h"
#include "test_recurse_find.h"
#include "test_recurse_reverse.h"
#include "test_recurse_sum.h"
#include "test_dyn_fib.h"
#include "test_recurse_fib.h"

int main()
{
    TestSwapCase1();
    TestSortCase1();
    TestRecurseReverseCase1();
    TestRecurseSumCase2();
    TestIterFindCase1();
    TestIterFindCase2();
    TestRecurFindCase1();
    TestDynFibCase1();
    TestRecurFibCase1();
    TestRecurFibWithMemCase1();
    return 0;
}