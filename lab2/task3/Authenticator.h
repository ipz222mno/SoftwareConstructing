#pragma once

class Authenticator {
private:
    static Authenticator* instance;
    Authenticator() {}

public:
    static Authenticator* getInstance();
    void authenticate();
};
