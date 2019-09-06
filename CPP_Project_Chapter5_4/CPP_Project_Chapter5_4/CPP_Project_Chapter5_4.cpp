// CPP_Project_Chapter5_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int cents;
	int q = 0;
	int d = 0;
	int p = 0;
	std::cout << "Please enter your cents";
	std::cin >> cents;

	q = cents / 25;
	d = (cents - (q * 25)) / 10;
	p = (cents - (q * 25)-(d * 10)) /1 ;

	//dime = cents - (q*25)/10
	//penny = (cents - d)- (dime*10)

	std::cout << q << "\n";
	std::cout << d << "\n";
	std::cout << p << "\n";


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
