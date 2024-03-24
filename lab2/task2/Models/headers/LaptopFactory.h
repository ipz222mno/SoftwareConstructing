#pragma once
#include "../interfaces/IDevice.h"
#include "../interfaces/IFactory.h"
#include "Laptop.h"

class LaptopFactory : public IFactory {
public:
    IDevice* createDevice(const std::string& name, const std::string& brand) override {
        return new Laptop(name, brand);
    }
};


