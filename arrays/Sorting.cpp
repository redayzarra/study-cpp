#include <iostream>
#include <vector>

using namespace std;

// Forward declarations
vector<int> merge(int left[], int leftSize, int right[], int rightSize);
vector<int> mergeSort(int arr[], int size);

// Merge function for merge sort.
vector<int> merge(int left[], int leftSize, int right[], int rightSize) {
    vector<int> res;
    int i, j;
    i = j = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            res.push_back(left[i]);
            i++;
        } 
        else {
            res.push_back(right[j]);
            j++;
        }
    }

    while (i < leftSize) {
        res.push_back(left[i]);
        i++;
    }
    while (j < rightSize) {
        res.push_back(right[j]);
        j++;
    }

    return res;
}

// Main mergesort recursive function
vector<int> mergeSort(int arr[], int size) {
    if (size <= 1) {
        return vector<int>(arr, arr + size);
    }

    int mid = (size) / 2;
    vector<int> left = mergeSort(arr, mid);
    vector<int> right = mergeSort(arr + mid, size - mid);

    return merge(&left[0], left.size(), &right[0], right.size());
}

// Calling the function
int main() {
    int arr[] = {12, 11, 15, 34, 1, 2, 5, 6, 8};
    int size = sizeof(arr) / sizeof(int);

    vector<int> sorted = mergeSort(arr, size);

    for (int val: sorted) {
        cout << val << ", ";
    }
}

