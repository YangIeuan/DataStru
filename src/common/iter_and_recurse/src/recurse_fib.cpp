#include "recurse_fib.h"
#include <map>
#include <iostream>

int RecurFib(int n)
{
    return (n > 2) ? RecurFib(n - 1) + RecurFib(n - 2) : n;
}


int Recur(int n, std::map<int, int> &fibMap)
{
    auto iter = fibMap.find(n);
    if (iter != fibMap.end()) {
        return iter->second;
    }
    int ret = (n > 2) ? Recur(n - 1, fibMap) + Recur(n - 2, fibMap) : n;
    fibMap.emplace(n, ret);
    return ret;
}

int RecurFibWithMem(int n)
{
    std::map<int, int> fibMap;
    return Recur(n, fibMap);
}