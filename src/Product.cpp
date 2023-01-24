#include "Product.h"
#include "iostream"

Product::Product(std::string name, double price) : name(name), price(price) {}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

void Product::print() const {
    std::cout << "Product name: " << getName() << std::endl;
    std::cout << "Product type: " << getType() << std::endl;
    std::cout << "Product price: " << getPrice() << std::endl;
}
