#ifndef GAMEBOARD_H
#define GAMEBOARD_H

using namespace std;

#include <vector>
#include <iostream>
//#include "PlayGame.h"


class GameBoard {
public:
    void createBoard();
    vector<vector<char>> getBoard();
    void setBoard(vector<vector<char>> board);
private:
    std::vector<std::vector<char>> board;
    int row;
    int col;
    int pins;
};

#endif
