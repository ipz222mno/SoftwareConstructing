#include "Virus.h"

Virus::Virus(double weight, int age, const std::string& name, const std::string& species)
    : weight(weight), age(age), name(name), species(species) {}

Virus::Virus(const Virus& other)
    : weight(other.weight), age(other.age), name("Clone of " + other.name), species(other.species) {
    for (const auto& child : other.children) {
        children.push_back(child->clone());
    }
}

Virus::~Virus() {
    for (auto& child : children) {
        delete child;
    }
}

void Virus::addChild(Virus* child) {
    children.push_back(child);
}

void Virus::printInfo() const {
    std::cout << "Name: " << name << ", Species: " << species << ", Age: " << age << ", Weight: " << weight << std::endl;
    for (const auto& child : children) {
        child->printInfo();
    }
}

Virus* Virus::clone() const {
    return new Virus(*this);
}