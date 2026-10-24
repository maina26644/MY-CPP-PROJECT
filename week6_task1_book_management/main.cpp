#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        cin >>  title;
        cout << "Enter author: ";
        cin>> author;
        cout << "Enter copies available: ";
        cin >> copiesAvailable;
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "No copies are currently available.\n";
        }
    }

    void displayDetails() {
        cout << "\n========== BOOK DETAILS ==========\n";
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Copies Available: " << copiesAvailable << "\n";
    }
};

int main() {
    Book book;
    book.inputDetails();
    book.borrowBook();
    book.displayDetails();
    return 0;
}
