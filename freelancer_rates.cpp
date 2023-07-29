#include <cmath>

double daily_rate(double hourly_rate) {
    return 8.0 * hourly_rate;
}

double apply_discount(double before_discount, double discount) {
    return (100.0 - discount) / 100.0 * before_discount;
}

int monthly_rate(double hourly_rate, double discount) {
    return std::ceil(apply_discount(22.0 * daily_rate(hourly_rate), discount));
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    return std::floor(budget / static_cast<int>(apply_discount(daily_rate(hourly_rate), discount)));
}
