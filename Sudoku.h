#include <string>

class Sudoku{
private:
    int board[9][9];

public:
    void printBoard();
    bool solve();
    bool isValid(int row, int col, int num);
    bool findEmpty(int& row, int& col);
    bool loadFromFile(const std::string &filename);
};
