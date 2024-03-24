#pragma once
#include "../interfaces/IDevice.h"
#include "../interfaces/IFactory.h"
#include "Smartphone.h"

class SmartphoneFactory : public IFactory {
public:
    IDevice* createDevice(const std::string& name, const std::string& brand) override {
        return new Smartphone(name, brand);
    }
};
