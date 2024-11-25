#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Result: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error: Division by zero." << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }

    return 0;
}
