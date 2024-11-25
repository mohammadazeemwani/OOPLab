// Program to find all subsets of an array whose sum equals a given target value (Assignment 10)
// This program takes in an array and a target sum and outputs all subsets that sum up to the target

#include <iostream>
using namespace std;

void findSubsets(int arr[], int n, int target) {
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                sum += arr[j];
            }
        }
        if (sum == target) {
            cout << "Subset: ";
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) != 0) {
                    cout << arr[j] << " ";
                }
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target sum: ";
    cin >> target;

    findSubsets(arr, n, target);

    return 0;
}

// #CSE-23-16