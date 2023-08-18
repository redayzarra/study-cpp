#include <iostream>

using namespace std;

int main() {

    int number;
    do {
        cout << "Enter a number: ";
        cin >> number;
    } while (number < 1 || number > 5);
    
}