# Library Management System
Create a command-line Library Management System(LMS) that manages books, users, and transactions.

Made with the help of Github Copilot and ChatGPT 4

# Requirements :

Book Class :
Attributes: ISBN, Title, Author, Genre, Availability(bool), etc.
Methods : Display book details, check availability, update availability status, etc.
Operator Overloading : Implement == and != operators to compare books based on ISBN.

User Class :
Attributes: ID, Name, Email, Phone Number, Borrowed Books, etc.
Methods : Display user details, borrow book, return book, etc.

Transaction Class(Base Class) :
Attributes : Transaction ID, Date, Book, User, etc.
Virtual Methods : issueBook(for borrowing a book), returnBook(for returning a book).

Issue Transaction Class(Derived from Transaction) :
Override issueBook method to handle book borrowing transactions.

Return Transaction Class(Derived from Transaction) :
Override returnBook method to handle book return transactions.

Library Class :
Attributes: List of books, List of users, List of transactions, etc.
Methods : Add book, remove book, add user, remove user, display all books / users / transactions, etc.

Templates : Use templates for adding / removing books and users to handle different types(e.g., Book, User).
