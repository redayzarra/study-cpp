#include <iostream>

using namespace std;

int main() {
    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;

    while (true) {
        cout << "Numbers: ";
        cin >> numbers[entries];

        if (cin.fail()) break;
        entries++;

        if (entries == capacity) {
            // Create a temp array 
            capacity *= 2;
            int* temp = new int[capacity];

            // Copy all elements to temp array
            for (int i = 0; i < entries; i++) {
                temp[i] = numbers[i];
            }

            // Deallocate and reassign numbers
            delete[] numbers;
            numbers = temp;
        }
    }

    for (int i = 0; i < entries; i++) {
        cout << numbers[i] << endl;
    }

    delete[] numbers;
}