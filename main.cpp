#include "Bookshop.h"
#include "Book.h"
#include "AudioBook.h"

int main() {

    int size;
    cout << "How many books do you want to add? ";
    cin >> size;
    cin.ignore();
    BookShop books(size);

    for (int i=0; i<size; i++) {

        int option;
        cout << "Choose 1 for Book, 2 for audio book? ";
        cin >> option;
        cin.ignore();

        if (option==1) {
            string title, author;
            cout << "Title: " << endl;
            getline(cin, title);
            cout << "Author: " <<endl;
            getline(cin, author);

            books.addBook(title, author);
        }
        else if (option==2) {
            string title, author, voiceActor;
            cout << "Title: " << endl;
            getline(cin, title);
            cout << "Author: " <<endl;
            getline(cin, author);
            cout << "Voice actor: " <<endl;
            getline(cin, voiceActor);

            books.addBook(title, author, voiceActor);

        } else {
            cout << "Invalid input";
            return 1;
        }
    }
    
    Book* bookList= books.bookCollection;

    cout << "Books Collection"<<endl;
    for (int j=0;j<size;j++){
        Book book = bookList[j];
        cout<< "Book "<< j+1 << endl;
        book.printDescription();
        cout << endl;
    }

    books.~BookShop();
    return 0;
}