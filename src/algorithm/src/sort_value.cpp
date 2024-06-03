#include "sort_value.h"

#include "swap.h"

void BubbleSort(int A[], int n)
{
    // 当某一轮，没有逆序对，那么sorted就不会被置为false，
    // 从而sorted = !sorted的结果为false，因此停止循环
    for (bool sorted = false; sorted = !sorted; n--) {
        for (int i = 1; i < n; i++) {
            if (A[i-1] > A[i]) {
                Swap(A[i-1], A[i]);
                sorted = false;
            }
        }
    }
}