#pragma once

#include <string>
#include "../Models/interfaces/ISubscription.h"

ISubscription* createSubscription(const std::string& subscriptionType);