#include <iostream>

using namespace std;

int main() {
    char ch = 'a';
    cout << ch << endl;
    cout << +ch << endl;

    string name;
    cout << "Enter your name: " << endl;
    // cin >> name; Will ignore anything after space, including space
    getline(cin, name);
    cout << "Hi, " << name << "!" << endl;
}