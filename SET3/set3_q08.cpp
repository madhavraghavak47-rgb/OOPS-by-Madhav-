#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    int numberOfCopies;

public:
    Book(int id , string t , int copies) {
        bookId = id;
        title = t;
        numberOfCopies = copies;
    }

    void exchange(Book &other) {
        int tempId = bookId;
        string tempTitle = title;
        int tempCopies = numberOfCopies;

        bookId = other.bookId;
        title = other.title;
        numberOfCopies = other.numberOfCopies;

        other.bookId = tempId;
        other.title = tempTitle;
        other.numberOfCopies = tempCopies;
    }

    void display() const {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Number of Copies: " << numberOfCopies << endl;
    }

    int getCopies() const {
        return numberOfCopies;
    }
};

Book moreCopies(Book a, Book b) {
    if (a.getCopies() >= b.getCopies())
        return a;
    else
        return b;
}

int main() {
    Book b1(101, "C++ Programming", 5);
    Book b2(102, "Data Structures", 8);

    cout << "Before exchange:" << endl;
    b1.display();
    b2.display();

    b1.exchange(b2);

    cout << "\nAfter exchange:" << endl;
    b1.display();
    b2.display();

    Book result = moreCopies(b1, b2);

    cout << "\nBook with more copies:" << endl;
    result.display();

    return 0;
}
