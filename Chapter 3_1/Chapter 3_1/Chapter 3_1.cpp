// Chapter 3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include <string>
using namespace std;

void youWin() {std::cout << "\nCongratulations! You win the game!\n";}
void youLose() {std::cout << "\nSorry :( You lose the game. \n";}
void weTied() {std::cout << "\nWow It's a tie game!\n";}

int main()
{
	std::cout << "***** Welcome to Paper, Rock and Scissors Game! ***** \n\n";
	std::cout << "p - Paper\n";
	std::cout << "r - Rock\n";
	std::cout << "s - scissors\n";

	string playerOne;
	string playerTwo;
	string p1;
	string p2;



	//Player One Entry
	std::cout << "\nPlease enter PLAYER ONE name: ";
	std::cin >> playerOne;
	
	//Player Two Entry
	std::cout << "\nPlease enter PLAYER TWO name: ";
	std::cin >> playerTwo;

	string p = "paper";
	string r = "rock";
	string s = "scissor";
	string P = "paper";
	string R = "rock";
	string S = "scissor";
	
	
	std::cout << "\n";
	std::cout << playerOne << " enter your pick: ";
	std::cin >> p1;
	std::cout << "\n";
	std::cout << playerTwo<< " enter your pick: ";
	std::cin >> p2;

	std::cout << "\n";

	//Output definition
	
	if (p1 == "p" || p1 == "P") {
		std::cout << playerOne << " You picked a paper\n";
	}
	else if (p1 == "r"  || p1 == "P") {
		std::cout << playerOne << " You picked a rock\n";
	}
	else if (p1 == "s" || p1 == "S") {
		std::cout << playerOne << " You picked a scissor\n";
	}
	else {
		std::cout << playerOne << " Invalid choice\n";
		//return 1;
	}
	
	std::cout << "\n";

	//Output for playerTwo

	if (p2 == "p" || p2 == "P") {
		std::cout << playerTwo << " You picked paper\n";
	}
	else if (p2 == "r" || p2 == "R") {
		std::cout << playerTwo << " You picked rock\n";
	}
	else if (p2== "s" || p2 == "S") {
		std::cout << playerTwo << " You picked scissor\n";
	}
	else {
		std::cout << playerTwo << " That is an invalid choice\n";
		
	}

	std::cout << "\n";

	//Scenerio One

	
	if (p1 == p2) {
		std::cout << playerOne << " and " << playerTwo << " It's a tie!";
		//weTied();
	}
	
	std::cout << "\n";

	if (p1 == "p" || p1 == "P") {
		if (p2 == "r" || p2 == "R") {
			std::cout << playerOne << " Congratulations! You win the game!\n";
			//youWin();
		}
		else if (p2 == "s" || p2 == "S") {
			std::cout << playerOne << " Sorry :( You lose the game. \n";
			//youLose();
		}
		else {
			std::cout << playerOne <<" and " << playerTwo <<" It's a tie!";
			//weTied();
		}
	}

	std::cout << "\n\n";
	//Scenerio Two

	 if (p1 == "r" || p1 == "R") {
		if (p2 == "p" || p2 == "P") {
			std::cout << playerTwo << " Congratulations! You win the game!\n";
			//youLose();
		}
		else if (p2== "s" || p2 == "S") {
			std::cout << playerOne << " Congratulations! You win the game!\n";
			//youWin();
		}
		else {
			std::cout << playerOne << " and " << playerTwo << " It's a tie!";
			//weTied();
		}
	
	}

	//Scenerio Three


	else if (playerOne == "s" || playerOne == "S") {
		if (playerTwo == "p" || playerTwo == "P") {
			//std::cout << playerOne << "\nCongratulations! You win the game!\n";
			youWin();
		}
		else if (playerTwo == "r") {
			//std::cout << playerOne << "\nSorry :( You lose the game. \n";
			youLose();
		}
		else {
			//std::cout << playerOne << "and" << playerTwo << "It's a tie!";
			weTied();
		}
		
	}

	//std::cout << "Thank your for playing" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
