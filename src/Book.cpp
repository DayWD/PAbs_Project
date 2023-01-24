#include "Book.h"
#include "iostream"

Book::Book(std::string name, double price, std::string author, std::string publisher)
        : Product(name, price), author(author), publisher(publisher) {}

std::string Book::getType() const {
    return "Book";
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getPublisher() const {
    return publisher;
}

void Book::print() const {
    Product::print();
    std::cout << "Author: " << getAuthor() << std::endl;
    std::cout << "Publisher: " << getPublisher() << std::endl;
}

