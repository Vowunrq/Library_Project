/*
Name: Andrew Chai
hh
ID: 400441896
*/
//some
#include <iostream>
#include <fstream>
#include "Library.h"

using namespace std;

void studentMenu();
void librarianMenu();


int main()
{
	Library rec[16];

	ifstream file;
	file.open("BookList.txt");

	while (!file.eof())
	{
		for (int i = 0; i < 4; i++)
		{
			string Genre, Author, Title;
			int Year;

			file >> Title >> Author >> Genre >> Year;

			//Library temp(Title, Author,  Genre, Year);
			//rec[i] = temp;
		}
	}
	file.close();




	char userType;

	cout << "Are you a student or a librarian? (S/L): ";
	cin >> userType;
	cout << endl;

	if (userType == 'S' || userType == 's') {
			studentMenu();
	} else if (userType == 'L' || userType == 'l') {
			librarianMenu();
	} else {
			cout << "Invalid option, please try again." << endl;
	}

	return 0;
}

void studentMenu() {
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

void librarianMenu() {
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
