// Program to calculate income tax based on the given slab (Assignment 2)
// This program takes in an annual income and outputs the tax amount

#include <iostream>
using namespace std;

int main() {
    double income, tax;

    cout << "Enter your annual income: ";
    cin >> income;

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.20 + 12500;
    } else {
        tax = (income - 1000000) * 0.30 + 22500;
    }

    cout << "Your tax amount is: " << tax;

    return 0;
}

// #CSE-23-16