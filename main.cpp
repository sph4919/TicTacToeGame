#include"move.h"

int main()
{
cout << endl;
cout  << "                          Wlc to the game of the Tic - Tac - Toe " << endl << endl;

cout << "                       You will Play 'O' and the computer will play 'X'. " << endl;

board state;
cout << "                                   Printing the game board" << endl;
state.print();
cout << endl;



string playerMove;


do
{
  cout << "PLAYERS TURN , PLZ ENTER THE MOVE" << endl;
  cin >> playerMove;

  bool myTrueMove=false;

  if(state.validMove(playerMove) && state.validPlace(playerMove) && state.alreadyPlayed(playerMove))
    {
     state.changeBoardPlayer(playerMove);
     state.print();
     if(state.winningState())
       {
            cout << "                                                                                   YOU WIN THE GAME BUDDY " << endl;
            break;
       }
     sleep(1);
     myTrueMove=true;
    }

  if(myTrueMove)
    {
     cout << "AI'S TURN TO PLAY . GENERATING THE MOVE AUTOMATICALLY :- " << endl;
     state.changeBoardAi();
     state.print();
     if(state.winningState())
       {
        cout << "                                                                                                    AI WIN THE GAME " << endl;
        break;
       }
    }

}while(playerMove!="Exit");

cout << "                                          WELL PLAYED, THIS GAME WAS DESIGNED TO WIN OR LOSE , THE AI WHICH IS CREATED MAKE YOU LOOSE OF WIN THE GAME" << endl;
cout << "                                                                      THE AI USES THE RANDOMNESS AS THE INTELLIGENCE." << endl;

}