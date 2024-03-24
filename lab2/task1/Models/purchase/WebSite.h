#ifndef WEBSITE_H
#define WEBSITE_H

#include "../interfaces/ISubscriptionFactory.h"
#include "../headers/User.h"
#include "../headers/SubscriptionManager.h"
#include "../../Utils/SubscriptionUtils.h"

class WebSite : public ISubscriptionFactory {
public:
    ISubscription* purchaseSubscription(const std::string& subscriptionType, User& user) override;
};

#endif // WEBSITE_H
