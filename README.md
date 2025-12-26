Library Management System

Console-Based Library Management System using Manually Implemented Linked Lists

A Data Structures & Algorithms course project built entirely from scratch in C++ without using STL containers.

📌 Course Information

Course: Data Structures and Algorithms

Department: Software Engineering

Institution: Addis Ababa Science and Technology University (AASTU)

Submission Date: December 26, 2025

🎯 Project Overview

This project implements a console-based library management system that manages books and members using manually created linked lists.

The main goal is to demonstrate a strong understanding of:

Linked lists and pointers

Dynamic memory management

Searching and sorting algorithms

File handling for persistent storage

Object-oriented programming in C++

All data structures and algorithms are implemented from scratch, without using STL containers such as vector, list, or map.

🧠 Data Structures Used
Books

Doubly Linked List

Supports efficient insertion and deletion

Allows proper unlinking of nodes during deletion

Members

Singly Linked List

Sequential access is sufficient

Lower memory overhead

No STL containers were used in this project.

✨ Features
Admin Panel

Login with default credentials

Username: admin

Password: admin123

Add new books with unique ID validation

View all books or available books only

Search books by ID or partial name

Delete books by ID

Sort books by ID or name

View all registered members

View library statistics

Manual and automatic data saving

Member Panel

User registration with validation

Secure login using username and password

View available books

Search books by ID or name

Borrow and return books

Automatic data saving after actions

Guest Access

No login required

View available books

Search books by ID or name

Read-only access

💾 Data Persistence

Data is stored using plain text files.

Files Used

books.txt

ID,BookName,Status


Status: 1 = Available, 0 = Borrowed

members.txt

username,password,type,memberId

Save Behavior

Data is saved:

After adding or deleting books

After borrowing or returning books

After member registration

On program exit

Through manual save (admin)

⚙️ Algorithms Implemented

Tail insertion in linked lists — O(1)

Deletion (head, tail, middle) — O(n)

Linear search by ID — O(n)

Linear search by name (case-insensitive) — O(n)

Bubble sort by ID or name — O(n²)

Traversal for display — O(n)

All algorithms operate directly on custom linked lists.

🛠 Compilation & Execution
Requirements

C++ compiler (C++11 or higher)

Compile
g++ -o library library.cpp -std=c++11 -Wall -Wextra

Run
./library


Windows:

library.exe

📁 Project Structure
LibraryManagementSystem/
├── library.cpp
├── books.txt
├── members.txt
├── README.md

⚠️ Known Limitations

These limitations were intentional to focus on core DSA concepts:

No borrowing limit

No due dates or fines

Plain-text password storage

Single admin account

No advanced search filters

Basic input validation only

🎓 Learning Outcomes

This project strengthened understanding of:

Linked list implementation

Pointer manipulation

Manual memory management

Searching and sorting algorithms

File handling using fstream

Object-oriented design in C++

🏁 Conclusion

This project demonstrates a solid practical application of Data Structures and Algorithms using C++.
By avoiding STL containers and implementing everything manually, it provides a clear understanding of how data structures work internally.

It is suitable for academic submission and evaluation in DSA-focused courses.
