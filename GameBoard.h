#ifndef GAMEBOARD_H
#define GAMEBOARD_H

using namespace std;

#include <vector>
#include <iostream>


class GameBoard {
public:
    void createBoard();
    int getBoard();
    void setBoard(int pins);
private:
    std::vector<std::vector<char>> board;
    int row;
    int col;
    int pins;
};

#endif
