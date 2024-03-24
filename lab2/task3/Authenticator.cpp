#include "Authenticator.h"
#include <iostream>

Authenticator* Authenticator::instance = nullptr;

Authenticator* Authenticator::getInstance() {
    if (instance == nullptr) {
        instance = new Authenticator();
    }
    return instance;
}

void Authenticator::authenticate() {
    std::cout << "Meow";
}
