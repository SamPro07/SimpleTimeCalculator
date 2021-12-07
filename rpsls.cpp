/*  
Welcome to the Rock, Paper, Scissor, Lizard and Spock game. In this game the user (player) 
will be playing against the computer. The Game rules are :
  Rock crushes Lizard and crushes Scissors
• Paper disproves Spock and covers Rock
• Scissors cuts Paper and decapitates Lizard
• Lizard poisons Spock and eats Paper
• Spock smashes Scissors and vaporises Rock
the user will get to play as many time as he wants until he decides to quit the game 
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void gameOptions();
void startGame();
void gameInformation();
void gameScore();
void quitGame();

char playerEnter;
char computerEnter;
char optionChar;
bool goodInput = false;
bool gameactive = true;
bool gameOutcome;


int R[5][5] = 
{ 
 //R.  P. S  L  O computer
  {2, 1, 0, 0, 1}, // rock player
  {0, 2, 1, 1, 0}, // paper
  {1, 0, 2, 0, 1}, // scissors
  {1, 0, 1, 2, 0}, // lizard 
  {0, 1, 0, 1, 2}  // spock
};

int main()
{
  srand(time(NULL));
  
  gameOptions();

  while(gameactive)

return 0;
}


void gameOptions()
{
 
 system("clear");
 cout << "****************************************" << endl;
 cout << "  ";
 cout << "Welcome to Rock Paper Scissor Lizard Spock" << endl;
 cout << "  ";
 cout << "****************************************" << endl;
 cout << "Enter the keys below to play your options:" << endl;
 cout << "  ";
 cout << " Enter [S] to start" << endl;
 cout << "  ";
 cout << " Enter [H] for game information" << endl;
 cout << "  ";
 cout << " Enter [B] to view the score board" << endl;
 cout << "  ";
 cout << " Enter [Q] to quit the game " << endl;
 cout << "  ";
 cout << "May the best man win!" << endl;
 
 cin >> playerEnter;
 switch (playerEnter) 
  {
	  case 'S':
	  case 's':
		goodInput = true;
		startGame();
		break;
    case 'H':
	  case 'h':
		goodInput = true;
		gameInformation();
		break;
    case 'Q':
    case 'q':
    goodInput = true;
    quitGame();
    break;

    default: return;
  }
}


void startGame()
{
 
 
 
  
  
   cout << "To return to the menu Enter [B]\n";
   cin >> playerEnter;
   switch(playerEnter)
   {
     case 'B':
     case 'b':
     goodInput = true;
     gameOptions();
    }
  
 
}

void gameInformation()
{
  cout << " Welcome To The Game Information Page\n";
  cout << " These are the rules that you use when you play rock, paper, scissor, lizard, spock:\n";
  cout << "\n";
  cout << "Rock crushes Lizard and crushes Scissors\n";
  cout << "Paper disproves Spock and covers Rock\n";
  cout << "Scissors cuts Paper and decapitates Lizard\n";
  cout << "Lizard poisons Spock and eats Paper\n";
  cout << "Spock smashes Scissors and vaporises Rock\n";
  cout << "\n";
  cout << "\n";
  cout << "When you start the game you will be presented will the options [R],[P],[S],[L],[O]\n";
  cout << "\n";
  cout << "[R] = Rock\n";
  cout << "[P] = Paper\n";
  cout << "[S] = Scissors\n";
  cout << "[L] = Lizard\n";
  cout << "[O] = Spock\n";
  cout << "\n";
  cout << "When you win you score will be recorded against the computer in the score bored\n";
  cout << "\n";
  cout << "Good luck!!";
  cout << "\n";
  cout << "Enter [B] to go back to menu  \n";
  
  cin >> playerEnter;
  switch (playerEnter) 
  {
	  case 'B':
	  case 'b':
		goodInput = true;
		gameOptions();
		break;
  }

}

void quitGame()
{
 goodInput = true;
 gameactive = false;
 cout << "I hope you had fun playing against the computer, do not worry you d-ont have to win all the time!\n";
 
 return;
}







// what i want to do - in void startgame() i want the player to enter their key then the console prints out what the player has chose, same with the computer to print out what the computer chose. then i want the player choice and computers choice to see who won. how to assign the keys R P S L O to the 2D array