#pragma once
#ifndef PRODUCT_H
#define PRODUCT_H

#include "Money.h"
#include "../Utils/Enums.h"

#include <string>

class Product {
private:
    std::string name;
    Category category;
    Money price;

public:
    Product(const std::string& name, Category category, const Money& price);

    std::string getName() const;

    std::string toString() const;

    bool operator<(const Product& other) const;
    bool operator==(const Product& other) const;

};

#endif // PRODUCT_H
