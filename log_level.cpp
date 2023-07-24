#include <string>

namespace log_line {
    std::string message(std::string log) {
        int pos = log.find("]");
        
        return log.substr(pos + 3);
    }

    std::string log_level(std::string log) {
        int pos = log.find("]");
        
        return log.substr(1, pos - 1);
    }

    std::string reformat(std::string log) {
        std::string message = log_line::message(log);
        std::string log_level = log_line::log_level(log);

        return message + " (" + log_level + ")";
    }
}
