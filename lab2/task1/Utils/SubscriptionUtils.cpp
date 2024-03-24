#include "../Utils/SubscriptionUtils.h"
#include "../Models/headers/DomesticSubscription.h"
#include "../Models/headers/EducationalSubscription.h"
#include "../Models/headers/PremiumSubscription.h"
#include "../Models/headers/SubscriptionManager.h"

ISubscription* createSubscription(const std::string& subscriptionType) {
    ISubscription* subscription = nullptr;
    if (subscriptionType == "Domestic") {
        subscription = new DomesticSubscription();
    }
    else if (subscriptionType == "Educational") {
        subscription = new EducationalSubscription();
    }
    else if (subscriptionType == "Premium") {
        subscription = new PremiumSubscription();
    }
    return subscription;
}
