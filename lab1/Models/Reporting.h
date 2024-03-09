#pragma once
#ifndef REPORTING_H
#define REPORTING_H

#include "Product.h"
#include "../Utils/Reporter.h"
#include "../Utils/Enums.h"

#include <vector>
#include <string>

class Reporting {
private:
    std::vector<std::string> productsInfo;

public:
    Reporting();

    void productLoadingMessage(const Product& product, int amount = 1);

    void productShipmentMessage(const Product& product, int amount = 1);

    void getReportsInfo() const;
};

#endif // REPORTING_H

