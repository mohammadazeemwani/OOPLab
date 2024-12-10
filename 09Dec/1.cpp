#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
    int first_r, first_i, second_r, second_i, modulus_first, modulus_second;
    cout << "For real no.1, enter:" << endl;
    cout << "         real part: ";
    cin >>  first_r;
    cout << "         imaginary part: ";
    cin >> first_i;

    cout << endl << "For real no.2, enter:" << endl;
    cout << "         real part: ";
    cin >>  second_r;
    cout << "         imaginary part: ";
    cin >> second_i;

    modulus_first = pow(first_r, 2) + pow(first_r, 2); //  no need to take underroot
    modulus_second = pow(second_r, 2) + pow(second_r, 2); //  no need to take underroot

    if (modulus_second>modulus_first) 
        cout << "Second number is greater" << endl;
    else if (modulus_first>modulus_second)
        cout << "First number is greater" << endl;
    else 
        cout << "Both are equal";


}