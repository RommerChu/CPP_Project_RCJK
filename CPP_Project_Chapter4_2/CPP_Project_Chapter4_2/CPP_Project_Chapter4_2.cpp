// CPP_Project_Chapter4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

//Formula defining the clothing sizes;
	//Hat formula;

double calhat(int height, double weight)
{
	double hatSize = 2.9 * (weight / height);
	return hatSize;
}

//Jacket formula in chest inches
double caljacket(int height, double weight, int age)
{
	double jacketSize = (height * weight) / 288;
		if ((age % 10 == 0) && (age >= 30)) {
		jacketSize = jacketSize + 0.125;
	}
	return jacketSize;
}

//Waist formula in inches
double calwaist(double weight, int age)
{
	double waistSize = weight / 5.7;

	if ((age % 2 == 0) && (age >= 30)) {
		waistSize = waistSize + 0.1;
	}
	return waistSize;
}

int main()
{
	int height;
	double weight, hatSize, jacketSize, waistSize;
	int age;
	string response;

	std::cout << "What to know your clothing size?\n";
	std::cout << endl;
	std::cout << "Please type 'Yes' below when prompted\n";
	std::cout << endl;
	std::cout << "Do you want to proceed (Y/N)? ";
	std::cin >> response;
	std::cout << endl;

	while ((response == "y") || (response == "Y"))
	{
		//Height input
		std::cout << "Enter your height in inches: ";
		std::cin >> height;
		std::cout << endl;

		//Weight input
		std::cout << "Enter your Weight in pounds: ";
		std::cin >> weight;
		std::cout << endl;

		//Age input
		std::cout << "Enter your age: ";
		std::cin >> age;
		std::cout << endl;

		//Print output

		//Hat result
		hatSize = calhat(height, weight);
		std::cout << "Your ideal hat should be of size: " << hatSize << "inches";
		std::cout << endl;
		std::cout << endl;

		//Jacket result
		jacketSize = caljacket(height, weight, age);
		std::cout << "Your ideal jacket size (chest in inches) should be : " << jacketSize;
		std::cout << endl;
		std::cout << endl;

		//Waist result
		waistSize = calwaist(weight, age);
		std::cout << "Your trousers ideal waist size is: " << waistSize;
		std::cout << endl;
		std::cout << endl;

		//If customer would like to continue the input
		std::cout << "Do you want to continue (Y/N)? ";
		std::cout << endl;
		std::cin >> response;
	}
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
