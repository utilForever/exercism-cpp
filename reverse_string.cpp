#include "reverse_string.h"

namespace reverse_string
{
std::string reverse_string(std::string str)
{
    for (std::size_t i = 0; i < str.size() / 2; ++i)
    {
        std::swap(str[i], str[str.size() - i - 1]);
    }

    return str;
}
}  // namespace reverse_string
