#include "Electronics.h"
#include "iostream"

Electronics::Electronics(std::string name, double price, std::string color, std::string brand)
        : Product(name, price), color(color), brand(brand) {}


std::string Electronics::getType() const {
    return "Electronics";
}

std::string Electronics::getColor() const {
    return color;
}

std::string Electronics::getBrand() const { return brand; }

void Electronics::print() const {
    Product::print();
    std::cout << "Color: " << getColor() << std::endl;
    std::cout << "Brand: " << getBrand() << std::endl;
}
