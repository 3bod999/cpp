/**************************************************************
 * PROJECT: C++ FUNCTIONS COMPREHENSIVE GUIDE
 * DESCRIPTION: Everything you need to know about Functions.
 * TOPICS: Definition, Void vs Return, Parameters, Calling.
 **************************************************************/

#include <iostream>
#include <string>
using namespace std;

// ---------------------------------------------------------
// 1. VOID FUNCTION (No Return)
// Definition: A function that performs an action but 
// does NOT give a value back to the main program.
// ---------------------------------------------------------
void printWelcome() {
    cout << "Welcome to the Function Guide!" << endl;
    cout << "This function just prints text." << endl;
}

// ---------------------------------------------------------
// 2. FUNCTION WITH PARAMETERS (Inputs)
// Definition: We send data (arguments) to the function 
// so it can use them in its work.
// ---------------------------------------------------------
void sayHello(string name) {
    cout << "Hello, " << name << "! How are you?" << endl;
}

// ---------------------------------------------------------
// 3. FUNCTION WITH RETURN VALUE (The Result)
// Definition: This function calculates something and 
// sends the result back using the 'return' keyword.
// ---------------------------------------------------------
int multiplyNumbers(int a, int b) {
    int result = a * b;
    return result; // It sends an 'int' back
}

// ---------------------------------------------------------
// 4. COMPLEX FUNCTION (Multiple Inputs & Math)
// Example: Calculating Area of a Rectangle.
// ---------------------------------------------------------
double calculateArea(double length, double width) {
    return length * width; // Direct return without a variable
}

// ---------------------------------------------------------
// THE MAIN FUNCTION: Where the execution starts.
// ---------------------------------------------------------
int main() {
    // A. Calling a Void Function
    printWelcome(); 

    // B. Calling a Function with an Input
    sayHello("Abdo"); 

    // C. Calling a Function and STORING the result
    // We create a variable 'answer' to catch the returned value.
    int answer = multiplyNumbers(10, 5); 
    cout << "10 * 5 = " << answer << endl;

    // D. Calling a Function inside 'cout'
    // You don't always need a variable to catch the result.
    cout << "The area of the room is: " << calculateArea(5.5, 4.0) << " m2" << endl;

    return 0; // Success
}