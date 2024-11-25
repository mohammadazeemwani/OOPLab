#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Number is greater than zero";
    } else if (num == 0) {
        cout << "Number is equal to zero";
    } else {
        cout << "Number is less than zero";
    }

    return 0;
}