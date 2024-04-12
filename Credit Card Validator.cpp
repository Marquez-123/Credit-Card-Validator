#include <bits/stdc++.h>
using namespace std;

// Function to check if a string contains only digits
bool isDigitsOnly(const string& str) {
    int length = str.length();
    for (int i = 0; i < length; i++) {
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}

// Function to validate a credit card number using the Luhn Algorithm
bool isValidCreditCard(const string& cardNumber) {
    int length = cardNumber.length();
    int sum = 0;
    
    // Step 1: Double every second digit from the right
    // If the result is a two-digit number, add the digits together
    for (int i = length - 2; i >= 0; i -= 2) {
        int doubledDigit = ((cardNumber[i] - '0') * 2);
        if (doubledDigit > 9) {
            doubledDigit = (doubledDigit / 10) + (doubledDigit % 10);
        }
        sum += doubledDigit;
    }
    
    // Step 2: Add the remaining digits (odd positions) to the sum
    for (int i = length - 1; i >= 0; i -= 2) {
        sum += (cardNumber[i] - '0');
    }
    
    // Step 3: Check if the sum is divisible by 10
    // If true, the credit card number is valid; otherwise, it's invalid
    return (sum % 10 == 0);
}

int main() {
    string creditCardNumber;
    
    while (true) {
        // Prompt the user to enter a credit card number
        cout << "Please enter a credit card number to validate: ";
        cin >> creditCardNumber;
        
        // Check if the user wants to exit the program
        if (creditCardNumber == "exit")
            break;
        
        // Check if the input contains only digits
        else if (!isDigitsOnly(creditCardNumber)) {
            cout << "Invalid input! Credit card number should contain only digits." << endl;
            continue;
        }
        
        // Check if the credit card number has exactly 12 digits
        else if (creditCardNumber.length() != 12) {
            cout << "Invalid length! Credit card number should have 12 digits." << endl;
            continue;
        }
            
        // Validate the credit card number using the Luhn Algorithm
        bool isValid = isValidCreditCard(creditCardNumber);
        
        // Display the result of the validation
        cout << (isValid ? "Valid credit card number!" : "Invalid credit card number!") << endl;
        
        continue;        
    }

    return 0;
}