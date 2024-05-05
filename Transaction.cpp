#include "Transaction.h"

Transaction::Transaction(const string& transactionID, const string& date, Book& book, User& user)
    : transactionID(transactionID), date(date), book(book), user(user) {}

Transaction::~Transaction() {}

Book& Transaction::getBook() const {
    return book;
}

User& Transaction::getUser() const {
    return user;
}

void Transaction::displayTransaction() const {
    cout << "Transaction ID: " << transactionID << endl;
    cout << "Date: " << date << endl;
    cout << "Book: " << endl;
    book.displayBook();
    cout << "User: " << endl;
    user.displayUser();
}

IssueTransaction::IssueTransaction(const std::string& transactionID, const std::string& date, Book& book, User& user)
    : Transaction(transactionID, date, book, user) {}

void IssueTransaction::issueBook() {
    if (book.getAvailability()) {
        book.setAvailability(false);
        user.borrowBook(book);
        std::cout << "Book issued successfully." << std::endl;
    }
    else {
        std::cout << "Book is not available for borrowing." << std::endl;
    }
}

void IssueTransaction::returnBook() {
    std::cout << "This transaction is for issue only." << std::endl;
}

ReturnTransaction::ReturnTransaction(const std::string& transactionID, const std::string& date, Book& book, User& user)
    : Transaction(transactionID, date, book, user) {}

void ReturnTransaction::issueBook() {
    std::cout << "This transaction is for return only." << std::endl;
}

void ReturnTransaction::returnBook() {
    if (!book.getAvailability()) {
        book.setAvailability(true);
        user.returnBook(book);
        std::cout << "Book returned successfully." << std::endl;
    }
    else {
        std::cout << "Book is not borrowed." << std::endl;
    }
}
