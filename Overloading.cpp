#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello" << " " << name;
}

// Signature = name + (number and type of parameters). Need to be unique
void greet(string title, string name) {
    cout << "Hello, " << title << " " << name;
}

int main() {
    greet("ReDay");
}