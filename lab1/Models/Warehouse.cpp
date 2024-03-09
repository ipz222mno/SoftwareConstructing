#include "Warehouse.h"

Warehouse::Warehouse() : lastAdditionDate(std::time(nullptr)), reporter() {}

void Warehouse::addProduct(const Product& product, int amount) {
    auto it = localProducts.find(product);
    if (it != localProducts.end()) {
        it->second += amount;
    }
    else {
        localProducts[product] = amount;
    }
    reporter.productLoadingMessage(product, amount);
}

void Warehouse::getWarehouseInfo() const {
    for (const auto& pair : localProducts) {
        std::cout << pair.first.getName() << " - " << pair.second << " units\n";
    }
}

void Warehouse::updateShippingDate() {
    lastAdditionDate = std::time(nullptr);
}

void Warehouse::getReports() const {
    reporter.getReportsInfo();
}
