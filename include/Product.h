#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(std::string name, double price);

    virtual ~Product() = default;

    virtual std::string getType() const = 0;

    std::string getName() const;

    double getPrice() const;

    virtual void print() const;

protected:
    std::string name;
    double price;
};

#endif
