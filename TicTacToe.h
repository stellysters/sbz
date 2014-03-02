#include<iostream>
#include<string>
#include<sstream>
#include<time.h>
#include<random>
using namespace std;

void displayGameBoard(string sq1, string sq2, string sq3, string sq4, string sq5, string sq6, string sq7, string sq8, string sq9)
{
	cout << endl;
	cout<< "  "<<sq1<<" | " << sq2<<" | " <<sq3<< endl;
	cout<<" ------------" << endl;
	cout<< "  "<<sq4<<" | " << sq5<<" | " <<sq6<< endl;
	cout<<" ------------" << endl;
	cout<< "  "<<sq7<<" | " << sq8<<" | " <<sq9<< endl;
	cout<< endl;
}

void updateBoardPlayer(string choice, string &sq1, string &sq2, string &sq3, string &sq4, string &sq5, string &sq6, string &sq7, string &sq8, string &sq9)
{		
	
	if (choice == "1")
	{
		sq1 = "X";
	}
	else if(choice == "2")
	{
		sq2 = "X";
	}
	else if(choice == "3")
	{
		sq3 = "X";
	}
	else if(choice == "4")
	{
		sq4 = "X";
	}
	else if(choice == "5")
	{
		sq5 = "X";
	}
	else if (choice == "6")
	{
		sq6 = "X";
	}
	else if(choice == "7")
	{
			sq7 = "X";
	}
	else if (choice == "8")
	{
		sq8 = "X";
	}
	else 
	{
		sq9 = "X";
	}
}

void updateBoardComp(string choice, string &sq1, string &sq2, string &sq3, string &sq4, string &sq5, string &sq6, string &sq7, string &sq8, string &sq9)
{
	if (choice == "1")
	{
		sq1 = "O";
	}
	else if(choice == "2")
	{
		sq2 = "O";
	}
	else if(choice == "3")
	{
		sq3 = "O";
	}
	else if(choice == "4")
	{
		sq4 = "O";
	}
	else if(choice == "5")
	{
		sq5 = "O";
	}
	else if (choice == "6")
	{
		sq6 = "O";
	}
	else if(choice == "7")
	{
		sq7 = "O";
	}
	else if (choice == "8")
	{
		sq8 = "O";
	}
	else 
	{
		sq9 = "O";
	}
}

bool checkBank(string bank[], string choice)
{
	for(int i = 0; i < 10; i++)
	{
		if(choice == bank[i])
		{
			cout<< "That spot has already been filled. " << endl;
			return false;
		}
	}

	return true;
}

bool checkValid(string choice)
{
	if(choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" || choice == "7" || choice == "8" || choice == "9")	
	{
		return true;
	}
	else 
	{
		cout<< "That is not a valid entry. Please choose a number between 1 and 9." << endl;
		return false;
	}
}

bool checkWinX(string sq1, string sq2, string sq3, string sq4, string sq5, string sq6, string sq7, string sq8, string sq9)
{
	if(sq1 == "X" && sq2 == "X" && sq3 == "X" || sq4 == "X" && sq5 == "X" && sq6 =="X" || sq7 == "X" && sq8 == "X" && sq9 == "X" || sq1 == "X" && sq5== "X" && sq9 == "X" || sq1 == "X" && sq4== "X" && sq7 == "X" || sq2 == "X" && sq5 == "X" && sq8 == "X" || sq7 == "X" && sq8 == "X" && sq9 == "X" || sq7 == "X" && sq5 == "X" && sq3 == "X" || sq3 == "X" && sq6 == "X" && sq9 == "X")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool checkWinY(string sq1, string sq2, string sq3, string sq4, string sq5, string sq6, string sq7, string sq8, string sq9)
{
	if(sq1 == "O" && sq2 == "O" && sq3 == "O" || sq4 == "O" && sq5 == "O" && sq6 =="O" || sq7 == "O" && sq8 == "O" && sq9 == "O" || sq1 == "O" && sq5== "O" && sq9 == "O" || sq1 == "O" && sq4== "O" && sq7 == "O" || sq2 == "O" && sq5 == "O" && sq8 == "O" || sq7 == "O" && sq8 == "O" && sq9 == "O" || sq7 == "O" && sq5 == "O" && sq3 == "O" || sq3 == "O" && sq6 == "O" && sq9 == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}




