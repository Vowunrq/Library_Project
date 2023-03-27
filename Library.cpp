#include "Library.h"
#include <fstream>

Library::Library()
{
    title = "";
    author = "";
    genre = "";
    year = 0;
    availability = false;
}

Library::Library(string t, string auth, string g, int y, bool avail)
{
    title = t;
    author = auth;
    genre = g;
    year = y;
    availability = avail;
}

Library::~Library()
{
}

void Library::BookCatalogue()
{
}

void Library::DisplayBooks(Library object) {
    ifstream bookfile;
    while (!bookfile.eof()) {
        cout << object.getTitle() << "_\t" << object.getAuthor();
        cout << object.getGenre() << "_\t" << object.getYear();
        cout << "_\t" << object.getAvailability();
    }
}

ostream& operator<<(ostream& stream, Library object) {
    stream << object.getTitle() << "_\t" << object.getAuthor();
    stream << object.getGenre() << "_\t" << object.getYear();
    return stream;
}

