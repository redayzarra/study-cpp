#include <iostream>

using namespace std;

int main() {

    // Integer pointer cannot point to a constant value
    int x = 10;
    int* ptr = &x;
}