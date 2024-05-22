#include"move.h"

void board::changeBoardAi()
{
  srand(time(0));

  int randRow;
  int randCol;
  do
  {
   
   randRow=1+rand()%3;
   randCol=1+rand()%3;
    randRow --;
    randCol --;

  }while(gameBoard[randRow][randCol]=="O" || gameBoard[randRow][randCol]=="X");

gameBoard[randRow][randCol]='X';
  
}