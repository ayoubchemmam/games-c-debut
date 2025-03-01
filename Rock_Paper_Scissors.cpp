#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    string playerChoice;
    string computerChoice;
    int computerRandom = rand() % 3; // Generate a random number between 0 and 2

    // Assign computer's choice based on random number
    if (computerRandom == 0) {
        computerChoice = "rock";
    } else if (computerRandom == 1) {
        computerChoice = "paper";
    } else {
        computerChoice = "scissors";
    }

    // Get player's choice
    cout << "Enter rock, paper, or scissors: ";
    cin >> playerChoice;

    // Display choices
 
    cout << "Player's choice: " << playerChoice << endl;
    cout << "Computer's choice: " << computerChoice << endl;

    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == "rock" && computerChoice == "scissors") ||
               (playerChoice == "paper" && computerChoice == "rock") ||
               (playerChoice == "scissors" && computerChoice == "paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}