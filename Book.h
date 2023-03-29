#pragma once
#include <iostream>
using namespace std;
class Book {
protected:
	string title;
	string author;
	string genre;
	int year;
	bool availability;
public:
	Book();
	Book(string, string, string, int, bool);

	string getTitle() const { return title; };
	string getAuthor() const { return author; };
	string getGenre() const { return genre; };
	int getYear() const { return year; };
	bool getAvailability() const { return availability; };

	void setTitle(string t) { title = t; };
	void setAuthor(string auth) { author = auth; };
	void setGenre(string g) { genre = g; };
	void setYear(int y) { year = y; };
	void setAvailability(bool avail) { availability = avail; };

};

