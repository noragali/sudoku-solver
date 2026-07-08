#include <iostream>
#include "Sudoku.h"
using namespace std;

int main() {
    Sudoku sudoku;
    int choice;

    cout << "Pick a puzzle: " << endl;
    cout << "1. Easy" <<endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "Choice: ";

    while (!(cin >> choice) || choice < 1 || choice > 3) {
            cout << "Invalid choice. Try again: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

    switch(choice) {
    case 1:
        if(!sudoku.loadFromFile("easy.txt"))
        {
            cout << "Failed to open puzzle file!\n";
            return 1;
        }
        break;
    case 2:
        if(!sudoku.loadFromFile("medium.txt"))
        {
            cout << "Failed to open puzzle file!\n";
            return 1;
        }
        break;
    case 3:
        if(!sudoku.loadFromFile("hard.txt"))
        {
            cout << "Failed to open puzzle file!\n";
            return 1;
        }
        break;
    default:
        cout << "There is not a puzzle like that!";
        return 1;
        break;
    }

    cout << "Initial board: " << endl;
    sudoku.printBoard();

    if(sudoku.solve()) {
        cout<<"\nSolved board:\n";
        sudoku.printBoard();
    } else {
        cout<<"No solution exists!" << endl;
    }

    return 0;
}
