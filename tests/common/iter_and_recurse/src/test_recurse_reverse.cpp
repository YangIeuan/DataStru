#include "test_recurse_reverse.h"

#include "recurse_reverse.h"

#include "print_array.h"

void TestRecurseReverseCase1()
{
    int A[] = { 1, 2, 3, 4, 5, 6 };
    PrintArray(6, A);
    int lo = 2;
    int hi = 5;
    RecurseReverse(A, lo, hi);
    PrintArray(6, A);
}