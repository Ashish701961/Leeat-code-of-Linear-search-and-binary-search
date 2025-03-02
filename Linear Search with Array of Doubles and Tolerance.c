#include <iostream>
#include <cmath>
using namespace std;

int linearSearch(double arr[], int size, double key, double tolerance) {
    for (int i = 0; i < size; i++) {
        if (fabs(arr[i] - key) < tolerance) {
            return i;
        }
    }
    return -1;
}

int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0};
    int size = sizeof(arr) / sizeof(arr[0]);
    double key = 2.1;
    double tolerance = 0.2;
    int result = linearSearch (arr, size, key, tolerance);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
