#include "recurse_sum.h"

// 减而治之
int RecurSum(int A[], int n)
{
    return (n < 1) ? 0 : RecurSum(A, n-1) + A[n-1];
}

// 分而治之
int RecurSumDivideConcur(int A[], int lo, int hi)
{
    if (lo == hi) return A[lo];
    int mi = (lo + hi) >> 1;
    return RecurSumDivideConcur(A, lo, mi) + RecurSumDivideConcur(A, mi + 1, hi);
}