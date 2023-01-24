#include "Store.h"
#include "iostream"

Store::Store() = default;

void Store::addProduct(Product *product) {
    products.push_back(product);
}

void Store::removeProduct(Product *product) {
    auto it = std::find(products.begin(), products.end(), product);
    if (it != products.end()) {
        products.erase(it);
    }
}

std::vector<Product *> Store::getProducts() const {
    return products;
}

std::vector<Product *> Store::getProductsByType(std::string type) const {
    std::vector<Product *> productsByType;
    for (auto product: products) {
        if (product->getType() == type) {
            productsByType.push_back(product);
        }
    }
    return productsByType;
}

void Store::printProducts() const {
    for (auto product: products) {
        product->print();
        std::cout << std::endl;
    }

}

void Store::printProductsFromVector(const std::vector<Product *> &products) {
    for (auto product: products) {
        product->print();
        std::cout << std::endl;
    }

}
