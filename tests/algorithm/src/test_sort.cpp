#include "test_sort.h"

#include "sort_value.h"

#include <iostream>

void TestSortCase1()
{
    int A[] = { 3, 1, 5, 7, 2, 1};
    int n = sizeof(A) / sizeof(int);

    BubbleSort(A, n);

    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}