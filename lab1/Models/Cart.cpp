#include "Cart.h"
#include <iostream>

Cart::Cart() {}

Cart::Cart(const std::vector<Product>& initialProducts) : products(initialProducts) {}

void Cart::addProduct(const Product& product) {
    products.push_back(product);
}
void Cart::removeProduct(const Product& product) {
    auto it = std::find(products.begin(), products.end(), product);
    if (it != products.end()) {
        products.erase(it);
    }
}
void Cart::clearCart() {
    products.clear();
}

std::vector<Product> Cart::getProducts() const {
    return products;
}
void Cart::printCart() const {
    std::cout << "Products in the cart:" << std::endl;
    for (const auto& product : products) {
        std::cout << product.toString() << std::endl;
    }
}