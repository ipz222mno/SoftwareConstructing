#include "headers/DomesticSubscription.h"
#include <iostream>

double DomesticSubscription::getMonthlyFee() const {
    return monthlyFee;
}

void DomesticSubscription::setMonthlyFee(double fee) {
    monthlyFee = fee;
}

int DomesticSubscription::getMinimumPeriod() const {
    return 1;
}

std::vector<std::string> DomesticSubscription::getChannels() const {
    return channels;
}

void DomesticSubscription::addChannel(const std::string& channel) {
    channels.push_back(channel);
}

std::vector<std::string> DomesticSubscription::getFeatures() const {
    return features;
}

void DomesticSubscription::addFeature(const std::string& feature) {
    features.push_back(feature);
}