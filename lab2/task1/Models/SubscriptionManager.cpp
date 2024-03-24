#include "headers/SubscriptionManager.h"
#include <iostream>

void SubscriptionManager::applyDiscount(ISubscription* subscription, double discountPercentage) {
    if (subscription) {
        double currentFee = subscription->getMonthlyFee();
        double discountedFee = currentFee * (1 - discountPercentage);
        subscription->setMonthlyFee(discountedFee);
    }
}

void SubscriptionManager::addChannel(ISubscription* subscription, const std::string& channel) {
    if (subscription) {
        subscription->addChannel(channel);
    }
}

void SubscriptionManager::addFeature(ISubscription* subscription, const std::string& feature) {
    if (subscription) {
        subscription->addFeature(feature);
    }
}