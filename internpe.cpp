#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}

