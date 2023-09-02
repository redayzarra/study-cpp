#include <iostream>

using namespace std;

int main() {
    int* numbers = new int[5];
    int entries = 0;

    while (true) {
        cout << "Numbers: ";
        cin >> numbers[entries];

        if (cin.fail()) break;
        entries++;

        if (entries == 5) {
            // Create a temp array 
            int* temp = new int[10];

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
}