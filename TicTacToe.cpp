#include<iostream>
#include<string>
#include<time.h>
#include<random>
#include"ticTacToe.h"
using namespace std;

int main()
{
	//seed random generator
	srand(time(NULL));
	
	//variables
	string square1, square2, square3, square4, square5, square6, square7, square8, square9;
	string choice = "0";
	string choices[10];
	int count = 0;
	bool win = false;

	//initialize squares
	square1 = "1";
	square2 = "2";
	square3 = "3"; 
	square4 = "4";
	square5 = "5";
	square6 = "6";
	square7 = "7";
	square8 = "8"; 
	square9 = "9";
	
	//show empty gameboard
	displayGameBoard(square1, square2, square3, square4, square5, square6, square7, square8, square9);

	//prompt player to make the first move
	cout<< " You will be X's and I will be O's." << endl;
	cout<< "You can make the first move.  Choose which position you want to put an X by entering the corresponding number." << endl;
	
	while(count < 5)
	{
		cout<<endl;
		cout<< "You're up."<< endl;
		cin>>choice;

		//make sure player enters valid choice
		while(!checkValid(choice))
		{
			cout<< "choose again."<<endl;
			cin>>choice;
		}

		while(!checkBank(choices, choice))
		{
			cout<<"choose again"<<endl;
			cin>>choice;
		}

		//save players choice
		choices[count + count] = choice;

		updateBoardPlayer(choice, square1, square2, square3, square4, square5, square6, square7, square8, square9);
		displayGameBoard(square1, square2, square3, square4, square5, square6, square7, square8, square9);

		//make sure player has not won before computer's turn
		if(!checkWinX(square1, square2, square3, square4, square5, square6, square7, square8, square9))
		{
			//if no one wins give the win to the cat
			if(count == 4)
			{
				cout <<"Looks like the cat wins this one."<<endl;
				break;
			}

			cout<< "Now it's my turn.  Let's see, let's see.  I know!" << endl;
			
			//calculate computers move
			int compRand = rand() % 9 +1;

			//convert compRand to string
			ostringstream convert;
			convert << compRand;
			choice = convert.str();

			//check to see that computers choice if valid if not keep looping until it is valid
			while (!checkBank(choices, choice) && count < 4)
			{
				compRand = rand() % 9 + 1;
				ostringstream convert;
				convert << compRand;
				choice = convert.str();
			}

			//save computer's choice
			choices[count + count + 1] = choice;
			//update and display board
			updateBoardComp(choice, square1, square2, square3, square4, square5, square6, square7, square8, square9);
			displayGameBoard(square1, square2, square3, square4, square5, square6, square7, square8, square9);	

			//if computer wins 
			if(checkWinY(square1, square2, square3, square4, square5, square6, square7, square8, square9))
			{
				cout<<"I win"<<endl;
				break;
			}
		}
		//if player wins 
		else 
		{
			cout<<"You win! "<<endl;
			break;
		}
	
		//increment count
		count++;
	}
	


	return 0;
}
