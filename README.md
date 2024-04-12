# Credit Card Number Validation

This program validates credit card numbers using the Luhn Algorithm. It allows users to enter a credit card number and determines whether it is a valid number or not.

## How to Use

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Enter a credit card number when prompted.
4. The program will validate the entered number and display whether it is a valid credit card number or not.
5. You can enter multiple credit card numbers for validation.
6. To exit the program, enter 'exit' when prompted for a credit card number.

## Luhn Algorithm

The Luhn Algorithm, also known as the "modulus 10" algorithm, is a simple checksum formula used to validate various identification numbers, such as credit card numbers, IMEI numbers, and Canadian Social Insurance Numbers.

The algorithm works as follows:

1. Double every second digit from the right, starting from the second-to-last digit. If the result is a two-digit number, add both digits to get a single-digit number.
2. Add all the resulting values, including the unchanged digits, to obtain a sum.
3. If the final sum is divisible by 10, the number is considered valid. Otherwise, it is invalid.

## Code Explanation

The code consists of the following functions:

- `isDigitString`: Checks if a given string consists only of digits.
- `validateCardNumber`: Implements the Luhn Algorithm to validate a credit card number.
- `main`: Handles user input, calls the validation function, and displays the result.

The program uses a while loop to continuously prompt the user for credit card numbers until 'exit' is entered. It validates each entered number using the Luhn Algorithm and displays whether it is a valid credit card number or not.
