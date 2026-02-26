#include <iostream>
using namespace std;

int main() {
    int secretNum = 7; // You can change this
    int guess;
    int attempts = 0; // Bonus: to count tries

    cout << "--- Welcome to the Guessing Game ---" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++; // Increase attempts by 1

       
        if (guess == secretNum){
            cout << " win "<<endl; 
            break; 
        }
        else if (guess > secretNum) {
            cout << "Too high "<<endl;
            
            
        }
        else if (guess < secretNum ){
            cout << "too  low " <<endl; 
        }
        
        if (attempts == 5){
            break;

        }
        
    }

    return 0;
}