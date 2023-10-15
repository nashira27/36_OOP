#include "Bookshop.h"

BookShop::BookShop(int size){
    this-> size = size;
    this-> booksAdded = 0;
    this-> bookCollection = static_cast<Book*>(malloc(sizeof(Book)*size));
}
        
void BookShop::addBook(string title, string authorName){
    new(&bookCollection[booksAdded]) Book(title, authorName);
    booksAdded++;
}
void BookShop::addBook(string title, string authorName, string voiceActor){
    new(&bookCollection[booksAdded]) AudioBook(title, authorName, voiceActor);
    booksAdded++;
}

BookShop::~BookShop(){
    delete[] bookCollection;
}