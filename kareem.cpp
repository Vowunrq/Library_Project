#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//define a struct to store the data
struct Book {
    int id;
    string title;
    string author;
    string genre;
    int year;
    int booksLeft;
};

//function to read the contents of a file and store the data in an array of Book structs
int readBooksFromFile(const string& filename, Book* books, const int maxBooks) {
    // open the file
    ifstream inputFile(filename);

    // check if the file was opened successfully
    if (!inputFile.is_open()) {
        cout << "Error opening file\n";
        return -1;
    }

    // read the contents of the file and store the data in the array
    int numBooks = 0;
    string line;
    while (getline(inputFile, line) && numBooks < maxBooks) {
        //seperate the line into six sections separated by commas
        size_t pos = 0;
        int column = 0;
        string fields[6];
        while ((pos = line.find(',')) != string::npos) {
            fields[column] = line.substr(0, pos);
            line.erase(0, pos + 1);
            column++;
        }
        fields[column] = line;

        //create a Book struct and add it to the array
        if (column == 5) {
            books[numBooks].id = stoi(fields[0]);
            books[numBooks].title = fields[1];
            books[numBooks].author = fields[2];
            books[numBooks].genre = fields[3];
            books[numBooks].year = stoi(fields[4]);
            books[numBooks].booksLeft = stoi(fields[5]);
            numBooks++;
        }
    }

    inputFile.close();

    return numBooks;
}

int main() {
    //test the readBooksFromFile function
    const int maxBooks = 100;
    Book* books = new Book[maxBooks];
    int numBooks = readBooksFromFile("book.txt", books, maxBooks);
    if (numBooks > 0) {

        for (int i = 0; i < numBooks; i++) {
            cout << "ID: " << books[i].id << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Genre: " << books[i].genre << endl;
            cout << "Year: " << books[i].year << endl;
            if (books[i].booksLeft == 0) {
                cout << "This book is unavailable." << endl;
            }
            else {
                cout << "This book is available. Number of books left: " << books[i].booksLeft << endl;
            }
            cout << endl;
        }
    }

    //free the memory allocated for the array
    delete[] books;

    return 0;
}



//increment the stock of a book
void returnBook(Book& book) {
    book.booksLeft++;
}

//decrement the stock of a book
void borrowBook(Book& book) {
    if (book.booksLeft > 0) {
        book.booksLeft--;
    }
}

int main() {

}
