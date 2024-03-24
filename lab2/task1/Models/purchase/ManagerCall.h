#ifndef MANAGERCALL_H
#define MANAGERCALL_H

#include "../interfaces/ISubscriptionFactory.h"
#include "../headers/User.h"
#include "../headers/SubscriptionManager.h"
#include "../../Utils/SubscriptionUtils.h"

class ManagerCall : public ISubscriptionFactory {
public:
    ISubscription* purchaseSubscription(const std::string& subscriptionType, User& user) override;
};

#endif // MANAGERCALL_H
