#include "Clothes.h"
#include "iostream"

Clothes::Clothes(std::string name, double price, std::string size, std::string color, std::string brand)
        : Product(name, price), size(size), color(color), brand(brand) {}

std::string Clothes::getType() const {
    return "Clothes";
}

std::string Clothes::getSize() const {
    return size;
}

std::string Clothes::getColor() const {
    return color;
}

std::string Clothes::getBrand() const {
    return brand;
}

void Clothes::print() const {
    Product::print();
    std::cout << "Size: " << getSize() << std::endl;
    std::cout << "Color: " << getColor() << std::endl;
    std::cout << "Brand: " << getBrand() << std::endl;
}
