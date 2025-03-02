#include <iostream>
using namespace std;

int binarySearchUnsigned(unsigned int arr[], int size, unsigned int target) {
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
    unsigned int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    unsigned int target = 4;
    int result = binarySearchUnsigned(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}
