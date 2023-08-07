#include <iostream>

using namespace std;

int main() {

    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = true;
    
    int number = 0b11111111;
    cout << number << price << interestRate 
         << fileSize << letter << isValid;

    short num = 100;
    int another = num;
    cout << another;
}