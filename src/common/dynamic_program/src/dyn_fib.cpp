#include "dyn_fib.h"

int DynFib(int n)
{
    int f1 = 0;
    int f2 = 1;
    while (0 < n--) {
        f2 = f1 + f2;
        f1 = f2 - f1;
    }
    return f2;
}