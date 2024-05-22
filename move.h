#include <iostream>
#include <string> 
#include <ctime>
#include <unistd.h>
#include <iomanip>
using namespace std;

const int SIZE = 3;

class board
{

public:
string gameBoard[SIZE][SIZE];

//Tool for player.
bool validMove(string playerMove);
bool validPlace(string location);
void changeBoardPlayer(string playerMove);
bool alreadyPlayed(string playerMove);

//Tool for the ai.
void changeBoardAi();

//Tool for both.
board();
void print();
bool winningState();

};