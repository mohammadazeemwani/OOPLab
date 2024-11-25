// Program to find and print all prime numbers less than or equal to a given number (Assignment 5)
// This program takes in a number and prints all prime numbers less than or equal to it

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime numbers less than or equal to " << num << " are: ";
    for (int i = 2; i <= num; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}

// #CSE-23-16