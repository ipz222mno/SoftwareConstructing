#pragma once
#include "../interfaces/IDevice.h"
#include "../interfaces/IFactory.h"
#include "EBook.h"

class EBookFactory : public IFactory {
public:
    IDevice* createDevice(const std::string& name, const std::string& brand) override {
        return new EBook(name, brand);
    }
};

