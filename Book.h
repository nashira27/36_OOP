#pragma once
#include "libraries.h"

class Book {
    private:
        string title;
        string authorName;
    public:
        Book();
        Book(string title, string authorName);
        
        string getTitle();
        string getAuthorName();

        void setTitle(string title);
        void setAuthorName(string authorName);

        virtual void printDescription();
};