// Program to perform the following operations repeatedly: Find the factorial of a number, Find the GCD of two numbers, Find the LCM of two numbers, Exit the program (Assignment 9)
// This program uses a menu-driven approach

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Find the factorial of a number" << endl;
        cout << "2. Find the GCD of two numbers" << endl;
        cout << "3. Find the LCM of two numbers" << endl;
        cout << "4. Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                cout << "Factorial: " << factorial(n) << endl;
                break;
            }
            case 2: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "GCD: " << gcd(a, b) << endl;
                break;
            }
            case 3: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "LCM: " << lcm(a, b) << endl;
                break;
            }
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

// #CSE-23-16