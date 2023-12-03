#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>  // Add this line for std::numeric_limits
#include <limits.h> // Add this line for INT_MAX
using namespace std;
int main() {
    srand(static_cast<unsigned>(time(0))); // Seed for rand() based on current time

    int secretNumber = rand() % 100; // Generate a random number between 0 and 99
    int guess;
    bool correctGuess = false;

    cout<<"Welcome to the Number Guessing Game!"<<endl;

    while (!correctGuess)
        {
        cout << "Enter your guess (0-99): ";
        cin >> guess;

        if (cin.fail()) {
            // Input is not an integer
            cout << "Invalid input. Please enter a valid integer." <<endl;
            cin.clear(); // Clear the error flag
            cin.ignore(INT_MAX, '\n'); // Change to INT_MAX for std::numeric_limits<std::streamsize>::max()
        }
        else {
            if (guess < 0 || guess >= 100)
                {
                cout << "Invalid guess. Please enter a number between 0 and 99." <<endl;
            }
             else {
                if (guess == secretNumber) {
                    cout << "Congratulations! You guessed the correct number." <<endl;
                    correctGuess = true;
                }
            else {
                    cout << "Incorrect guess. Try again." <<endl;
                }
            }
        }
    }

    return 0;
}
