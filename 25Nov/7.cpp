// Program to find and print all pairs (x, y) such that x^2 + y^2 = n (Assignment 7)
// This program takes in a number and prints all pairs (x, y) such that x^2 + y^2 = n

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int x = 0; x * x <= n; x++) {
        for (int y = 0; y * y <= n; y++) {
            if (x * x + y * y == n) {
                cout << "(" << x << ", " << y << ")" << endl;
            }
        }
    }

    return 0;
}

// #CSE-23-16