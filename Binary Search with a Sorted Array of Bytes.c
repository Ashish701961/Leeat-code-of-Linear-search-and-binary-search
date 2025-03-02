
#include <iostream>
using namespace std;

int binarySearchByte(unsigned char arr[], int size, unsigned char target) {
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
    unsigned char arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    unsigned char target = 3;
    int result = binarySearchByte(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}
