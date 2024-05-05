//	Made with the help of Github Copilot and ChatGPT 4
//
//	Create a command - line Library Management System(LMS) that manages books, users, and transactions.
//
//	Requirements :
//
//	Book Class :
//
//	Attributes: ISBN, Title, Author, Genre, Availability(bool), etc.
//	Methods : Display book details, check availability, update availability status, etc.
//	Operator Overloading : Implement == and != operators to compare books based on ISBN.
//	User Class :
//
//	Attributes: ID, Name, Email, Phone Number, Borrowed Books, etc.
//	Methods : Display user details, borrow book, return book, etc.
//	Transaction Class(Base Class) :
//
//	Attributes : Transaction ID, Date, Book, User, etc.
//	Virtual Methods : issueBook(for borrowing a book), returnBook(for returning a book).
//	Issue Transaction Class(Derived from Transaction) :
//
//	Override issueBook method to handle book borrowing transactions.
//	Return Transaction Class(Derived from Transaction) :
//
//	Override returnBook method to handle book return transactions.
//	Library Class :
//
//	Attributes: List of books, List of users, List of transactions, etc.
//	Methods : Add book, remove book, add user, remove user, display all books / users / transactions, etc.
//	Templates : Use templates for adding / removing books and users to handle different types(e.g., Book, User).

#include "Library.h"

using namespace std;

int main() {
	Library library;

	Book book1("978-3-16-148410-0", "The Great Gatsby", "F. Scott Fitzgerald", "Fiction", true);
	Book book2("978-3-16-148410-1", "To Kill a Mockingbird", "Harper Lee", "Fiction", true);
	Book book3("978-3-16-148410-2", "1984", "George Orwell", "Fiction", true);

	library.addBook(book1);
	library.addBook(book2);
	library.addBook(book3);

	User user1("1", "Alice", "aliceinchains@gymail.com", "+16661313");
	User user2("2", "Bob", "jacksorrow@whatisthematrix.com", "+906661313");

	library.addUser(user1);
	library.addUser(user2);

	library.issueBook("1", "2021-10-01", "978-3-16-148410-0", "1");
	library.issueBook("2", "2021-10-02", "978-3-16-148410-1", "2");
	library.returnBook("3", "2021-10-03", "978-3-16-148410-0", "1");

	library.displayBooks();
	library.displayUsers();
	library.displayTransactions();

	return 0;

}
