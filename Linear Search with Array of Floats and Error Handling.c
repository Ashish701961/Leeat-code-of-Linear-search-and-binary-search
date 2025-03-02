
#include <iostream>
#include <stdexcept>
using namespace std;

int linearSearch(float arr[], int size, float key) {
    if (size <= 0) throw invalid_argument("Array size must be greater than zero.");
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    try {
        float arr[] = {1.1, 2.2, 3.3};
        int size = sizeof(arr) / sizeof(arr[0]);
        float key = 2.2;
        int result = linearSearch(arr, size, key);
        if (result != -1) {
            cout << "Element found at index: " << result << endl;
        } else {
            cout << "Element not found." << endl;
        }
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
