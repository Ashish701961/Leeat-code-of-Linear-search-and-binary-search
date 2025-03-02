#include <iostream>
using namespace std;

int binarySearchFloat (float arr[], int size, float target) {
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
    float arr[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    int size = sizeof(arr) / sizeof(arr[0]);
    float target = 4.0f;
    int result = binarySearchFloat(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}

