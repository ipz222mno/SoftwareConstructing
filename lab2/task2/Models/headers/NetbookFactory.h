#pragma once
#include "../interfaces/IDevice.h"
#include "../interfaces/IFactory.h"
#include "Netbook.h"

class NetbookFactory : public IFactory {
public:
    IDevice* createDevice(const std::string& name, const std::string& brand) override {
        return new Netbook(name, brand);
    }
};

