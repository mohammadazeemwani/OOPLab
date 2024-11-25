// Program to create a simple calculator using a switch statement (Assignment 3)
// This program takes in two numbers and a choice of operation and performs the calculation

#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Sum: " << num1 + num2;
            break;
        case 2:
            cout << "Difference: " << num1 - num2;
            break;
        case 3:
            cout << "Product: " << num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout << "Quotient: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        case 5:
            cout << "Modulus: " << num1 % num2;
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}

// #CSE-23-16