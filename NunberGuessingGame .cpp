#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int secretNumber = (rand() % 100) + 1;
    int guess, attempts = 0;
    bool guessed = false;

    cout << "========================================" << endl;
    cout << "     Welcome to Number Guessing Game" << endl;
    cout << "========================================" << endl;

    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    while (guessed == false)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < 1 || guess > 100)
        {
            cout << "Please enter a number between 1 and 100." << endl;
            attempts--;
        }
        else if (guess < secretNumber)
        {
            cout << "Too Low! Try a higher number." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too High! Try a lower number." << endl;
        }
        else
        {
            guessed = true;
        }
    }

    cout << "\nCorrect! You guessed the number!" << endl;
    cout << "The number was: " << secretNumber << endl;
    cout << "Total attempts: " << attempts << endl;

    if (attempts <= 5)
    {
        cout << "Excellent! You are a great guesser!" << endl;
    }
    else if (attempts <= 10)
    {
        cout << "Good job! Keep practicing." << endl;
    }
    else
    {
        cout << "Better luck next time!" << endl;
    }

    cout << "\nThanks for playing!" << endl;

    return 0;
}