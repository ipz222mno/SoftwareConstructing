#include <iostream>
#include "Models/interfaces/IFactory.h"
#include "Models/headers/LaptopFactory.h"
#include "Models/headers/NetbookFactory.h"
#include "Models/headers/EBookFactory.h"
#include "Models/headers/SmartphoneFactory.h"

int main() {
    LaptopFactory laptopFactory;
    NetbookFactory netbookFactory;
    EBookFactory eBookFactory;
    SmartphoneFactory smartphoneFactory;

    IDevice* laptop = laptopFactory.createDevice("MacBook Pro", "Apple");
    IDevice* netbook = netbookFactory.createDevice("Aspire One", "Acer");
    IDevice* ebook = eBookFactory.createDevice("Kindle Paperwhite", "Amazon");
    IDevice* smartphone = smartphoneFactory.createDevice("iPhone 13", "Apple");

    std::cout << "Laptop: " << laptop->getName() << " by " << laptop->getBrand() << std::endl;
    std::cout << "Netbook: " << netbook->getName() << " by " << netbook->getBrand() << std::endl;
    std::cout << "EBook: " << ebook->getName() << " by " << ebook->getBrand() << std::endl;
    std::cout << "Smartphone: " << smartphone->getName() << " by " << smartphone->getBrand() << std::endl;

    delete laptop;
    delete netbook;
    delete ebook;
    delete smartphone;

    return 0;
}