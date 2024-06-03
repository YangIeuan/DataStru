#include "swap.h"

template<typename T>
void Swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

// 注意，这里是为了实例化模版而写
template void Swap(int &a, int &b);