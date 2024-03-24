#ifndef PREMIUMSUBSCRIPTION_H
#define PREMIUMSUBSCRIPTION_H

#include "../interfaces/ISubscription.h"
#include <iostream>

class PremiumSubscription : public ISubscription {
private:
    double monthlyFee = 50;
    std::vector<std::string> channels;
    std::vector<std::string> features;

public:
    PremiumSubscription() : ISubscription("Premium") {}
    double getMonthlyFee() const override;
    void setMonthlyFee(double fee) override;

    int getMinimumPeriod() const override;

    std::vector<std::string> getChannels() const override;
    void addChannel(const std::string& channel) override;

    std::vector<std::string> getFeatures() const override;
    void addFeature(const std::string& feature) override;
};

#endif // PREMIUMSUBSCRIPTION_H