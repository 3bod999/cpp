#include <iostream>  
#include <string>    

using namespace std; 

int main() {
    // ---------------------------------------------------------
    // 1. CONSTANTS (Fixed Values)
    // Use 'const' when the value should NEVER change.
    // It is a good habit to use UPPERCASE for constant names.
    // ---------------------------------------------------------
    const double PI = 3.14159;      // Example: Math constants
    const int BIRTH_YEAR = 2000;    // Example: Something that never changes
    
    // ---------------------------------------------------------
    // 2. DATA TYPES (Variable Boxes)
    // These are boxes in the computer's memory to store data.
    // ---------------------------------------------------------
    
    // WHOLE NUMBERS (Integers)
    int age = 25;                   // Standard whole number (4 Bytes)
    long long debt = 9000000000LL;  // Very large whole number (8 Bytes)

    // DECIMAL NUMBERS (Floating Point)
    float price = 10.5f;            // Simple decimal (less precise)
    double distance = 1250.85;      // Precise decimal (use this most of the time)

    // TEXT AND CHARACTERS
    char grade = 'A';               // A single character (uses single quotes ' ')
    string message = "Hello!";      // A full sentence (uses double quotes " ")

    // LOGIC
    bool isFinished = false;        // Can only be 'true' or 'false'

    // ---------------------------------------------------------
    // 3. INTERACTING WITH THE USER (Input & Output)
    // ---------------------------------------------------------

    // OUTPUT (Printing to the screen)
    cout << "--- PROGRAM START ---" << endl;
    cout << "My age is: " << age << endl;

    // INPUT (Getting data from the user)
    // Let's ask the user to change the 'age' and 'message'
    cout << "Enter your new age: ";
    cin >> age;                      // The computer waits for your input

    cout << "Enter a new message: ";
    cin >> message;                  // Note: 'cin' stops at the first space

    // ---------------------------------------------------------
    // 4. DISPLAYING FINAL RESULTS
    // ---------------------------------------------------------
    cout << "\n--- UPDATED DATA ---" << endl;
    cout << "New Age: " << age << " years old." << endl;
    cout << "New Message: " << message << endl;
    cout << "The constant PI is still: " << PI << endl;

    // If you try to write (PI = 5.0;), the computer will show an ERROR.

    return 0; 
}