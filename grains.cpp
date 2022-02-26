#include "grains.h"

#include <cmath>

namespace grains {
unsigned long long square(int num)
{
    return 1ULL * std::pow(2, num - 1);
}

unsigned long long total()
{
    unsigned long long ret = 0ULL;

    for (int num = 1; num <= 64; ++num)
    {
        ret += square(num);
    }
    
    return ret;
}
}  // namespace grains
