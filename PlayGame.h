#ifndef PLAYGAME_H
#define PLAYGAME_H

using namespace std;

#include <iostream>
#include "GameBoard.h"
#include <random>


class PlayGame {
public:
    void turnByTurn(GameBoard board);
    void gameSimulation(GameBoard board);
private:
    
};

#endif