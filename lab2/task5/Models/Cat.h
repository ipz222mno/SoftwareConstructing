#pragma once
#include <iostream>
#include <vector>

class Cat {
private:
    std::string name;
    std::string fur_color;
    std::string eye_color;
    std::string favorite_toy;
    std::vector<std::string> abilities;

public:
    Cat(const std::string& n, const std::string& fur, const std::string& eye, const std::string& toy,
        const std::vector<std::string>& abil) : name(n), fur_color(fur), eye_color(eye), favorite_toy(toy), abilities(abil) {}

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Fur Color: " << fur_color << std::endl;
        std::cout << "Eye Color: " << eye_color << std::endl;
        std::cout << "Favorite Toy: " << favorite_toy << std::endl;
        std::cout << "Abilities: ";
        for (const auto& ability : abilities) {
            std::cout << ability << ", ";
        }
        std::cout << std::endl;
    }
};
