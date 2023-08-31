#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30};
    int* ptr = numbers;

    // Increments the pointer to the next element of the array
    ptr++;
    cout << ptr[1];

    // Decrements the pointer to the previous element of the array
    ptr--;

    cout << *ptr;
}