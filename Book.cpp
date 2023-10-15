#include "Book.h"

Book::Book(){};
Book::Book(string title, string authorName)
:title(title), authorName(authorName){};

string Book::getTitle(){
    return title;
}
string Book::getAuthorName(){
    return authorName;
}

void Book::setTitle(string title){
    this->title = title;
}
void Book::setAuthorName(string authorName){
    this->authorName=authorName;
}

void Book::printDescription() {
    cout << "Book Title: " << getTitle() << endl;
    cout << "Author: " << getAuthorName() << endl;
}