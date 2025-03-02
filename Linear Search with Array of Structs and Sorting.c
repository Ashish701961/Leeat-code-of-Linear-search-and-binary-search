
#include <iostream>
#include <algorithm>
using namespace std;

struct Book {
    int id;
    string title;
};

bool compareBooks(const Book& a, const Book& b) {
    return a.id < b.id;
}

int linearSearch(Book books[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (books[i].id == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    Book books[] = { {3, "C++ Programming"}, {1, "Data Structures"}, {2, "Algorithms"} };
    int size = sizeof(books) / sizeof(books[0]);
    sort(books, books + size, compareBooks); // Sort books by id
    int key = 2;
    int result = linearSearch(books, size, key);
    if (result != -1) {
        cout << "Book found at index: " << result << " with title: " << books[result].title << endl;
    } else {
        cout << "Book not found." << endl;
    }
    return 0;
}
