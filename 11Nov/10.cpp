#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }

    return 0;
}
