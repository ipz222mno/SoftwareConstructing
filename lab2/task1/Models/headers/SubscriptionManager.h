#pragma once
#ifndef SUBSCRIPTIONMANAGER_H
#define SUBSCRIPTIONMANAGER_H

#include <string>
#include <vector>
#include "../interfaces/ISubscription.h"
#include <iostream>

class SubscriptionManager {
public:
    static void applyDiscount(ISubscription* subscription, double discountPercentage);
    static void addChannel(ISubscription* subscription, const std::string& channel);
    static void addFeature(ISubscription* subscription, const std::string& feature);
};

#endif // SUBSCRIPTIONMANAGER_H

