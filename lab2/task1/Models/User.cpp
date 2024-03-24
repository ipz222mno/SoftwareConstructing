#include "headers/User.h"
#include "interfaces/ISubscription.h"

#include <iostream>



User::User(const std::string& name, ISubscription* subscription): name(name), subscription(subscription), discountPercentage(0.0)
{
}

std::string User::getName() const {
    return name;
}

double User::getDiscountPercentage() const {
    return discountPercentage;
}

void User::setDiscountPercentage(double percentage) {
    discountPercentage = percentage;
}

void User::addBonus(const std::string& bonus) {
    bonuses.push_back(bonus);
}

bool User::hasBonus(const std::string& bonus) const {
    for (const std::string& b : bonuses) {
        if (b == bonus) {
            return true;
        }
    }
    return false;
}

ISubscription* User::getSubscription() const {
    return subscription;
}

void User::setSubscription(ISubscription* newSubscription) {
    subscription = newSubscription;
}