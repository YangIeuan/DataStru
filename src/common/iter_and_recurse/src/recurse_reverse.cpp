#include "recurse_reverse.h"

void RecurseReverse(int *A, int lo, int hi)
{
    if (hi <= lo) {
        return;
    }
    int tmp = A[lo];
    A[lo] = A[hi];
    A[hi] = tmp;
    RecurseReverse(A, lo + 1, hi - 1);
}