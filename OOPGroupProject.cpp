#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char userType;
	cout << "Are you a student or a librarian? (S/L): ";
	cin >> userType;
	cout << endl;

	if (userType == 'S' || userType == 's') {
			//studentMenu();
	} 
	else if (userType == 'L' || userType == 'l') {
			//librarianMenu();
	} 
	else {
			cout << "Invalid option, please try again." << endl;
	}

	return 0;
}