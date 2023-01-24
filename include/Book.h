#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Product.h"

class Book : public Product {
public:
    Book(std::string name, double price, std::string author, std::string publisher);

    std::string getType() const override;

    std::string getAuthor() const;

    std::string getPublisher() const;

    void print() const override;


private:
    std::string author;
    std::string publisher;
};

#endif
