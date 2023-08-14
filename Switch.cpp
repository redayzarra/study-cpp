#include <iostream>

using namespace std;

int main() {
    cout << "1 - Create Account" << endl    
         << "2 - Change password" << endl
         << "3 - Quit" << endl << endl
         << "Select an option: " << endl;

        short input;
        cin >> input;

        // If-Else statments to write the code:

        /* if (input == 1) 
        *      cout << "You selected 1";
        *  else if (input == 2) ... */

       switch (input) {
            case 1:
                cout << "You selected 1" << endl;
                break;
            case 2:
                cout << "You selected 2" << endl;
                break;
            default: 
                cout << "Goodbye!" << endl;
       }

       // Exercise
        cout << "Enter two numbers: ";
        int first, second;
        cin >> first >> second;

        cout << "Enter a calculation: ";
        char ops;
        cin >> ops;

        switch (ops) {
            case '+': 
                cout << first + second;
                break;
            case '-':
                cout << first - second;
                break;
            default: 
                cout << "Invalid operator!" << endl;
        }
}