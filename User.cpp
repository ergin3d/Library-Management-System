#include "User.h"

User::User(const string& id, const string& name, const string& email, const string& phoneNumber)
	: id(id), name(name), email(email), phoneNumber(phoneNumber) {}

string User::getID() const {
	return id;
}

string User::getName() const {
	return name;
}

string User::getEmail() const {
	return email;
}

string User::getPhoneNumber() const {
	return phoneNumber;
}

const vector<Book>& User::getBorrowedBooks() const {
	return borrowedBooks;
}

void User::borrowBook(const Book& book) {
	borrowedBooks.push_back(book);
}

void User::returnBook(const Book& book) {
	for (size_t i = 0; i < borrowedBooks.size(); i++) {
		if (borrowedBooks[i].getISBN() == book.getISBN()) {
			borrowedBooks.erase(borrowedBooks.begin() + i);
			break;
		}
	}
}

void User::displayUser() const {
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Phone Number: " << phoneNumber << endl;
	cout << "Borrowed Books: " << endl;
	for (const Book& book : borrowedBooks) {
		book.displayBook();
	}
}
