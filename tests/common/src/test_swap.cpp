#include "test_swap.h"
#include "swap.h"

#include <iostream>

void TestSwapCase1()
{
    int a = 1;
    int b = 2;
    std::cout << "Before Swap" << std::endl;
    std::cout << "a = " << a << ", ";
    std::cout << "b = " << b << std::endl;
    Swap<int>(a, b);
    std::cout << "After Swap" << std::endl;
    std::cout << "a = " << a << ", ";
    std::cout << "b = " << b << std::endl;
}