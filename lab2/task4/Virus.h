#pragma once
#include <iostream>
#include <vector>

class Virus {
private:
    double weight;
    int age;
    std::string name;
    std::string species;
    std::vector<Virus*> children;

public:
    Virus(double weight, int age, const std::string& name, const std::string& species);
    Virus(const Virus& other);
    ~Virus();
    void addChild(Virus* child);
    void printInfo() const;
    Virus* clone() const;
};

