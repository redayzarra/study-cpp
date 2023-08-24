#include <iostream>

using namespace std;

// We always need to add the array's size as well
void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numbers[i];
    }
}