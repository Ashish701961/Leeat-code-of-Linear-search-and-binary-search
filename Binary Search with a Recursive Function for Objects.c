#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    int id;
    string name;

    Item(int id, string name) : id(id), name(name) {}
};

int binarySearchRecursive(Item arr[], int left, int right, int targetId) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid].id == targetId) return mid;
        if (arr[mid].id > targetId) return binarySearchRecursive(arr, left, mid - 1, targetId);
        return binarySearchRecursive(arr, mid + 1, right, targetId);
    }
    return -1;
}

int main() {
    Item arr[] = {Item(1, "Apple"), Item(2, "Banana"), Item(3, "Cherry"), Item(4, "Date"), Item(5, "Fig")};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetId = 2;
    int result = binarySearchRecursive(arr, 0, size - 1, targetId);
    cout << "Element found at index: " << result << endl;
    return 0;
}
