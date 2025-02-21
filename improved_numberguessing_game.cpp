
---

### **2. Improved Number Guessing Game with Replay Option**

This version of the guessing game will allow the user to play multiple rounds without restarting the program. After each round, they will be asked if they want to play again.

#### **Code (Improved Number Guessing Game):**

```cpp
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

// Function to play a single round of the guessing game
void playGame() {
    int target = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > target) {
            cout << "Too high! Try again.\n";
        } else if (guess < target) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != target);
}

int main() {
    srand(time(0));  // Seed the random number generator
    char playAgain;

    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing the number guessing game!\n";
    return 0;
}
