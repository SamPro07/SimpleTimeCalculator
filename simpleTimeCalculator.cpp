
#include <iostream>
#include <cmath> 
#include <stdio.h>

using namespace std;

// first is declaring the varibales as seen bellow (S), (M), (H) are all variables that have a value beyond the decimal point - float
float Seconds;
float Minutes;
float Hours;
float sectoHours;
float hourstoSecs;
float sectoMins;
float minstoHours;
float minstoSecs;
float hourstoMins;
// the character input allows the user of this program to interact with my program when they are given the options
char Input;

// the bad input allows the the return of either true or false statement.
bool BadIn;
bool quitIn = false;

void SecondsToHours()
{
  BadIn = false;
  // This part of the code converts Seconds into Hours
	cout << "Please Enter Time of Seconds To Get Hours" << endl;
	cin >> Seconds;
   sectoHours = Seconds * 1/3600;
	cout << "The Number of Hours Is " << sectoHours << endl; 
}

void HoursToSeconds()
{
  BadIn = false;
    // This Part of the code converts hours to seconds
	cout << "Please Enter Time of hours To Get seconds" << endl;
	cin >> Hours;
	hourstoSecs= (Hours * 3600);
	cout << "The Number of Seconds Is "<< hourstoSecs << endl;
  
}

void SecondsToMinutes()
{
  BadIn = false;
    // This Part of the code converts seconds into minutes
	cout << "Please Enter Time of Seconds To Get Minutes" << endl;
	cin >> Seconds;
	sectoMins = (Seconds / 60); 
  
	cout << "The Number of Minutes Is "<< sectoMins << endl;

  
}

void MinutesToHours()
{
  BadIn = false;
    // This Part of the code converts Minutes to hours
	cout << "Please Enter Number of Minutes To Get Hour" << endl;
	cin >> Minutes;
	minstoHours = (Minutes / 60);
	cout << "The Number of Hours Is "<< minstoHours << endl;
 

}

void MinutesToSeconds()
{
  BadIn = false;
 // This Part of the code converts Minutes to seconds
	cout << "Please Enter Number of Minutes To Get Seconds" << endl;
	cin >> Seconds;
	minstoSecs = Seconds * 60;
	cout << "The Number of minutes Is "<< minstoSecs << endl;
 
}

void HoursToMinutes()
{
  BadIn = false;
// This Part of the code converts hours to minutes
	cout << "Please Enter Number of Hours To Get minutes" << endl;
	cin >> Hours;
	hourstoMins = Hours * 1/60;
	cout << "The Number of Hours Is "<< hourstoMins << endl;


}

void QuitCal() // this void function allows for the user to quit the program if he or she wishes to.
{
	BadIn = false;
	quitIn = true;
	
	cout << " Thanks For Using The Program" << endl;
	
}
/*the menu function gives the useer the choice to convert which time he or she wishes to by printing out statementets.
When using switch it directs the user depending on what key it they pressed to the program functions
*/
void menu()
{
 system ("clear"); 
 cout << " -------------------" << endl;
 cout << "|  Time Calculator  |" << endl;
 cout << " -------------------" << endl;
 cout << "[1] - Seconds into hours" << endl;
 cout << "[2] - Seconds into minutes" << endl;
 cout << "[3] - Minutes into hours" << endl;
 cout << "[4] - Minutes into seconds" << endl;
 cout << "[5] - Hours into minutes"<< endl;
 cout << "[6] - Hours into seconds" << endl;
 cout << " -------------------------------" << endl;
 cout << "  [7] - Quit  " << endl;
 cout << " -------------------------------" << endl;
 cout << "Enter The key number you would like use"<< endl;
 cout << "***************************************" << endl;

 cin >> Input;
 switch (Input)
 {
  case '1':
     SecondsToHours();
     break;
  case '2':
     SecondsToMinutes();
	 break;
  case '3':
     MinutesToHours();
     break;
  case '4':
     MinutesToSeconds();
     break;
  case '5':
     HoursToMinutes();
     break;
  case '6':
     HoursToSeconds();
     break;
  case '7':
     QuitCal();
     break;
    
 }

}

// the main functions allows to call upon the whole program by just writing the menu function inside it.
int main()
{
 menu();	
 return 0;
}