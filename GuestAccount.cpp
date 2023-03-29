#include "GuestAccount.h"

void GuestAccount::Search() {
}

void GuestAccount::guestMenu() {
    char userChoice;
    bool programRunning = true;

    while (programRunning) {
        cout << "************************************************************" << endl;
        cout << "Welcome to JAKIs Library Management System!" << endl << endl;
        cout << "Please select an option from the following menu:" << endl << endl;
        cout << "1. Search for a book" << endl;
        cout << "2. Borrow a book" << endl;
        cout << "3. Return a book" << endl;
        cout << "4. View all books" << endl;
        cout << "5. Exit" << endl << endl;
        cout << "Please enter your choice: ";

        cin >> userChoice;
        cout << endl;

        switch (userChoice) {
        case '1':
            //search for a book
            break;
        case '2':
            //borrow book
            break;
        case '3':
            //return a book
            break;
        case '4':
            //view all books
            break;
        case '5':
            programRunning = false;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
}
