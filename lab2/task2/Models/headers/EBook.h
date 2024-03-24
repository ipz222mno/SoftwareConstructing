#pragma once
#include "../interfaces/IDevice.h"


class EBook : public IDevice {
private:
    std::string name;
    std::string brand;

public:
    EBook(const std::string& name, const std::string& brand) : name(name), brand(brand) {}

    const std::string& getName() const override {
        return name;
    }

    const std::string& getBrand() const override {
        return brand;
    }
};