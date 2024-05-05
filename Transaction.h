#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "User.h"

using namespace std;

class Transaction {
protected:
    string transactionID;
    string date;
    Book& book;
    User& user;

public:
    Transaction(const string& transactionID, const string& date, Book& book, User& user);
    virtual ~Transaction();

    virtual void issueBook() = 0;
    virtual void returnBook() = 0;

    Book& getBook() const;
    User& getUser() const;

    void displayTransaction() const;
};

class IssueTransaction : public Transaction {
public:
    IssueTransaction(const std::string& transactionID, const std::string& date, Book& book, User& user);

    void issueBook() override;
    void returnBook() override;
};

class ReturnTransaction : public Transaction {
public:
    ReturnTransaction(const std::string& transactionID, const std::string& date, Book& book, User& user);

    void issueBook() override;
    void returnBook() override;
};

#endif
