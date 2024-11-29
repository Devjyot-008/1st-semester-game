#include <iostream>
#include <random>
#include <ctime>
using namespace std;

char computerChoice() {
    int move;
    srand(time(NULL));
    move = rand() % 3;
    
    if (move == 0) {
        return 'R';
    } else if (move == 1) {
        return 'P';
    } else {
        return 'S'; 
    }
}

void solve(char y, char c) {
    if (y == c) {
        cout << "It's a DRAW" << endl;
    } else if ((y == 'R' && c == 'P') || (y == 'P' && c == 'S') || (y == 'S' && c == 'R')) {
        cout << "Computer wins, you Lost" << endl;
    } else {
        cout << "Congratulations! You won" << endl;
    }
}

int main() {
    int n = 1;
    while (n == 1) {
        char ch;
        cout << "Enter R for rock, P for paper, S for scissors." << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 'R' || ch == 'P' || ch == 'S') {
            char computer_choice = computerChoice();
            cout << "Computer chose: " << computer_choice << endl;
            cout << "You chose: " << ch << endl;
            solve(ch, computer_choice);
        } else {
            cout << "Invalid choice" << endl;
        }
        cout << "Want to play again ?" << endl;
        cout << "Enter Y/y or N/n : ";
        char c; cin >> c;
        if (c=='Y' || c=='y') {
            n = 1;
        } else {
            n = 2;
        }
    }
    return 0;
}