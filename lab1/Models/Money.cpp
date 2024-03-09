#include "Money.h"
#include "../Utils/Enums.h"
#include <cmath>

Money::Money(int whole, int fractional, Currency currency)
    : whole(std::floor(whole)), fractional(fractional), currency(currency) {}

std::string Money::moneyOutput() const {
    return enumToString(currency) + " " + std::to_string(whole + fractional);
}

void Money::addAmount(int setWhole, int setFractional) {
    whole += static_cast<int>(std::floor(setWhole));
    fractional += setFractional;
}