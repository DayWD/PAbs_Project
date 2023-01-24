#include <iostream>
#include "Store.h"
#include "Book.h"
#include "Clothes.h"
#include "Electronics.h"

int main() {
    Store store;

    Book book1("Harry Potter and the Philosopher's Stone", 39.99, "J.K. Rowling", "Bloomsbury");
    Book book2("The Lord of the Rings: Trilogy", 189.99, "Tolkien John Ronald Reuel", "Harper Collins");
    Clothes clothes1("Jeans", 139.99, "M", "Blue","Wrangler");
    Clothes clothes2("Dress", 159.99, "L", "Red","Nike");
    Electronics electronics1("Iphone",4899.99,"Midnight","Apple");

    store.addProduct(&book1);
    store.addProduct(&book2);
    store.addProduct(&clothes1);
    store.addProduct(&clothes2);
    store.addProduct(&electronics1);

    store.printProducts();
    store.removeProduct(&clothes2);
    std::cout<<"LISTA BEZ RED DRESS"<<std::endl<<std::endl;
    store.printProducts();

    std::cout<<"LISTA KSIĄŻEK"<<std::endl<<std::endl;
    auto books = store.getProductsByType("Book");
    Store::printProductsFromVector(books);

    return 0;
}
