#ifndef EDUCATIONALSUBSCRIPTION_H
#define EDUCATIONALSUBSCRIPTION_H

#include "../interfaces/ISubscription.h"
#include <iostream>

class EducationalSubscription : public ISubscription {
private:
    double monthlyFee = 25;
    std::vector<std::string> channels;
    std::vector<std::string> features;

public:
    EducationalSubscription() : ISubscription("Educational") {}
    double getMonthlyFee() const override;
    void setMonthlyFee(double fee) override;

    int getMinimumPeriod() const override;

    std::vector<std::string> getChannels() const override;
    void addChannel(const std::string& channel) override;

    std::vector<std::string> getFeatures() const override;
    void addFeature(const std::string& feature) override;
};

#endif // EDUCATIONALSUBSCRIPTION_H
