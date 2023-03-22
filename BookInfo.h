#pragma once
#include <iostream>

using namespace std;

class BookInfo
{
protected:
	string title;
	string author;
	string genre;
	int year;
public:
	BookInfo();
	BookInfo(string, int, string, string);

	string getGenre() const { return genre; };
	int getYear() const { return year; };
	string getAuthor() const { return author; };
	string getTitle() const { return title; };

	void setGenre(string g) { genre = g; };
	void setYear(int y) { year = y; };
	void setAuthor(string a) { author = a; };
	void setTitle(string t) { title = t; };
};