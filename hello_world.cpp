// 1. LIBRARY: This tells the program to "include" tools for input and output.
// iostream = Input/Output Stream (like a river of data).
#include <iostream> 

// 2. NAMESPACE: This allows us to use standard names (like cout) directly.
// Without this, we would have to write 'std::cout' every time.
using namespace std; 

// 3. THE MAIN FUNCTION: This is the starting point of every C++ program.
// 'int' means the function will return an integer (a whole number) at the end.
int main() { 

    // 4. OUTPUT COMMAND: 
    // cout: Sends text to the screen.
    // <<: The "insertion operator" that pushes the text to the output.
    // ; : The semicolon. It acts like a "period" at the end of a sentence.
    cout << "I am learning C++ "; 

    // 5. RETURN: This sends a message back to the computer's Operating System.
    // '0' means "Everything finished successfully with no errors."
    return 0; 

} // The curly brace marks the end of the program's "body."