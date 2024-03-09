#pragma once
#include <vector>
#include "Product.h"

class Cart {
private:
    std::vector<Product> products;

public:
    Cart();
    Cart(const std::vector<Product>& initialProducts);

    void addProduct(const Product& product);
    void removeProduct(const Product& product);
    void clearCart();
    std::vector<Product> getProducts() const;

    void printCart() const;

};