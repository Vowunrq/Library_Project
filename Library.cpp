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



