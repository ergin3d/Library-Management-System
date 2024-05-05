#include "Library.h"

Library::Library() {}

Library::~Library() {
	for (Transaction* transaction : transactions) {
		delete transaction;
	}
}

void Library::addBook(const Book& book) {
	books.push_back(book);
}

void Library::addUser(const User& user) {
	users.push_back(user);
}

void Library::issueBook(const std::string& transactionID, const std::string& date, const std::string& bookISBN, const std::string& userID) {
	Book* book = nullptr;
	User* user = nullptr;

	for (Book& b : books) {
		if (b.getISBN() == bookISBN) {
			book = &b;
			break;
		}
	}

	for (User& u : users) {
		if (u.getID() == userID) {
			user = &u;
			break;
		}
	}

	if (book == nullptr || user == nullptr) {
		std::cout << "Book or User not found." << std::endl;
		return;
	}

	Transaction* transaction = new IssueTransaction(transactionID, date, *book, *user);
	transaction->issueBook();
	transactions.push_back(transaction);
}

void Library::returnBook(const std::string& transactionID, const std::string& date, const std::string& bookISBN, const std::string& userID) {
	Book* book = nullptr;
	User* user = nullptr;

	for (Book& b : books) {
		if (b.getISBN() == bookISBN) {
			book = &b;
			break;
		}
	}

	for (User& u : users) {
		if (u.getID() == userID) {
			user = &u;
			break;
		}
	}

	if (book == nullptr || user == nullptr) {
		std::cout << "Book or User not found." << std::endl;
		return;
	}

	Transaction* transaction = new ReturnTransaction(transactionID, date, *book, *user);
	transaction->returnBook();
	transactions.push_back(transaction);
}

void Library::displayBooks() const {
	for (const Book& book : books) {
		book.displayBook();
	}
}

void Library::displayUsers() const {
	for (const User& user : users) {
		user.displayUser();
	}
}

void Library::displayTransactions() const {
	for (const Transaction* transaction : transactions) {
		transaction->displayTransaction();
	}
}
