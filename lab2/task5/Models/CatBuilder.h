#pragma once
#include <iostream>
#include <vector>
#include "Cat.h"

class CatBuilder {
protected:
    std::string name;
    std::string fur_color;
    std::string eye_color;
    std::string favorite_toy;
    std::vector<std::string> abilities;

public:
    CatBuilder() {}

    CatBuilder& setName(const std::string& n) {
        name = n;
        return *this;
    }

    CatBuilder& setFurColor(const std::string& color) {
        fur_color = color;
        return *this;
    }

    CatBuilder& setEyeColor(const std::string& color) {
        eye_color = color;
        return *this;
    }

    CatBuilder& setFavoriteToy(const std::string& toy) {
        favorite_toy = toy;
        return *this;
    }

    CatBuilder& addAbility(const std::string& ability) {
        abilities.push_back(ability);
        return *this;
    }
    CatBuilder& setEvilDeeds(const std::vector<std::string>& deeds) {
        return *this;
    }

    virtual ~CatBuilder() {}

    Cat build() const {
        return Cat(name, fur_color, eye_color, favorite_toy, abilities);
    }
};
