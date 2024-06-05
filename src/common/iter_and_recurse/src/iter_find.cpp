#include "iter_find.h"

#include "swap.h"

std::pair<int, int> IterFindTwoMax1(int *A, int lo, int hi)
{
    int first = A[0];
    int second = A[0];
    int first_ind = 0;
    for (int i = lo + 1; i < hi; i++) {
        if (A[i] > first) {
            first = A[i];
            first_ind = i;
        }
    }
    for (int i = lo + 1; i < first_ind; i++) {
        if (A[i] > second) {
            second = A[i];
        }
    }
    for (int i = first_ind + 1; i < hi; i++) {
        if (A[i] > second) {
            second = A[i];
        }
    }
    return std::make_pair(first, second);
}

std::pair<int, int> IterFindTwoMax2(int *A, int lo, int hi)
{
    int first = A[0];
    int second = A[0];
    int first_ind = 0;
    for (int i = lo + 1; i < hi; i++) {
        if (A[i] > second) {
            second = A[i];
            if (first < second) {
                Swap(first, second);
            }
        }
    }
    return std::make_pair(first, second);
}