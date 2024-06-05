#include "print_array.h"
#include <iostream>

void PrintArray(int num, int *A)
{
    if (A == nullptr) {
        return;
    }
    for (int i = 0; i < num; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}