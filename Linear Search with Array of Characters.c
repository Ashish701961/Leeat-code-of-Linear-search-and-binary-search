
#include <iostream>
using namespace std;

int linearSearch(char arr[], int size, char key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char key = 'c';
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "Character found at index: " << result << endl;
    } else {
        cout << "Character not found." << endl;
    }
    return 0;
}
