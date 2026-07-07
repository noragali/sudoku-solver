#include <iostream>
#include "Sudoku.h"
using namespace std;

void Sudoku::printBoard()
{
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == 0)
                cout << ". ";
            else
                cout << board[row][col] << " ";

            if (col == 2 || col == 5)
                cout << "| ";
        }

        cout << endl;

        if (row == 2 || row == 5)
            cout << "---------------------" << endl;
    }
}
