#include"move.h"

bool board::winningState()
{

//row 1
if(gameBoard[0][0]=="O" && gameBoard[0][1]=="O" && gameBoard[0][2]=="O" )
  {  
    return true;
  }
if(gameBoard[0][0]=="X" && gameBoard[0][1]=="X" && gameBoard[0][2]=="X" )
  {
    return true;
  }


//row 2
if(gameBoard[1][0]=="O" && gameBoard[1][1]=="O" && gameBoard[1][2]=="O" )
  {
    return true;
  }
if(gameBoard[1][0]=="X" && gameBoard[1][1]=="X" && gameBoard[1][2]=="X" )
  {
    return true;
  }


//row 3
if(gameBoard[2][0]=="O" && gameBoard[2][1]=="O" && gameBoard[2][2]=="O" )
  {
    return true;
  }
if(gameBoard[2][0]=="X" && gameBoard[2][1]=="X" && gameBoard[2][2]=="X" )
  {
    return true;
  }


//column 1
if(gameBoard[0][0]=="O" && gameBoard[1][0]=="O" && gameBoard[2][0]=="O" )
  {
    return true;
  }
if(gameBoard[0][0]=="X" && gameBoard[1][0]=="X" && gameBoard[2][0]=="X" )
  {
    return true;
  }


//column 2
if(gameBoard[0][1]=="O" && gameBoard[1][1]=="O" && gameBoard[2][1]=="O" )
  {
    return true;
  }
if(gameBoard[0][1]=="X" && gameBoard[1][1]=="X" && gameBoard[2][1]=="X" )
  {
    return true;
  }


//column 3
if(gameBoard[0][2]=="O" && gameBoard[1][2]=="O" && gameBoard[2][2]=="O" )
  {
    return true;
  }
if(gameBoard[0][2]=="X" && gameBoard[1][2]=="X" && gameBoard[2][2]=="X" )
  {
    return true;
  }


//diagonal 1
if(gameBoard[0][0]=="O" && gameBoard[1][1]=="O" && gameBoard[2][2]=="O" )
  {
    return true;
  }
if(gameBoard[0][0]=="X" && gameBoard[1][1]=="X" && gameBoard[2][2]=="X" )
  {   
    return true;
  }


//diagonal 2
if(gameBoard[0][2]=="O" && gameBoard[1][1]=="O" && gameBoard[2][0]=="O" )
  {
     return true; 
  }
if(gameBoard[0][2]=="X" && gameBoard[1][1]=="X" && gameBoard[2][0]=="X" )
  {
     return true;
  }

return false;

}