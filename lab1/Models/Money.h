#pragma once
#ifndef MONEY_H
#define MONEY_H

#include <string>
#include "../Utils/Enums.h"

class Money {
private:
    int whole;
    int fractional;
    Currency currency;

public:
    Money(int whole, int fractional, Currency currency);

    std::string moneyOutput() const;

    void addAmount(int setWhole, int setFractional);

};

#endif // MONEY_H

