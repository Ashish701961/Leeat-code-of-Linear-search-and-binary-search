#include <iostream>
using namespace std;

int binarySearchChar(char arr[], int size, char target) {
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
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target = 'c';
    int result = binarySearchChar(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}
