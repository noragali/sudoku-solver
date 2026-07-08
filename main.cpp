#include <iostream>
#include "Sudoku.h"
using namespace std;

int main() {
    Sudoku sudoku;

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
