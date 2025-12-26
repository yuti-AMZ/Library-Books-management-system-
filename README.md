 Library Management System
Data Structures & Algorithms Assignment

Typing SVG

Project Title
Console-Based Library Management System Using Manually Implemented Linked Lists

Course / Assignment Context
This project was developed as a major assignment for the Data Structures and Algorithms course in the Software Engineering program at Addis Ababa Science and Technology University (AASTU).
The assignment required students to:

Implement core data structures completely from scratch
Avoid using any Standard Template Library (STL) containers such as std::vector, std::list, etc.
Apply fundamental algorithms (searching, sorting, insertion, deletion) directly on custom data structures
Demonstrate proper memory management and file persistence
Build a practical, real-world application with multiple user roles

This project fully satisfies all requirements while providing a clean, modular, and well-documented codebase.

Project Objective
To design and implement a fully functional console-based library management system that efficiently manages books and members using manually created linked lists, demonstrating mastery of:

Pointer-based data structures
Dynamic memory allocation and deallocation
File input/output operations
Linear searching and bubble sorting on linked data
Object-oriented design principles in C++


Key Data Structures Implemented (From Scratch)























ComponentData StructureReason for ChoiceKey Operations SupportedBooksDoubly Linked ListAllows efficient insertion/deletion at both ends
Supports bidirectional traversal if needed
Maintains prev/next pointers for proper unlink during deletionAdd at tail, delete (head/tail/middle), traversal, search, sortMembersSingly Linked ListSufficient for sequential access
Simpler memory usage
No need for backward navigationAdd at tail, search by username, authentication, display all
Important: No STL containers or algorithms were used — all structures and operations were built manually using raw pointers.

Detailed Features Implemented
1. Admin Panel
Default Credentials:

Username: admin
Password: admin123

Full Functionality:

Add new book (unique ID check, name input)
Display all books (with formatted table showing ID, Name, Status)
Display only available books
Search book by exact ID
Search book by partial name (case-insensitive substring match)
Delete book by ID (proper doubly linked list unlink)
Sort books by ID (ascending)
Sort books by Name (alphabetical)
View comprehensive library statistics
View all registered members with details
Automatic data save on logout/exit

2. Member Panel

Self-Registration:
Choose unique username
Set password (minimum length validation)
Select type: Student or Staff
Enter institutional ID

Secure Login (username + password authentication)
Available Actions:
View list of available books
Search books by ID or name
Borrow a book (if available → status changes to Borrowed)
Return a borrowed book (status restored to Available)
Automatic save after borrow/return


3. Guest / Normal User Access

No login required
Can view all available books
Can search books by ID or partial name
Read-only access (cannot borrow or modify)

4. Data Persistence System

Two persistent text files created automatically:
books.txt → Format: ID,Book Name,1/0 (1 = Available, 0 = Borrowed)
members.txt → Format: username,password,type,memberId

Load on startup: Data restored when program begins
Save triggers:
After adding/deleting books
After borrowing/returning
After registration
On program exit
Manual save option in admin menu



Algorithms Demonstrated in Detail















































AlgorithmImplementation LocationDetailsTime ComplexityInsertionBookList::addBook(), MemberList::addMember()Tail insertion using head/tail pointers for O(1) efficiencyO(1)DeletionBookList::deleteBook()Handles all cases: single node, head, tail, middle — properly updates prev/next linksO(n)Linear Search (ID)findById()Exact match traversalO(n)Linear Search (Name)findByName()Converts both strings to lowercase → checks for substring using find()O(n)Bubble SortsortById(), sortByName()Repeated passes swapping adjacent nodes' data fields until no swaps neededO(n²)TraversalDisplay functionsForward iteration from head to tail for printing formatted tablesO(n)

Compilation & Execution Guide
Prerequisites

Any modern C++ compiler
Support for C++11 or higher

Compilation Commands
Bash# Recommended (g++ / clang++)
g++ -o library library.cpp -std=c++11 -Wall -Wextra

# Or with optimization
g++ -o library library.cpp -std=c++11 -O2
Running the Program
Bash./library          # Linux / macOS
library.exe        # Windows
The application launches with a clean main menu offering five options.

Project File Structure
textLibraryManagementSystem/
├── library.cpp          ← Complete, well-commented source code (single file for clarity)
├── books.txt            ← Auto-generated: stores all book records
├── members.txt          ← Auto-generated: stores all member accounts
├── README.md            ← This detailed documentation
└── (Optional) screenshots/ or report.pdf

Known Limitations (Intentionally Preserved for Assignment Scope)
These features were not implemented to stay within basic DSA requirements:

No limit on number of books a member can borrow
No due dates, overdue fines, or borrowing history
Passwords stored in plain text (not hashed)
Only one hardcoded admin account
No advanced search filters (author, genre, year)
Basic input validation only

These omissions allow focus on core data structure concepts rather than full production features.

Learning Outcomes Achieved
This project provided hands-on mastery of:

Pointer manipulation and dynamic memory allocation/deallocation
Correct linked list operations in all edge cases
Manual implementation of searching and sorting algorithms
File handling using fstream with CSV-like parsing
Modular OOP design using classes, encapsulation, and separation of concerns
Robust error handling and user input validation
Clean code practices with meaningful comments and formatting

This assignment significantly deepened understanding of how data structures work under the hood.

Conclusion
This Console-Based Library Management System successfully demonstrates advanced application of fundamental data structures and algorithms in C++. Built entirely from scratch without relying on STL containers, it serves as an excellent example of:

Real-world use of linked lists
Proper memory and resource management
Algorithm implementation on custom structures
Persistent data storage

Ideal for submission in Data Structures & Algorithms courses emphasizing manual implementation, linked lists, file I/O, and OOP principles.
Thank you for reviewing this project!
Happy coding! 📚💻✨
Submitted: December 26, 2025
Course: Data Structures and Algorithms
Department: Software Engineering
Institution: Addis Ababa Science and Technology University (AASTU)
