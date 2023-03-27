/*
Name: Andrew Chai
hh
ID: 400441896
*/
//some
#include <iostream>
#include <fstream>
#include "BookInfo.h"

using namespace std;

void studentMenu();
void librarianMenu();


int main()
{
	BookInfo rec[16];

	ifstream Library;
	Library.open("Library.txt");

	while (!Library.eof())
	{
		for (int i = 0; i < 4; i++)
		{
			string Genre, Author, Title;
			int Year;

			Library >> Title >> Author >> Genre >> Year;

			BookInfo temp(Genre, Year, Author, Title);
			rec[i] = temp;
		}
	}
	Library.close();




	char userType;

	cout << "Are you a student or a librarian? (S/L): ";
	cin >> UserType;
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
        cout << "4. Exit" << endl << endl;
        cout << "Please enter your choice: ";

        cin >> user_choice;
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
