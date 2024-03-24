#pragma once

#include "IDevice.h"

class IFactory {
public:
    virtual IDevice* createDevice(const std::string& name, const std::string& brand) = 0;

    virtual ~IFactory() = default;
};
