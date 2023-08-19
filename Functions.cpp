#include <iostream>

using namespace std;

void greet(string firstName, string lastName) {
    cout << "Hello, " + firstName + " " + lastName + "!";
}

int main() {
    greet("ReDay", "Zarra");
}