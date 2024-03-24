#pragma once

#include <string>

class IDevice {
public:
    virtual const std::string& getName() const = 0;
    virtual const std::string& getBrand() const = 0;

    virtual ~IDevice() = default;
};
