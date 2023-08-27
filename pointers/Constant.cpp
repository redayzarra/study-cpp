#include <iostream>

using namespace std;

int main() {

    // Integer pointer cannot point to a different type including const
    const int x = 10;
    const int* ptr = &x;

    // Not const pointer
    int y = 20;
    ptr = &y;

    // Constant pointer pointing to constant integer
    const int z = 30;
    const int* const pointer = &x;
}