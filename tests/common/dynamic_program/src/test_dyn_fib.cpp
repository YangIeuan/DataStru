#include "test_dyn_fib.h"
#include "dyn_fib.h"
#include <iostream>

void TestDynFibCase1()
{
    int n = 100;
    std::cout << DynFib(n) << std::endl;
}