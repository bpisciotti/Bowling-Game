#include "PlayGame.h"
#include "BowlingScoreboard.h"
#include <unistd.h>

void PlayGame::turnByTurn(GameBoard boar) {
    cout << "Turn by turn: " << endl;
    char enter;
    BowlingScoreboard player1;
    BowlingScoreboard player2;

    int roll1;
    int roll2;
    for (int i = 0; i < 20; i++) {
     cout << "Player 1" << endl;
     roll1 = (rand() % 10) + 1;
     cout << "Roll 1 Pins knocked: " << roll1 << endl << endl;
     usleep(100000);

     if (roll1 != 10) {
     roll2 = rand() % (roll1 - 10);
     cout << "Roll 2 Pins knocked: " << roll2 << endl;
     player1.addFrame(roll1, roll2);
     usleep(100000);
     cout << endl;
     }

     cout << "Player 2" << endl;
     roll1 = (rand() % 10) + 1;
    cout << "Roll 1 Pins knocked: " << roll1 << endl << endl;
     usleep(100000);

     if (roll1 != 10) {
     roll2 = rand() % (roll1 - 10);
     cout << "Roll 2 Pins knocked: " << roll2 << endl;
     player2.addFrame(roll1, roll2);
     cout << endl;
     }
    }
    
    cout << endl;
    cout << "Total Scores" << endl;

    int player1Points = player1.calculateTotalScore();
    int player2Points = player2.calculateTotalScore();

    cout << "Player 1 Score: " << player1Points << endl;
    cout << "Player 2 Score: " << player2Points << endl;

    if (player1Points > player2Points) {
        cout << "Player 1 Won!" << endl;
    }
    else {
        cout << "Player 2 Won!" << endl;
    }

    cout << endl << endl;
    

}

void PlayGame::gameSimulation(GameBoard boar) {
    cout << "Simulation" << endl;

}