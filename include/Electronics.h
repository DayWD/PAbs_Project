#ifndef ELETRONICS_H
#define ELETRONICS_H

#include <string>
#include "Product.h"

class Electronics : public Product {
public:
    Electronics(std::string name, double price, std::string color, std::string brand);

    std::string getType() const override;

    std::string getColor() const;

    std::string getBrand() const;

    void print() const override;

private:
    std::string color;
    std::string brand;
};

#endif
