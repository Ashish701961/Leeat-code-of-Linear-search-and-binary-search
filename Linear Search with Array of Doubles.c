#include <iostream>
using namespace std;

int linearSearch(double arr[], int size, double key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    double arr[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double key = 3.5;
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}

