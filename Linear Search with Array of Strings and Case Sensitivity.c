#include <iostream>
#include <string>
using namespace std;

int linearSearch(string arr[], int size, const string& key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    string arr[] = {"Hello", "World", "C++"};
    int size = sizeof(arr) / sizeof(arr[0]);
    string key = "world"; // Case-sensitive search
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "String found at index: " << result << endl;
    } else {
        cout << "String not found." << endl;
    }
    return 0;
}
