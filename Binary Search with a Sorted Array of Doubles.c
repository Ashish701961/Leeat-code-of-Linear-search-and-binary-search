#include <iostream>
using namespace std;

int binarySearchDouble(double arr[], int size, double target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double target = 3.3;
    int result = binarySearchDouble(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}
