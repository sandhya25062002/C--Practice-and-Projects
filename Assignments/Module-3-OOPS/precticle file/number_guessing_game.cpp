#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() 
{
    // Step 1: Generate a random number
    
    srand(time(0));              // seed random number generator with current time
    int secretNumber = rand() % 100 + 1;   // random number between 1 and 100

    int guess;       // variable for user input
    int attempts = 0; // count attempts

    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    // Step 2: Loop until the user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << " Congratulations! You guessed the number in "  << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}

