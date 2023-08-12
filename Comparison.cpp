#include <iostream>

using namespace std;

int main() {
    int x = 10;
    x >= 5; // Exactly like Python

    bool res = x != 5; 
    cout << boolalpha << res << endl;

    res = (x == 10);
    cout << boolalpha << res;

    char first = 'a';
    char second = 'A';
    res = (first == second);
}