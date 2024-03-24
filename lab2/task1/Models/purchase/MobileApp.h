#ifndef MOBILEAPP_H
#define MOBILEAPP_H

#include "../interfaces/ISubscriptionFactory.h"
#include "../headers/User.h"
#include "../headers/SubscriptionManager.h"
#include "../../Utils/SubscriptionUtils.h"

class MobileApp : public ISubscriptionFactory {
public:
    ISubscription* purchaseSubscription(const std::string& subscriptionType, User& user) override;
};

#endif // MOBILEAPP_H
