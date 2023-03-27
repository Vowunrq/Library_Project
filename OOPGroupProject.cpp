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




	return 0;
}


void Greetings(){
	cout << "Hello, welcome JAKI Towns Public Library.\n";
	cout << "Are you a Librarian(1) or Student(2)?";
	int login;
	cin >> login;

}
