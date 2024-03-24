#ifndef SUBSCRIPTION_FACTORY_H
#define SUBSCRIPTION_FACTORY_H

#include <string>
#include "ISubscription.h"
#include "../headers/User.h"

class ISubscriptionFactory {
public:
    virtual ISubscription* purchaseSubscription(const std::string& subscriptionType, User& user) = 0;
};

#endif // SUBSCRIPTION_FACTORY_H
