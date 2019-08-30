// CPP_Project_Chapter2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Question 3
	int prevSal;
	int term;
	std::cout << "Please enter your salary: ";
	std::cin >> prevSal;
	std::cout << "Please enter the month/term: ";
	std::cin >> term;
	double i = .076;
	int monthSal = prevSal / 12;
	int newSal = (monthSal * i) + monthSal;
	int SumRetTro = newSal * term;

	std::cout << "\nold monthly salary: $" << +monthSal;
	std::cout << "\nnew monthly salary: $" << +newSal;
	std::cout << "\nmonthly salary increase: $" << +monthSal * i;
	std::cout << "\nSum of retroactive salary for "<< term << " months is: $ " << +SumRetTro;
	std::cout << "\n";
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
