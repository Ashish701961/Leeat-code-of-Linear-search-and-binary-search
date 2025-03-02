#include <iostream>
using namespace std;

struct Vehicle {
    int id;
    string model;
};

int linearSearch(Vehicle* vehicles, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (vehicles[i].id == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size = 3;
    Vehicle* vehicles = new Vehicle[size];
    vehicles[0] = {1, "Car"};
    vehicles[1] = {2, "Truck"};
    vehicles[2] = {3, "Motorcycle"};

    int key = 2;
    int result = linearSearch(vehicles, size, key);
    if (result != -1) {
        cout << "Vehicle found at index: " << result << " with model: " << vehicles[result].model << endl;
    } else {
        cout << "Vehicle not found." << endl;
    }
    delete[] vehicles; // Free allocated memory
    return 0;
}

