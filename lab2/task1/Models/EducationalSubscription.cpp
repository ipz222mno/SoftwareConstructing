#include "headers/EducationalSubscription.h"
#include <iostream>

double EducationalSubscription::getMonthlyFee() const {
    return monthlyFee;
}

void EducationalSubscription::setMonthlyFee(double fee) {
    monthlyFee = fee;
}

int EducationalSubscription::getMinimumPeriod() const {
    return 1;
}

std::vector<std::string> EducationalSubscription::getChannels() const {
    return channels;
}

void EducationalSubscription::addChannel(const std::string& channel) {
    channels.push_back(channel);
}

std::vector<std::string> EducationalSubscription::getFeatures() const {
    return features;
}

void EducationalSubscription::addFeature(const std::string& feature) {
    features.push_back(feature);
}