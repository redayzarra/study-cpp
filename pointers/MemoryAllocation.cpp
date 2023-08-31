#include <iostream>

using namespace std;

int main() {
    // Stored in Stack
    //int numbers[10];

    // Stored in Heap - no auto cleanup
    int* numbers = new int[100];
    int* number = new int;

    // Deallocate memory 
    delete[] numbers;
    delete number;

    // Reset pointers
    number = nullptr;
    numbers = nullptr;
}