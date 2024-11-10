#include <iostream>

int main() {
    int num, originalNum, reversedNum = 0;
    
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    originalNum = num; 
    
    // Reverse the number
    while (num > 0) {
        int digit = num % 10;           // Geting last digit
        reversedNum = (reversedNum * 10) + digit;  // Adding digit to reversed number
        num = num / 10;                 // Removing last digit
    }
    
    // Check if palindrome
    if (originalNum == reversedNum) {
        std::cout << originalNum << " is a palindrome.\n";
    } else {
        std::cout << originalNum << " is not a palindrome.\n";
    }
    
    return 0;
}