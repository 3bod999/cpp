
#include <iostream>
using namespace std;

int main() {
    // ---------------------------------------------------------
    // 1. FOR LOOP
    // Use this when you know exactly how many times to repeat.
    // Structure: (Start ; Condition ; Step)
    // ---------------------------------------------------------
    cout << "--- For Loop: Counting 1 to 5 ---" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }

    // ---------------------------------------------------------
    // 2. WHILE LOOP
    // Use this when you don't know the exact number of repeats.
    // It keeps running as long as the condition is TRUE.
    // ---------------------------------------------------------
    cout << "\n--- While Loop: Counting down ---" << endl;
    int counter = 3;
    while (counter > 0) {
        cout << "Countdown: " << counter << endl;
        counter--; // Important: change the value to avoid an infinite loop!
    }

    // ---------------------------------------------------------
    // 3. BREAK & CONTINUE
    // Break: Stops the loop completely and exits.
    // Continue: Skips only the current step and goes to the next one.
    // ---------------------------------------------------------
    cout << "\n--- Break and Continue Example ---" << endl;
    for (int j = 1; j <= 10; j++) {
        
        if (j == 3) {
            cout << "Skipping number 3 (Continue)" << endl;
            continue; // Skip the rest of this loop and go to j = 4
        }

        if (j == 7) {
            cout << "Stopping the loop at 7 (Break)" << endl;
            break; // Exit the loop immediately
        }

        cout << "Current j: " << j << endl;
    }

    return 0;
}