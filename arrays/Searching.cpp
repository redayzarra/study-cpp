#include <iostream>

using namespace std;

// Classic linear search in C++
int linearSearch(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int target = 4;

    int res = linearSearch(arr, size, target);

    cout << res;
}