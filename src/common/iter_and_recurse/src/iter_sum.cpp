#include "iter_sum.h"

int IterSum(int A[], int n)
{
    int sum = 0; // O(1)
    for (int i = 0; i < n; ++i) { // O(n)
        sum += A[i]; // O(1)
    }
    return sum; // O(1)
}