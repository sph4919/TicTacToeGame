#include "move.h"

board::board()
{
for(int i=0;i<SIZE;i++)
  {
    for(int j=0;j<SIZE;j++)
      {
        gameBoard[i][j]='.';
      }
  }
  
}


void board::print()
{

  cout <<"  "<< "1" << " " << "2" << " " << "3" ;
    
  cout << endl;
  for(int i=0;i<SIZE;i++)
  {
    char toPrintABC ='A'+i;
    cout << toPrintABC << " ";
    for(int j=0;j<SIZE;j++)
      {
        cout << gameBoard[i][j] << " ";
      }
    cout << endl;
  }

}


bool board::validMove(string playerMove)
{

  if(isalpha(playerMove.at(0)) && isdigit(playerMove.at(1)))
  {
    return true;
  }
  else
  {
    cout << "THE MOVE IS INVALID, PLZ PLAY AGAIN" << endl;
    return false;
  }

}


bool board::validPlace(string location)
{
  char rowValue=location.at(0);
  char columnlocationValue=location.at(1);

  int rowlocation=0;
  int columnlocation=columnlocationValue - '0';
  
  if(rowValue=='A')
  {
    rowlocation=1;
  }
  else if(rowValue=='B')
  {
    rowlocation=2;
  }
  else if(rowValue=='C')
  {
    rowlocation=3;
  }


 if(rowlocation<=SIZE && rowlocation>0 && columnlocation<=SIZE && columnlocation>0) 
  {
    return true;
  }
  else
  {
    cout << "THE LOCATION IS OUTSIDE BOARD, PLZ TRY AGAIN" << endl;
    return false;
  }

  return -1;
}


bool board::alreadyPlayed(string playerMove)
{
  char rowValue=playerMove.at(0);
  char columnlocationValue=playerMove.at(1);

  int rowlocation=0;
  int columnlocation=columnlocationValue - '0' ;
  
  if(rowValue=='A')
  {
    rowlocation=1;
  }
  else if(rowValue=='B')
  {
    rowlocation=2;
  }
  else if(rowValue=='C')
  {
    rowlocation=3;
  }

rowlocation--;
columnlocation--;

if(gameBoard[rowlocation][columnlocation]=="O" || gameBoard[rowlocation][columnlocation]=="X" )
 {
   cout << "THIS IS ALREADY PLAYED , PLZ TRY AGAIN" << endl;
   return false; 
 }
else
 {
   return true;
 }

}


void board::changeBoardPlayer(string playerMove)
{

  char rowValue=playerMove.at(0);
  char columnValue=playerMove.at(1);

  int row=0;
  int column=columnValue - '0';
  if(rowValue=='A')
  {
    row=1;
  }
  else if(rowValue=='B')
  {
    row=2;
  }
  else if(rowValue=='C')
  {
    row=3;
  }

  row --;
  column --;

  gameBoard[row][column]='O';
}

