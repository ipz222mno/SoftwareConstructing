#pragma once
#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "Product.h"
#include "Reporting.h"

#include <map>
#include <iostream>

class Warehouse {
private:
    std::map<Product, int> localProducts;
    std::time_t lastAdditionDate;
    Reporting reporter;

public:
    Warehouse();

    void addProduct(const Product& product, int amount = 1);

    void getWarehouseInfo() const;

    void getReports() const;

private:
    void updateShippingDate();
};

#endif // WAREHOUSE_H