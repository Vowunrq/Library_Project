#include "Book.h"

Book::Book()
{
    title = "";
    author = "";
    genre = "";
    year = 0;
    availability = false;
}

Book::Book(string t, string auth, string g, int y, bool avail)
{
    title = t;
    author = auth;
    genre = g;
    year = y;
    availability = avail;
}


