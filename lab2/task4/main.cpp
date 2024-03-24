#include "Virus.h"

int main() {
    Virus* originalVirus = new Virus(0.5, 1, "Original Virus", "Catvirus");

    Virus* child1 = new Virus(0.3, 0, "Child Virus 1", "Catvirus");
    Virus* child2 = new Virus(0.4, 0, "Child Virus 2", "Catvirus");

    originalVirus->addChild(child1);
    originalVirus->addChild(child2);

    Virus* clonedVirus = originalVirus->clone();

    std::cout << "Original Virus:" << std::endl;
    originalVirus->printInfo();

    std::cout << "\nCloned Virus:" << std::endl;
    clonedVirus->printInfo();

    delete originalVirus;
    delete clonedVirus;

    return 0;
}