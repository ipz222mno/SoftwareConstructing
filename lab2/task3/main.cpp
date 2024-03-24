#include "Authenticator.h"
#include <iostream>

int main() {
    Authenticator* auth1 = Authenticator::getInstance();
    Authenticator* auth2 = Authenticator::getInstance();

    if (auth1 == auth2) {
        std::cout << "Both pointers point to the same instance of Authenticator." << std::endl;
    }
    else {
        std::cout << "Pointers point to different instances of Authenticator." << std::endl;
    }

    return 0;
}