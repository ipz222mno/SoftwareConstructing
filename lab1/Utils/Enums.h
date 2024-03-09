#pragma once
#ifndef ENUMS_H
#define ENUMS_H

#include <string>

enum class Category {
    Grocery,
    Electronics,
    Apparel,
    Literature,
    Health,
    Automotive,
    Tools
};

enum class Currency {
    USD,
    EUR,
    UAH
};

enum class ReporterState {
    Shipped,
    Added
};

std::string enumToString(Category category);
std::string enumToString(Currency currency);
std::string enumToString(ReporterState state);

#endif // ENUMS_H

