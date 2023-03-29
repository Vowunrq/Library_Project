#include "LibrarianAccount.h"

void LibrarianAccount::Search() {

}

void LibrarianAccount::librarianMenu() {
    char userChoice;
    bool programRunning = true;

    while (programRunning) {
        cout << "************************************************************" << endl;
        cout << "Welcome to JAKIs Library Management System!" << endl << endl;
        cout << "Please select an option from the following menu:" << endl << endl;
        cout << "1. Search for a book" << endl;
        cout << "2. Add a new book" << endl;
        cout << "3. Remove a book" << endl;
        cout << "4. View all books" << endl;
        cout << "5. View borrowed books" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Please enter your choice: ";

        cin >> userChoice;
        cout << endl;

        switch (userChoice) {
        case '1':
            //search for a book
            break;
        case '2':
            //add a new book
            break;
        case '3':
            //remove a book
            break;
        case '4':
            //view all books
            break;
        case '5':
            //view borrowed books
            break;
        case '6':
            programRunning = false;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    }
}
