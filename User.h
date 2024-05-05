#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Book.h"

using namespace std;

class User {
private:
	string id;
	string name;
	string email;
	string phoneNumber;
	vector<Book> borrowedBooks;

public:
	User(const  string& id, const  string& name, const  string& email, const  string& phoneNumber);

	string getID() const;
	string getName() const;
	string getEmail() const;
	string getPhoneNumber() const;
	const  vector<Book>& getBorrowedBooks() const;

	void borrowBook(const Book& book);
	void returnBook(const Book& book);
	void displayUser() const;
};

#endif
