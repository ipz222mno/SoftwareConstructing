#include <iostream>
#include "Models/headers/User.h"
#include "Models/purchase/WebSite.h"
#include "Models/purchase/MobileApp.h"
#include "Models/purchase/ManagerCall.h"


using namespace std;

int main() {
	User user("Cat Meowenko");
	user.addBonus("Discount");
	user.addBonus("FreeChannel");
    WebSite website;
    

    ISubscription* websiteSubscription = website.purchaseSubscription("Premium", user);


    websiteSubscription->addChannel("Basic channel 1");
    websiteSubscription->addChannel("Basic channel 2");
    websiteSubscription->addChannel("Basic channel 3");
    websiteSubscription->addChannel("Basic channel 4");


    websiteSubscription->addFeature("Basic feature");

    if (websiteSubscription) {
        std::cout << "Subscription purchased via website:" << std::endl;
        std::cout << "Monthly fee: " << websiteSubscription->getMonthlyFee() << std::endl;
        std::vector<std::string> channels = websiteSubscription->getChannels();
        std::cout << "Channels:" << std::endl;
        for (const auto& channel : channels) {
            std::cout << channel << std::endl;
        }
        ISubscription* user_sub = user.getSubscription();
        std::cout << "User subscription purchased via website:" << std::endl;
        std::cout << user_sub->getName() << std::endl; // lol it works
        delete websiteSubscription;
    }
    else {
        std::cout << "Failed to purchase subscription via website." << std::endl;
    }
    
    MobileApp mobileApp;
    ISubscription* mobileAppSubscription = mobileApp.purchaseSubscription("Educational", user);

    mobileAppSubscription->addChannel("Basic channel 1");
    mobileAppSubscription->addChannel("Basic channel 2");
    mobileAppSubscription->addChannel("Basic channel 3");
    mobileAppSubscription->addChannel("Basic channel 4");
    mobileAppSubscription->addFeature("Basic feature");

    if (mobileAppSubscription) {
        cout << "Subscription purchased via mobile app:" << endl;
        cout << "Monthly fee: " << mobileAppSubscription->getMonthlyFee() << endl;
        vector<string> channels = mobileAppSubscription->getChannels();
        cout << "Channels:" << endl;
        for (const auto& channel : channels) {
            cout << channel << endl;
        }
        delete mobileAppSubscription;
    }
    else {
        cout << "Failed to purchase subscription via mobile app." << endl;
    }

    ManagerCall managerCall;
    ISubscription* managerCallSubscription = managerCall.purchaseSubscription("Domestic", user);

    managerCallSubscription->addChannel("Basic channel 5");
    managerCallSubscription->addFeature("Basic feature 2");

    if (managerCallSubscription) {
        cout << "Subscription purchased via manager call:" << endl;
        cout << "Monthly fee: " << managerCallSubscription->getMonthlyFee() << endl;
        vector<string> channels = managerCallSubscription->getChannels();
        cout << "Channels:" << endl;
        for (const auto& channel : channels) {
            cout << channel << endl;
        }
        delete managerCallSubscription;
    }
    else {
        cout << "Failed to purchase subscription via manager call." << endl;
    }

    return 0;
}