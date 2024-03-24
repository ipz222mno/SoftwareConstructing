#pragma once
#include "CatBuilder.h"

class EnemyCatBuilder : public CatBuilder {
public:
    EnemyCatBuilder& setEvilDeeds(const std::vector<std::string>& deeds) {
        abilities = deeds;
        return *this;
    }
};