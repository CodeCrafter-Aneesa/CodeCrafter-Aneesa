#include <iostream>
using namespace std;

int main() {
    int num, digit1, digit2, digit3, digit4, sum;

    // Taking input from user
    cout << "Enter a 4-digit number: ";
    cin >> num;

    // Checking if the number is a valid 4-digit number
    if (num < 1000 || num > 9999) {
        cout << "Error: Please enter a valid 4-digit number!" << endl;
        return 1;  // Exit with an error code
    }

    // Extract digits using modulus and division
    digit1 = num % 10;   // Last digit
    num = num / 10;      // Remove last digit

    digit2 = num % 10;   // Second last digit
    num = num / 10;

    digit3 = num % 10;   // Third last digit
    num = num / 10;

    digit4 = num % 10;   // Fourth last digit (first digit)

    // Calculate sum
    sum = digit1 + digit2 + digit3 + digit4;

    // Display results
    cout << "Sum of the digits: " << sum << endl;

    return 0;
}
cc





    cout << "Enter a 4-digit number: ";
    cin >> num;
    cout << "Enter a valid 4-digit number:" << endl;
