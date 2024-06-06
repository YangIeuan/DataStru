#include "test_recurse_fib.h"
#include "recurse_fib.h"
#include <iostream>

void TestRecurFibCase1()
{
    std::cout << RecurFib(45) << std::endl;
}

void TestRecurFibWithMemCase1()
{
    std::cout << RecurFibWithMem(100) << std::endl;
}