#include "Reporter.h"

#include <sstream>

Reporter::Reporter(const Product& product, int amount, ReporterState state)
    : product(product), amount(amount), reporterState(state) {}

std::string Reporter::getMessage() const {
    std::stringstream ss;
    ss << "The product \"" << product.getName() << "\" ";
    switch (reporterState) {
    case ReporterState::Shipped:
        ss << "shipped from";
        break;
    case ReporterState::Added:
        ss << "added to";
        break;
    }
    ss << " the warehouse in the amount of " << amount << " units";
    return ss.str();
}
