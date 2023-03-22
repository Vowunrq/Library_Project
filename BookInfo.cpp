#include <iostream>
#include <fstream>
#include "BookInfo.h"

BookInfo::BookInfo()
{
	genre = "";
	year = 0;
	author = "";
	title = "";
}

BookInfo::BookInfo(string g, int y, string a, string t)
{
	genre = g;
	year = y;
	author = a;
	title = t;
}