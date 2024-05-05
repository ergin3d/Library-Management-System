#ifndef LIBRARY_H
#define LIBRARY_H

#include "Transaction.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;
    std::vector<Transaction*> transactions;

public:
    Library();
    ~Library();

    void addBook(const Book& book);
    void addUser(const User& user);
    void issueBook(const std::string& transactionID, const std::string& date, const std::string& bookISBN, const std::string& userID);
    void returnBook(const std::string& transactionID, const std::string& date, const std::string& bookISBN, const std::string& userID);
    void displayBooks() const;
    void displayUsers() const;
    void displayTransactions() const;
};

#endif

