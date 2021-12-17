#include <iostream> 
#include <stdlib.h>
#include <string.h>


char showMenu();


void menuOptions(char playerInput);
void instruction(); 
void startGame();
void displayOption();

void checkResult(int playerEn, int computerEn);
void endGame();
void quitGame();
void gameInformation();

int gameinformationEn;
int playerEnter();
int displayplayerEnter(int playerEn);
int computerEnter();
int displaycomputerEnter(int computerEn);

bool gameActive = false;
bool Input = false;
bool gameResults;

char continueGame;
char cont;
bool results[5][5] =    //rock, paper, scis, lzrd, spock - player
{						{true, true, false, false, true}, //rock - comp
						{false, true, true, true, false}, //paper
						{true, false, true, false, true}, //scissors
						{true, false, true, true, false}, //lizard
						{false, true, false, true, true}, //spock
}; 

char showMenu()
{
	
	
	system("clear");

	std:: cout << "------------------\n"; 
	std:: cout << "*******************\n";
	std:: cout << "Welcome to Rock, Paper, Scissor, lizard, Spock\n";
	std:: cout << " \n ";
	std:: cout << "Enter [S] to start game\n";
	std:: cout << " \n ";
	std:: cout << "Enter [H] to game information\n";
	std:: cout << " \n "; 
	std:: cout << "Enter [Q] to quit game\n";
	std:: cout << " \n ";
	std:: cout << " Good Luck!\n";
    std:: cout << "------------------\n"; 
	std:: cout << "*******************\n";

    char playerInput;
	std:: cin >> playerInput;
	return playerInput;

}

void menuOptions(char playerInput)
{
  switch (playerInput)
   {
         case 'S':
         case 's':
           Input = true;
	       startGame();
	  break;
         case 'H':
         case 'h':
           Input = true;
	       gameInformation();
	  break;
         case 'Q':
         case 'q':
           Input = true;
	       QuitOptions();
	  break;
      default:
      Input = false;
	  std:: cout << "Wrong Key Entered Try Agian\n";
      break;
    }
}


void startGame()
{
  system("clear");
  gameActive = true;
  displayOption();
}

void displayOption()
{
    std:: cout << "________________________________________________________________________________\n";
	std:: cout << " \n ";
	std:: cout << "|| [R] = Rock || [P] = Paper || [S] = Scissors || [L] = Lizard || [O] = Spock\n";
	std:: cout << " \n ";
	std:: cout << "_______________________________________________________________________________\n";
}


int playerEnter()
{

   int playerEn = 0;
   std:: cout << "Enter The Following Option\n";
   std:: cin >> playerEn;

   if (playerEn > 4 || playerEn < 0)
   {
     std:: cout << "Wrong Key Entered\n";
	 system("pause");
	 playerEnter();
   }
   displayplayerEnter(playerEn);
   return playerEn; 

}


int displayplayerEnter(int playerEn)
{
	if (playerEn == 0)
	{
		std:: cout << "You have chosen rock!\n"; 
		return playerEn;
	}
	else
	{
		switch (playerEn) {
		case 1:
			std:: cout << "You have chosen paper!\n";
		break;
		case 2:
			std:: cout << "You have chosen scissors!\n";
		break;
		case 3:
			std:: cout << "You have chosen lizard!\n";
		break;
		case 4:
			std:: cout << "You have chosen Spock!\n";
		break;
		default:
			std:: cout << "Wrong Input\n";
			system("pause");
			playerEnter();
			break;
		}
	}

	return playerEn;
}

int ComputerEnter()
{
	int compEn = 0; 

	compEn = rand() % 5; 

	displaycomputerEnter(compEn);

	return compEn;
}

int displaycomputerEnter(int compEn)
{
	

	switch (compEn) {
	case 0:
		std:: cout << "Computer has used rock!\n";
		break;
	case 1:
		std:: cout << "Computer has used paper!\n";
		break;
	case 2:
		std:: cout << "Computer has used scissors!\n";
		break;
	case 3:
		std:: cout << "Computer has used lizard!\n";
		break;
	case 4:
		std:: cout << "Computer has used Spock!\n"; 
		break;
	default:
		break;
	}
	return compEn;
}

void CheckResult(int playerEn, int computerEn)
{

	if (playerEn == computerEn)
	{
		std::cout << "Draw!\n";

		endGame();

	}
	else
	{
		gameResults = results[playerEn][computerEn];

		if (gameResults == true)
		{
			std:: cout << "Player wins!\n";

			endGame();

		}
		else if (gameResults == false)
		{
			std:: cout << "Computer wins!\n";

			endGame();

		}
	}
}

void endGame()
{
	std:: cout << "Play again [Y/N]?\n";
	std:: cin >> continueGame;

	switch (continueGame) {
	case 'Y':
	case 'y':
		showMenu(); 
		break;
	case 'N':
	case 'n':
		gameActive = false;
		Input = false; 
		break;
	default:
		std:: cout << "Invalid Input!\n";
		endGame(); 
		break;
	}
}

void QuitOptions()
{
	Input = true;

	std:: cout << "Thanks for playoing\n";
	system("pause");
	return;
}

void gameInformation()
{
  std:: cout << " Welcome To The Game Information Page\n";
  std:: cout << " These are the rules that you use when you play rock, paper, scissor, lizard, spock:\n";
  std:: cout << "\n";
  std:: cout << "Rock crushes Lizard and crushes Scissors\n";
  std:: cout << "Paper disproves Spock and covers Rock\n";
  std:: cout << "Scissors cuts Paper and decapitates Lizard\n";
  std:: cout << "Lizard poisons Spock and eats Paper\n";
  std:: cout << "Spock smashes Scissors and vaporises Rock\n";
  std:: cout << "\n";
  std:: cout << "\n";
  std:: cout << "When you start the game you will be presented will the options [R],[P],[S],[L],[O]\n";
  std:: cout << "\n";
  std:: cout << "[R] = Rock\n";
  std:: cout << "[P] = Paper\n";
  std:: cout << "[S] = Scissors\n";
  std:: cout << "[L] = Lizard\n";
  std:: cout << "[O] = Spock\n";
  std:: cout << "\n";
  std:: cout << "When you win you score will be recorded against the computer in the score bored\n";
  std:: cout << "\n";
  std:: cout << "Good luck!!";
  std:: cout << "\n";
  
  switch (gameinformationEn)
  {
     case 'B':
     case 'b':
	   showMenu();
	   break;
  
      default:
	  endGame();
	  break;
  }
  
}

int main ()
{
   while (Input == false)
   {
    menuOptions(showMenu());
   }
    while (gameActive == true)
   {
    instruction();
   }

 return 0;
}






