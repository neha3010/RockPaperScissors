#include <iostream>

// Defining Constant Variables
const char rock = 'r';
const char paper = 'p';
const char scissors = 's';

using namespace std;

char getComputerOption() {
    srand(time(0));

    // generating a random number
    int num = rand() % 3 + 1;

    if (num == 1) 
        return 'r';
    
    if (num == 2) 
        return 'p';
    
    if (num == 3) 
        return 's';
     
}

char getUserOption() {
    char c;
    cout << "Welcome to Rock, Paper, Scissors Game!!" << endl;
    cout << "You will go first! Choose one the following:" << endl;
    cout << "r - rock" << endl << "p - paper" << endl << "s - scissors" << endl;
    cin >> c;

    while (c!='r' && c!='p' && c!='s') {
        cout << "Please enter one of the following options only." << endl;
        cout << "(r) for rock" << endl << "(p) for paper" << endl << "(s) for scissors" << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char op) {
    if (op == 'r') cout << "Rock" << endl;
    if (op == 'p') cout << "Paper" << endl;
    if (op == 's') cout << "Scissors" << endl;
}

void winner (char op, char opC) {
    if (op == rock && opC == paper) {
        cout << "Computer won! Paper covers rock." << endl;
    } else if (op == rock && opC == scissors) {
        cout << "You won! Rock breaks scissors." << endl;
    } else if (op == paper && opC == scissors) {
        cout << "Computer won! Scissors cuts paper." << endl;
    } else if (op == paper && opC == rock) {
        cout << "You won! Paper covers rock." << endl;
    } else if (op == scissors && opC == paper) {
        cout << "You won! Scissors cuts paper." << endl;
    } else if (op == scissors && opC == rock) {
        cout << "Computer won! Rock breaks scissors." << endl;
    } else {
        cout << "Its a tie!" << endl;
    }
}

int main () {
    char opPlayer;
    char opComp;

    opPlayer = getUserOption();
    cout << "Your choice: " << endl;
    showSelectedOption(opPlayer);

    cout << "Computer's choice is: " << endl;
    opComp = getComputerOption();
    showSelectedOption(opComp);

    winner(opPlayer, opComp);

    return 0;
}