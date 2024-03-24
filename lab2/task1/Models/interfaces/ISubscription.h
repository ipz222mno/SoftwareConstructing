#pragma once
#ifndef ISUBSCRIPTION_H
#define ISUBSCRIPTION_H

#include <string>
#include <vector>
#include <iostream>

class ISubscription {
protected:
    std::string name;
public:
    virtual ~ISubscription() {}
    ISubscription(const std::string& name) : name(name) {}
    virtual double getMonthlyFee() const = 0;
    virtual void setMonthlyFee(double fee) = 0;

    virtual int getMinimumPeriod() const = 0;

    virtual std::vector<std::string> getChannels() const = 0;
    virtual void addChannel(const std::string& channel) = 0;

    virtual std::vector<std::string> getFeatures() const = 0;
    virtual void addFeature(const std::string& feature) = 0;

    std::string getName() const {
        return name;
    } // idk but i hope this way is acceptable in c++ ¯\_(ツ)_/¯ (tbh i hate code duplicating)
};

#endif // ISUBSCRIPTION_H
