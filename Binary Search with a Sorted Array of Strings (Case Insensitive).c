#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool caseInsensitiveCompare(const string& a, const string& b) {
    string lowerA = a;
    string lowerB = b;
    transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
    transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);
    return lowerA < lowerB;
}

int binarySearchStringCaseInsensitive(string arr[], int size, string target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (caseInsensitiveCompare(arr[mid], target)) left = mid + 1;
        else if (caseInsensitiveCompare(target, arr[mid])) right = mid - 1;
        else return mid;
    }
    return -1;
}

int main() {
    string arr[] = {"Apple", "Banana", "Cherry", "Date", "Fig"};
    int size = sizeof(arr) / sizeof(arr[0]);
    string target = "cherry";
    int result = binarySearchStringCaseInsensitive(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}

