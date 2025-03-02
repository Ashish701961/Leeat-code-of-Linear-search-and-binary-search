#include <iostream>
#include <string>
using namespace std;

struct Person {
    int id;
    string name;
};

int binarySearchPersonByName(Person arr[], int size, string targetName) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].name < targetName) left = mid + 1;
        else if (arr[mid].name > targetName) right = mid - 1;
        else return mid;
    }
    return -1;
}

int main() {
    Person arr[] = { {1, "Alice"}, {2, "Bob"}, {3, "Charlie"}, {4, "David"}, {5, "Eve"} };
    int size = sizeof(arr) / sizeof(arr[0]);
    string targetName = "David";
    int result = binarySearchPersonByName(arr, size, targetName);
    cout << "Element found at index: " << result << endl;
    return 0;
}
