#include "Product.h"

#include <sstream>

Product::Product(const std::string& name, Category category, const Money& price)
    : name(name), category(category), price(price) {}

std::string Product::getName() const {
    return name;
}

std::string Product::toString() const {
    std::stringstream ss;
    ss << name << ", belongs to the \"" << enumToString(category) << "\" category, costs " << price.moneyOutput();
    return ss.str();
}
bool Product::operator<(const Product& other) const {
    return name < other.name;
}
bool Product::operator==(const Product& other) const {
    return name == other.name && category == other.category;
}
