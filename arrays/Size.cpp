#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30};

    // int takes 4 bytes while size_t takes 8
    cout << sizeof(int) << endl;
    cout << sizeof(size_t) << endl;
    cout << numbers;
}