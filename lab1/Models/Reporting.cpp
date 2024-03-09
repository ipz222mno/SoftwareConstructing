#include "Reporting.h"

#include <iostream>

Reporting::Reporting() {
    productsInfo.clear();
}

void Reporting::productLoadingMessage(const Product& product, int amount) {
    productsInfo.push_back(Reporter(product, amount, ReporterState::Added).getMessage());
}

void Reporting::productShipmentMessage(const Product& product, int amount) {
    productsInfo.push_back(Reporter(product, amount, ReporterState::Shipped).getMessage());
}

void Reporting::getReportsInfo() const {
    for (const auto& elem : productsInfo) {
        std::cout << elem << std::endl;
    }
}