#include "recurse_find.h"

std::pair<int, int> RecurFindTwoNumDivideConcur(int *A, int lo, int hi)
{
    if (hi - lo == 1) {
        int first = (A[lo] > A[hi] ? A[lo] : A[hi]);
        int second = A[lo];
        if (first == second) {
            second = A[hi];
        }
        return std::make_pair(first, second);
    }
    if (hi - lo == 2) {
        std::pair<int, int> L = RecurFindTwoNumDivideConcur(A, lo, lo + 1);
        if (L.first < A[hi]) {
            L.second = L.first;
            L.first = A[hi];
        } else if (L.second < A[hi]) {
            L.second = A[hi];
        }
        return L;
    }
    int mi = (lo + hi) >> 1;
    std::pair<int, int> L = RecurFindTwoNumDivideConcur(A, lo, mi);
    std::pair<int, int> R = RecurFindTwoNumDivideConcur(A, mi + 1, hi);
    std::pair<int, int> ret = {0, 0};
    if (L.first > R.first) {
        ret.first = L.first;
        if (L.second > R.first) {
            ret.second = L.second;
        } else {
            ret.second = R.first;
        }
    } else {
        ret.first = R.first;
        if (R.second > L.first) {
            ret.second = R.second;
        } else {
            ret.second = L.first;
        }
    }
    return ret;
}