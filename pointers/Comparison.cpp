#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;

    int* ptrX = &x;
    int* ptrY = &y;

    if (*ptrX < *ptrY) {
        cout << *ptrY << endl;
    }

    // Exercise
    int numbers[] = {10, 20, 30};
    int* ptr = &numbers[size(numbers) - 1];

    while (ptr >= numbers) {
        cout << *ptr << endl;
        ptr--;
    }
}