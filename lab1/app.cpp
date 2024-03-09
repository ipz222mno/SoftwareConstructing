#include "Models/Money.h"
#include "Models/Product.h"
#include "Models/Warehouse.h"
#include "Models/Cart.h"
#include "Utils/Enums.h"

int main() {

    std::cout << "Testing Money class" << std::endl;

    Money money(12, 0.5, Currency::USD);
    money.addAmount(120, 0);
    std::cout << money.moneyOutput() << std::endl;


    std::cout << "Testing Product class" << std::endl;

    Product product("Milk", Category::Grocery, Money(30, 0.3, Currency::UAH));
    std::cout << product.getName() << std::endl;


    std::cout << "Testing Warehouse class" << std::endl;

    Warehouse warehouse;
    warehouse.addProduct(product);
    warehouse.getWarehouseInfo();

    warehouse.addProduct(product, 3);
    warehouse.getWarehouseInfo();
    warehouse.getReports();


    std::cout << "Testing Cart class" << std::endl;
    Cart cart;
    cart.addProduct(product);
    cart.printCart();

    return 0;
}
