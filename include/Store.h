#ifndef STORE_H
#define STORE_H

#include <vector>
#include "Product.h"

class Store {
public:
    Store();

    void addProduct(Product *product);

    void removeProduct(Product *product);

    std::vector<Product *> getProducts() const;

    std::vector<Product *> getProductsByType(std::string type) const;

    void printProducts() const;

    static void printProductsFromVector(const std::vector<Product *> &products);

private:
    std::vector<Product *> products;
};

#endif
