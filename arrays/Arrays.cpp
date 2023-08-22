#include <iostream>
#include <string>

using namespace std;

int main() {
    // Allocate a static array of 5 integers. They are all zero's rn.
    int array[5] = {10, 20};

    string names[3];

    cout << "Name: " << endl;
    getline(cin, names[0]);
    cout << "Name: " << endl;
    getline(cin, names[1]);
    cout << "Name: " << endl;
    getline(cin, names[2]);

    cout << names[0] << endl  
         << array << endl;

    // Static array - 0 indexed. All other elements will be zero
    int nums[5] = {10, 20};

    // Retuns the address of the array
    cout << nums;

    // Iterate over the elements of the array
    for (int num: nums) {
        cout << num << endl;
    }

    // Iterate over the indices of the array
    for (int i = 0; i < size(nums); i++) {
        cout << nums[i] << endl;
    }
}