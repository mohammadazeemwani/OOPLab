// Program to generate a pyramid pattern for a given number of rows (Assignment 4)
// This program takes in a number of rows and generates a pyramid pattern

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// #CSE-23-16