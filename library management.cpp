
void memberMenu() {
        while (true) {
            cout << "\n================================\n";
            cout << "          MEMBER MENU\n";
            cout << "================================\n";
            cout << "1. Show Available Books\n";
            cout << "2. Find Book by ID\n";
            cout << "3. Find Book by Name\n";
            cout << "4. Borrow Book\n";
            cout << "5. Return Book\n";
            cout << "6. Logout\n";
            cout << "================================\n";
            cout << "Enter choice: ";

            int choice;
            cin >> choice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input!\n";
                continue;
            }
            cin.ignore();

            switch (choice) {
            case 1: books.displayAvailable(); break;
            case 2: findBookById(); break;
            case 3: findBookByName(); break;
            case 4: borrowBook(); break;
            case 5: returnBook(); break;
            case 6:
                books.saveToFile(booksFile);
                cout << "Logging out...\n";
                return;
            default:
                cout << "Invalid choice!\n";
            }
        }
    }

    void normalUserMenu() {
        while (true) {
            cout << "\n================================\n";
            cout << "      NORMAL USER MENU\n";
            cout << "================================\n";
            cout << "1. Show Available Books\n";
            cout << "2. Find Book by ID\n";
            cout << "3. Find Book by Name\n";
            cout << "4. Back to Main Menu\n";
            cout << "================================\n";
            cout << "Enter choice: ";

            int choice;
            cin >> choice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input!\n";
                continue;
            }
            cin.ignore();

            switch (choice) {
            case 1: books.displayAvailable(); break;
            case 2: findBookById(); break;
            case 3: findBookByName(); break;
            case 4: return;
            default:
                cout << "Invalid choice!\n";
            }
        }
    }

    void addBook() {
        int id;
        string name;

        cout << "\n--- Add New Book ---\n";
        cout << "Enter Book ID (number): ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid ID! Please enter a number.\n";
            return;
        }
        cin.ignore();

        if (books.findById(id) != nullptr) {
            cout << "Book with this ID already exists!\n";
            return;
        }

        cout << "Enter Book Name: ";
        getline(cin, name);

        if (name.empty()) {
            cout << "Book name cannot be empty!\n";
            return;
        }

        books.addBook(id, name);
        books.saveToFile(booksFile);  
        cout << "\nBook added successfully and saved to file!\n";
    }

    void findBookById() {
        int id;
        cout << "\nEnter Book ID to search: ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid ID!\n";
            return;
        }
        cin.ignore();

        Book* book = books.findById(id);
        if (book != nullptr) {
            cout << "\n--- Book Found ---\n";
            cout << "ID: " << book->id << endl;
            cout << "Name: " << book->name << endl;
            cout << "Status: " << (book->isAvailable ? "Available" : "Borrowed") << endl;
        }
        else {
            cout << "Book not found!\n";
        }
    }

    void findBookByName() {
        string name;
        cout << "\nEnter Book Name to search: ";
        getline(cin, name);

        if (name.empty()) {
            cout << "Book name cannot be empty!\n";
            return;
        }

        Book* book = books.findByName(name);
        if (book != nullptr) {
            cout << "\n--- Book Found ---\n";
            cout << "ID: " << book->id << endl;
            cout << "Name: " << book->name << endl;
            cout << "Status: " << (book->isAvailable ? "Available" : "Borrowed") << endl;
        }
        else {
            cout << "Book not found!\n";
        }
    }

    void deleteBook() {
        int id;
        cout << "\nEnter Book ID to delete: ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid ID!\n";
            return;
        }
        cin.ignore();

        if (books.deleteBook(id)) {
            books.saveToFile(booksFile);
            cout << "Book deleted and changes saved!\n";
        }
        else {
            cout << "Book not found!\n";
        }
    }

    void borrowBook() {
        int id;
        cout << "\nEnter Book ID to borrow: ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid ID!\n";
            return;
        }
        cin.ignore();

        if (books.borrowBook(id)) {
            books.saveToFile(booksFile);
            cout << "Book borrowed successfully! Changes saved.\n";
        }
        else {
            cout << "Book not available or not found!\n";
        }
    }

    void returnBook() {
        int id;
        cout << "\nEnter Book ID to return: ";
        cin >> id;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid ID!\n";
            return;
        }
        cin.ignore();

        if (books.returnBook(id)) {
            books.saveToFile(booksFile);
            cout << "Book returned successfully! Changes saved.\n";
        }
        else {
            cout << "Book not found or wasn't borrowed!\n";
        }
    }

    void showCounts() {
        cout << "\n--- Library Statistics ---\n";
        cout << "Total Books: " << books.getTotalCount() << endl;
        cout << "Available Books: " << books.getAvailableCount() << endl;
        cout << "Borrowed Books: " << books.getBorrowedCount() << endl;
        cout << "Total Members: " << members.getMemberCount() << endl;
    }
};

string line;
        while (getline(file, line)) {
            if (line.empty()) continue;

            int comma1 = line.find(',');
            int comma2 = line.find(',', comma1 + 1);
            int comma3 = line.find(',', comma2 + 1);

            if (comma1 != -1 && comma2 != -1 && comma3 != -1) {
                string username = line.substr(0, comma1);
                string password = line.substr(comma1 + 1, comma2 - comma1 - 1);
                string memberType = line.substr(comma2 + 1, comma3 - comma2 - 1);
                string memberId = line.substr(comma3 + 1);

                if (!username.empty() && !password.empty()) {
                    addMember(username, password, memberType, memberId);
                }
            }
        }
        file.close();
    }

    void clear() {
        while (head != nullptr) {
            Member* temp = head;
            head = head->next;
            delete temp;
        }
        count = 0;
    }
};
// ==================== MAIN FUNCTION ====================
int main() {
    LibrarySystem library;
    library.run();
    return 0;
}
