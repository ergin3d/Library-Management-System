#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book {
private:
    string isbn;
    string title;
    string author;
    string genre;
    bool availability;

public:
    Book(const string& isbn, const string& title, const string& author, const string& genre, bool availability);

    string getISBN() const;
    string getTitle() const;
    string getAuthor() const;
    string getGenre() const;
    bool getAvailability() const;

    void setAvailability(bool newAvailability);
    void displayBook() const;
};

#endif
