#include "GameBoard.h"

void GameBoard::createBoard() {
    int row = 4;
    int col = 7;

     vector<vector<char>> boardCreation(row, vector<char>(col, ' '));

    boardCreation = { 
                    {'x', ' ', 'x', ' ', 'x', ' ', 'x'},
                    {' ', 'x', ' ', 'x', ' ', 'x', ' '},
                    {' ', ' ', 'x', ' ', 'x', ' ', ' '},
                    {' ', ' ', ' ', 'x', ' ', ' ', ' '}
                    };

         // Print the board
    for (const auto& row : boardCreation) {
        for (char cell : row) {
            cout << cell << ' ';
        }
        cout << endl;
    }
    
    this->board = boardCreation;
    // (0,0)(space)(0,2)(space)(0,4)(space)(0,6)
    // (space)(1,1)(space)(1,3)(space)(1,5)(space)
    //  (space)(space)(2,2)(space)(2,4)(space)
    //         (3,3)


}

vector<vector<char>> GameBoard::getBoard() {
    return this->board;
}

void GameBoard::setBoard(vector<vector<char>> board) {
    this->board = board;
}