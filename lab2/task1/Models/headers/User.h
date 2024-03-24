#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "../interfaces/ISubscription.h"

class User {
private:
    std::string name;
    ISubscription* subscription;
    double discountPercentage;
    std::vector<std::string> bonuses;

public:
    User(const std::string& name, ISubscription* subscription = nullptr);

    std::string getName() const;
    double getDiscountPercentage() const;
    void setDiscountPercentage(double percentage);
    void addBonus(const std::string& bonus);
    bool hasBonus(const std::string& bonus) const;
    ISubscription* getSubscription() const;
    void setSubscription(ISubscription* newSubscription);
};

#endif // USER_H