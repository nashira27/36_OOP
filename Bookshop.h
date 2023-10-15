#pragma once
#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"

class BookShop {
    public:
        Book* bookCollection;
        int booksAdded;
        int size=0;

        BookShop(int size);
        
        void addBook(string title, string authorName);
        void addBook(string title, string authorName, string voiceActor);

        ~BookShop();
};