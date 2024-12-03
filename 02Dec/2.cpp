/*
Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
*/

#include<iostream>
using namespace std;

float convertF2C(float fahrenheit) {
    // we will return celsius from here
    return (fahrenheit - 32) * static_cast<float>(5)/9;
}

float convertC2F(float celsius) {
    // we will return fahrenheit from here
    return celsius * (float)9/5 + 32;
}

int main()
{
    int userSelection=1;
    float tempValue;
    cout << "Type 1 to convert Fahrenheit to Celsius," << endl;
    cout << "      2 to convert Celsius to Fahrenheit: ";
    cin >> userSelection;

    cout << "Enter temperature in " << (userSelection == 1 ? "Fahrenheit" : "Celsius") << ": ";
    cin >> tempValue;

    cout << "In " << (userSelection == 1 ? "Fahrenheit" : "Celsius") << "that's " << 
    (userSelection == 1 ? convertF2C(tempValue) : convertC2F(tempValue));

}