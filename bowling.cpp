#include "GameBoard.h"
#include "PlayGame.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

/**
 *  This menu gives the user game options. A user can do a turn-by-turn game or a simulation.
 *  @pre option == 1 AND option == 2 AND option == x
 * 
 *  @post option == 1 (turn by turn executed), option == 2 (simulation executed), option == x (program terminates) * 
 * 
 *  @return 
 * 
*/
int main () {

    char option;
    do {
        cout << "Welcome to Bryan's Bowling Game!" << endl;
        cout << "Choose from the option below" << endl;

        cout << "--- [1] Turn by Turn (press 1) ---" << endl;
        cout << "--- [2] Simulation (press 2) -----"    << endl;
        cout << "--- [X] Exit Game (press x) ------" << endl;
 
        cin >> option;

        if (option == '1') {
            PlayGame game;
            GameBoard board1;
            board1.createBoard();
            game.turnByTurn(board1);
        }
        else if (option == '2') {
            PlayGame game;
            GameBoard board1;
            board1.createBoard();
            game.gameSimulation(board1); 
        }
        
        if (option != '1' && option != '2' && toupper(option) != 'X') {
            cout << "Please choose valid option" << endl;
        }
        
    } while (toupper(option) != 'X');



}