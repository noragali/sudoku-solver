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

bool Sudoku::isValid(int row, int col, int num) {
    for(int i=0; i<9; i++) {
        if(board[row][i] == num)
            return false;
        else if(board[i][col] == num)
            return false;
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(board[startRow+i][startCol+j] == num)
                return false;
        }
    }
    return true;
}


