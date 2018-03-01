#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{ 
  SecretDoor game;
  int response;
  int wins=0;
  
  cout<< "How many times would you like to play?\n";
  cin>> response;

  for ( int gameCount = 0; gameCount < response; gameCount++ )
  {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
   if ( game.isWinner() )
   {
   wins++;
   }
  }
  cout<< "You won " << wins << " times.\n";
    
  return 0;
}
