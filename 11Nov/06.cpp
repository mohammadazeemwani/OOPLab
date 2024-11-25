#include <iostream>
using namespace std;

int main() {
    int choice, subChoice;
    cout << "Menu:\n1. Vegetarian\n2. Non-Vegetarian\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Vegetarian Menu:\n1. Paneer\n2. Salad\nEnter your choice: ";
            cin >> subChoice;
            switch (subChoice) {
                case 1: cout << "You chose Paneer." << endl; break;
                case 2: cout << "You chose Salad." << endl; break;
                default: cout << "Invalid option." << endl;
            }
            break;
        case 2:
            cout << "Non-Vegetarian Menu:\n1. Chicken\n2. Fish\nEnter your choice: ";
            cin >> subChoice;
            switch (subChoice) {
                case 1: cout << "You chose Chicken." << endl; break;
                case 2: cout << "You chose Fish." << endl; break;
                default: cout << "Invalid option." << endl;
            }
            break;
        default: cout << "Invalid choice." << endl;
    }

    return 0;
}
