// Program to check if a given year is a leap year (Assignment 1)
// This program takes in a year and determines if it's a leap year or not

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not a leap year.";
    }

    return 0;
}

// #CSE-23-16