#include "triangle.h"

#include <stdexcept>

namespace triangle {
flavor kind(double a, double b, double c)
{
    if (a <= 0.0 || b <= 0.0 || c <= 0.0)
    {
        throw std::domain_error("all sides have to be of length > 0");
    }

    if ((a >= b && a >= c && b + c < a) || (b >= a && b >= c && a + c < b) || (c >= a && c >= b && a + b < c))
    {
        throw std::domain_error("the sum of the lengths of any two sides must be greater than or equal to the length of the third side");
    }
    
    if (a == b && b == c)
    {
        return flavor::equilateral;
    }
    else if (a == b || b == c || a == c)
    {
        return flavor::isosceles;
    }
    else
    {
        return flavor::scalene;
    }
}
}  // namespace triangle
