#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // seed the random number generator
    int secretNumber = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
    } while (guess != secretNumber);

    cout << " Congratulations! You guessed it!" << endl;
    cout << "The secret number was " << secretNumber << endl;
    cout << "It took you " << attempts << " attempts to win." << endl;

    return 0;
}