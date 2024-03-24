#include "headers/PremiumSubscription.h"
#include <iostream>

double PremiumSubscription::getMonthlyFee() const {
    return monthlyFee;
}

void PremiumSubscription::setMonthlyFee(double fee) {
    monthlyFee = fee;
}

int PremiumSubscription::getMinimumPeriod() const {
    return 1;
}

std::vector<std::string> PremiumSubscription::getChannels() const {
    return channels;
}

void PremiumSubscription::addChannel(const std::string& channel) {
    channels.push_back(channel);
}

std::vector<std::string> PremiumSubscription::getFeatures() const {
    return features;
}

void PremiumSubscription::addFeature(const std::string& feature) {
    features.push_back(feature);
}