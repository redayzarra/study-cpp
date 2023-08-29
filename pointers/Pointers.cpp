#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30};

    // We will see the address of the first element of the array
    int* ptr = numbers;
    cout << ptr;
}