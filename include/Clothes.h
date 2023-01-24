#ifndef CLOTHES_H
#define CLOTHES_H

#include <string>
#include "Product.h"

class Clothes : public Product {
public:
    Clothes(std::string name, double price, std::string size, std::string color, std::string brand);

    std::string getType() const override;

    std::string getSize() const;

    std::string getColor() const;

    std::string getBrand() const;

    void print() const override;

private:
    std::string size;
    std::string color;
    std::string brand;
};

#endif
