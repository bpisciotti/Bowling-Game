#include "GameBoard.h"

void GameBoard::createBoard() {
    int row = 4;
    int col = 7;

    vector<vector<char>> boardCreation(row, vector<char>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = i; j < col; j++) {

            boardCreation[i][j+2] = 'x';

           // boardCreation[i]
            
            cout << boardCreation[i][j];
        }
        cout << endl;
        col--;
    }
    // (0,0)(space)(0,2)(space)(0,4)(space)(0,6)
    // (space)(1,1)(space)(1,3)(space)(1,5)(space)
    //  (space)(space)(2,2)(space)(2,4)(space)
    //         (3,3)


}

int GameBoard::getBoard() {

}

void GameBoard::setBoard(int pins) {

}