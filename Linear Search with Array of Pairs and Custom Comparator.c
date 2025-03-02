#include <iostream>
#include <utility>
using namespace std;

bool customComparator(const pair<int, string>& a, int key) {
    return a.first == key;
}

int linearSearch(pair<int, string> arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (customComparator(arr[i], key)) {
            return i;
        }
    }
    return -1;
}

int main() {
    pair<int, string> arr[] = { {1, "One"}, {2, "Two"}, {3, "Three"} };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "Pair found at index: " << result << " with value: " << arr[result].second << endl;
    } else {
        cout << "Pair not found." << endl;
    }
    return 0;
}
