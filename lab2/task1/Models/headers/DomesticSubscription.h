#ifndef DOMESTICSUBSCRIPTION_H
#define DOMESTICSUBSCRIPTION_H

#include "../interfaces/ISubscription.h"
#include <iostream>

class DomesticSubscription : public ISubscription {
private:
    double monthlyFee = 10.5;
    std::vector<std::string> channels;
    std::vector<std::string> features;

public:
    DomesticSubscription() : ISubscription("Domestic") {}
    double getMonthlyFee() const override;
    void setMonthlyFee(double fee) override;

    int getMinimumPeriod() const override;

    std::vector<std::string> getChannels() const override;
    void addChannel(const std::string& channel) override;

    std::vector<std::string> getFeatures() const override;
    void addFeature(const std::string& feature) override;
};

#endif // DOMESTICSUBSCRIPTION_H
