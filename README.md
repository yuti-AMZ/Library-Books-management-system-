📚 Library Management System

Data Structures & Algorithms Assignment

Console-Based Library Management System Using Manually Implemented Linked Lists

🏫 Course & Assignment Context

This project was developed as a major assignment for the Data Structures and Algorithms course in the Software Engineering program at
Addis Ababa Science and Technology University (AASTU).

Assignment Requirements

The assignment required students to:

Implement core data structures from scratch

Avoid all STL containers (std::vector, std::list, etc.)

Apply fundamental algorithms manually:

Searching

Sorting

Insertion

Deletion

Demonstrate:

Proper memory management

File persistence

Build a real-world application with multiple user roles

✅ This project fully satisfies all requirements while maintaining a clean, modular, and well-documented codebase.

🎯 Project Objective

To design and implement a fully functional console-based library management system that efficiently manages books and members using manually created linked lists, demonstrating mastery of:

Pointer-based data structures

Dynamic memory allocation & deallocation

File input/output operations

Searching and sorting on linked data

Object-Oriented Programming (OOP) principles in C++

🧠 Data Structures Implemented (From Scratch)
Component	Data Structure	Reason for Choice	Key Operations
Books	Doubly Linked List	Efficient insertion/deletion at both ends, bidirectional traversal	Add, delete (head/tail/middle), search, sort, traverse
Members	Singly Linked List	Simple structure, lower memory usage, sequential access	Add, search, authenticate, display

⚠️ Important:
No STL containers or algorithms were used. All operations rely on raw pointers and manual memory management.

✨ Features Overview
🔐 1. Admin Panel

Default Credentials

Username: admin

Password: admin123

Admin Capabilities

Add new books (with unique ID validation)

Display:

All books

Available books only

Search books:

By exact ID

By partial name (case-insensitive)

Delete books by ID (safe unlinking in doubly linked list)

Sort books:

By ID (ascending)

By Name (alphabetical)

View:

Library statistics

All registered members

Manual save option

Automatic save on logout or exit

👤 2. Member Panel

Registration

Unique username

Password with minimum length validation

Member type:

Student

Staff

Institutional ID

Login

Secure authentication (username + password)

Member Actions

View available books

Search books by ID or name

Borrow books (status changes to Borrowed)

Return books (status restored to Available)

Automatic save after borrow/return

👀 3. Guest / Normal User Access

No login required

View available books

Search by ID or partial name

Read-only access

💾 Data Persistence System

Two text files are created automatically:

books.txt
Format:

ID,Book Name,1/0


1 → Available

0 → Borrowed

members.txt
Format:

username,password,type,memberId

Save & Load Behavior

Data loads automatically on program start

Data saves occur:

After adding/deleting books

After borrowing/returning

After member registration

On logout or program exit

Via manual save (admin)

⚙️ Algorithms Implemented
Algorithm	Location	Description	Time Complexity
Insertion	addBook(), addMember()	Tail insertion using head/tail pointers	O(1)
Deletion	deleteBook()	Handles head, tail, middle, single node	O(n)
Linear Search (ID)	findById()	Exact ID match	O(n)
Linear Search (Name)	findByName()	Case-insensitive substring search	O(n)
Bubble Sort	sortById(), sortByName()	Swaps adjacent node data	O(n²)
Traversal	Display functions	Forward traversal from head	O(n)
🛠 Compilation & Execution Guide
Prerequisites

Any modern C++ compiler

C++11 or higher support

Compilation
# Recommended
g++ -o library library.cpp -std=c++11 -Wall -Wextra

# With optimization
g++ -o library library.cpp -std=c++11 -O2

Run
./library       # Linux / macOS
library.exe     # Windows


The application starts with a main menu offering multiple user modes.

📁 Project File Structure
LibraryManagementSystem/
├── library.cpp      # Complete, well-commented source code
├── books.txt        # Auto-generated book records
├── members.txt      # Auto-generated member records
├── README.md        # Project documentation
└── (Optional) screenshots/ or report.pdf

⚠️ Known Limitations (Intentional)

To stay within the scope of basic DSA concepts, the following features were not implemented:

No borrowing limit per member

No due dates, fines, or history tracking

Plain-text password storage

Single hardcoded admin account

No advanced filters (author, genre, year)

Basic input validation only

These choices allowed focus on core data structure implementation.

🎓 Learning Outcomes

Through this project, the following skills were strengthened:

Deep understanding of linked lists and pointers

Manual memory management in C++

Custom implementation of searching and sorting algorithms

File handling with fstream

Modular OOP design

Robust error handling

Writing clean, readable, and well-documented code

🏁 Conclusion

This Console-Based Library Management System demonstrates strong practical application of Data Structures and Algorithms concepts.

Built entirely from scratch, it showcases:

Real-world use of linked lists

Correct memory and resource management

Algorithm implementation without STL

Persistent data storage

🎯 Ideal for DSA courses emphasizing manual implementation, linked lists, file I/O, and OOP principles.

Submitted: December 26, 2025
Course: Data Structures and Algorithms
Department: Software Engineering
Institution: Addis Ababa Science and Technology University (AASTU)

Happy coding! 📚💻✨
