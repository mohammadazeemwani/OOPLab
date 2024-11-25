#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': 
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default: cout << "Invalid operator." << endl;
    }

    return 0;
}
