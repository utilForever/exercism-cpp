#include "raindrops.h"

namespace raindrops {
    std::string convert(int number) {
        std::string ret = "";

        if (number % 3 == 0) {
            ret += "Pling";
        }

        if (number % 5 == 0) {
            ret += "Plang";
        }

        if (number % 7 == 0) {
            ret += "Plong";
        }

        return ret.empty() ? std::to_string(number) : ret;
    }
}
