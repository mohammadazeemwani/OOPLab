// Program to repeatedly ask the user to input a positive integer and then reverse the digits (Assignment 6)
// This program stops when the user enters a negative integer

#include <iostream>
using namespace std;

int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num;

    while (true) {
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num < 0) {
            break;
        }

        cout << "Reversed: " << reverse(num) << endl;
    }

    return 0;
}

// #CSE-23-16