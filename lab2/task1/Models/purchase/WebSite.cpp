#include "WebSite.h"
#include "../headers/DomesticSubscription.h"
#include "../headers/EducationalSubscription.h"
#include "../headers/PremiumSubscription.h"
#include "../headers/User.h"
#include "../headers/SubscriptionManager.h"
#include "../../Utils/SubscriptionUtils.h"


ISubscription* WebSite::purchaseSubscription(const std::string& subscriptionType, User& user) {
    ISubscription* subscription = createSubscription(subscriptionType);
    if (subscription) {
        double discountPercentage = user.getDiscountPercentage();
        SubscriptionManager::applyDiscount(subscription, discountPercentage);

        if (user.hasBonus("FreeChannel")) {
            SubscriptionManager::addChannel(subscription, "Bonus Channel");
        }

        double monthlyFee = subscription->getMonthlyFee();
        subscription->setMonthlyFee(monthlyFee);
    }

    user.setSubscription(subscription);
    return subscription;
}

