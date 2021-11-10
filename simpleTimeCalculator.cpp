#include <iostream>
#include <cmath> 
#include <stdio.h>

using namespace std;


float Seconds;
float Minutes;
float Hours;
float sectoHours;
float hourstoSecs;
float sectoMins;
float minstoHours;
float minstoSecs;
float hourstoMins;
char Input;


bool goodIn = false;
bool quitIn = false;

void SecondsToHours()
{
  // This part of the code converts Seconds into Hours
	cout << "Please Enter Time of Seconds To Get Hours" << endl;
	cin >> Seconds;
    sectoHours = Seconds * 1/3600;
	cout << "The Number of Hours Is " << sectoHours << endl;
	return;
	
}

void HoursToSeconds()
{
    // This Part of the code converts hours to seconds
	cout << "Please Enter Time of hours To Get seconds" << endl;
	cin >> Hours;
	hourstoSecs= (Hours * 3600); 
	cout << "The Number of Seconds Is "<< hourstoSecs << endl;
	return;
}

void SecondsToMinutes()
{
    // This Part of the code converts seconds into minutes
	cout << "Please Enter Time of Seconds To Get Minutes" << endl;
	cin >> Seconds;
	sectoMins = Seconds * 60; 
	cout << "The Number of Minutes Is "<< sectoMins << endl;
	return;
}

void MinutesToHours()
{
    // This Part of the code converts Minutes to hours
	cout << "Please Enter Number of Minutes To Get Hour" << endl;
	cin >> Minutes;
	minstoHours = Minutes * 60;
	cout << "The Number of Hours Is "<< minstoHours << endl;
	return;

}

void MinutesToSeconds()
{
 // This Part of the code converts Minutes to seconds
	cout << "Please Enter Number of Minutes To Get Seconds" << endl;
	cin >> Seconds;
	minstoSecs = Seconds * 60;
	cout << "The Number of minutes Is "<< minstoSecs << endl;
	return;
}

void HoursToMinutes()
{
// This Part of the code converts Minutes to hours
	cout << "Please Enter Number of Hours To Get minutes" << endl;
	cin >> Hours;
	hourstoMins = Hours * 1/60;
	cout << "The Number of Hours Is "<< hourstoMins << endl;
	return;
}

void QuitCal()
{
	goodIn = false;
	quitIn = true;
	
	cout << " Thanks For Using The Program" << endl;
	return; 
}

void MenuOP()
{
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
    
 return;
}


}
void menu()
{
system ("CLS"); 

cout << "Time Calculator" << endl;
cout << "-------------------------------------------" << endl;
cout << "[1] - Seconds into hours" << endl;
cout << "[2] - Seconds into minutes" << endl;
cout << "[3] - Minutes into hours" << endl;
cout << "[4] - Minutes into seconds" << endl;
cout << "[5] - Hours into minutes"<< endl;
cout << "[6] - Hours into seconds" << endl;
cout << "[7] - Quit" << endl;
cout << "-------------------------------------------" << endl;
cout << "Enter The key number you would like use"<< endl;
cin >> Input;

MenuOP();

return;

}

int main()
{
	goodIn = true;
	while (goodIn)
	{
		menu();
	}
	
   return 0;
}