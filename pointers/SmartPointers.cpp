#include <iostream>
#include <memory>

using namespace std;

int main() {
    int* x = new int;
    delete x; // We cannot delete the same pointer twice

    // Smart Pointers: Unique
    unique_ptr<int> x(new int); // Creating a new unique ptr object
}