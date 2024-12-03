/* 
Assume that you want to generate a table of multiples of any given number. Write a pro-
gram that allows the user to enter the number and then generates the table, formatting it
into 10 columns and 20 lines.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n, varyN=0;
    cout << "Enter the number to write: ";
    cin >> n;

    for (int i=0; i<20; i++) {
        for (int j=0; j<10; j++) {
            // n needs to be constant eg: 7
            varyN+=n;
            cout << setw(5) << varyN;
        }
        cout << endl;
    }
}