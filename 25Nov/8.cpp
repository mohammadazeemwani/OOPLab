// Program to print a checkerboard pattern of size n x n (Assignment 8)
// This program takes in a size and prints a checkerboard pattern

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the checkerboard: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "# ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

// #CSE-23-16