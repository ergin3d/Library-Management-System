#include "Book.h"

Book::Book(const string& isbn, const string& title, const string& author, const string& genre, bool availability)
    : isbn(isbn), title(title), author(author), genre(genre), availability(availability) {}

string Book::getISBN() const {
    return isbn;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getGenre() const {
    return genre;
}

bool Book::getAvailability() const {
    return availability;
}

void Book::setAvailability(bool newAvailability) {
    availability = newAvailability;
}

void Book::displayBook() const {
    cout << "ISBN: " << isbn << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Genre: " << genre << endl;
    cout << "Availability: " << (availability ? "Available" : "Not Available") << endl;
}
