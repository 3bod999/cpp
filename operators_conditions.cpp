#include <iostream>
using namespace std;

int main() {
    // ---------------------------------------------------------
    // 1. ARITHMETIC OPERATORS (Math)
    // ---------------------------------------------------------
    int num1 = 10;
    int num2 = 3;

    int sum = num1 + num2;        // Add
    int diff = num1 - num2;       // Subtract
    int product = num1 * num2;    // Multiply
    int quotient = num1 / num2;   // Divide (3)
    int remainder = num1 % num2;  // Modulo (1)

    // ---------------------------------------------------------
    // 2. IF / ELSE CONDITIONS (Range Decisions)
    // Use this to check ranges (like scores from 0 to 100).
    // ---------------------------------------------------------
    cout << "Enter your exam score (0-100): ";
    int score;
    cin >> score;

    if (score >= 50) {
        cout << "Congratulations! You passed." << endl;
    } 
    else {
        cout << "Sorry, you failed." << endl;
    }

    // ---------------------------------------------------------
    // 3. SWITCH CASE (Specific Choice Decisions)
    // Use this for specific options (1, 2, 3...) instead of many IFs.
    // ---------------------------------------------------------
    cout << "\nChoose a reward for your score:" << endl;
    cout << "1. Chocolate \n2. Laptop \n3. Trip" << endl;
    int gift;
    cin >> gift;

    switch (gift) {
        case 1:
            cout << "You chose: Chocolate!" << endl;
            break; // STOP here
        case 2:
            cout << "You chose: A new Laptop!" << endl;
            break; // STOP here
        case 3:
            cout << "You chose: A summer Trip!" << endl;
            break; // STOP here
        default:
            // This runs if the user enters any other number
            cout << "Invalid choice. No gift for you." << endl;
            break;
    }

    return 0; 
}