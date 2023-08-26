#include <iostream>

using namespace std;

int main() {
    int number = 10;
    cout << &number << endl;

    // Declaring an int pointer: address-of operator
    int* pointer = &number;

    // Pointing a pointer to null - prints 0
    int* ptr = nullptr;
    cout << ptr << endl;

    // Correct the exercise
    int x = 10;
    int y = 20;
    ptr = &x;   // Assign the address of x to ptr
    *ptr *= 2;  // Double the value pointed by ptr (which is x)
    ptr = &y;   // Assign the address of y to ptr
    *ptr *= 3;  // Triple the value pointed by ptr (which is y)

    cout << x << ", " << y << endl;

    return *pointer;
}
