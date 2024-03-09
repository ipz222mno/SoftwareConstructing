#pragma once
#ifndef REPORTERMSG_H
#define REPORTERMSG_H

#include "../Models/Product.h"
#include "Enums.h"

#include <string>

class Reporter {
private:
    const Product& product;
    int amount;
    ReporterState reporterState;

public:
    Reporter(const Product& product, int amount, ReporterState state);

    std::string getMessage() const;
};

#endif // REPORTER_H
