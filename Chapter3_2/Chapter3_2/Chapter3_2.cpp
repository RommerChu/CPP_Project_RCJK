// Chapter3_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "*** Astrology Program ***\n";
	cout << "1 - January\n";
	cout << "2 - February\n";
	cout << "3 - March\n";
	cout << "4 - April\n";
	cout << "5 - May\n";
	cout << "6 - June\n";
	cout << "7 - July\n";
	cout << "8 - August\n";
	cout << "9 - September\n";
	cout << "10 - October\n";
	cout << "11 - November\n";
	cout << "12 - December\n";
	cout << "\n";
	int month, date;
	cout << "Enter your birthday month in number: "; 
	cin >> month; 
	cout << "Enter your birth date: "; 
	cin >> date;
	cout << "\n";
		
	//Zodiac zodiac signs

	// ARIES

	if (month == 3 && date >= 21 || month == 4 && date <= 19)
	{
		cout << "Your zodiac sign is Aries\n\n"; 
		if (month == 4 && date >= 17) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Taurus!\n";
		}
	}

	// TAURUS

	else if (month == 4 && date >= 20 || month == 5 && date <= 20)
	{
		cout << "Your zodiac sign is Taurus\n"; 
		if (month == 5 && date >= 18) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Gemini!\n";
		}
		
	}

	// GEMINI

	else if (month == 5 && date >= 21 || month == 6 && date <= 21)
	{
		cout << "Your zodiac sign is Gemini\n"; 
		if (month == 6 && date >= 19) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Cancer!\n";
		}
		
	}

	// CANCER

	else if (month == 6 && date >= 22 || month == 7 && date <= 22)
	{
		cout << "Your zodiac sign is Cancer\n"; 
		if (month == 7 && date >= 20) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Leo!\n";
		}
		
	}

	// LEO

	else if (month == 7 && date >= 23 || month == 8 && date <= 22)
	{
		cout << "Your zodiac sign is Leo\n"; 
		if (month == 8 && date >= 20) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Virgo!\n";
		}
		
	}

	// VIRGO

	else if (month == 8 && date >= 24 || month == 9 && date <= 23)
	{
		cout << "Your zodiac sign is Virgo\n"; 
		if (month == 9 && date >= 21) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Libra!\n";
		}
		
	}

	// LIBRA

	else if (month == 9 && date >= 23 || month == 10 && date <= 22)
	{
		cout << "Your zodiac sign is Libra\n"; 
		if (month == 10 && date >= 20) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Scorpio!\n";
		}
		
	}

	// SCORPIO

	else if (month == 10 && date >= 23 || month == 11 && date <= 21)
	{
		cout << "Your zodiac sign is Scorpio\n"; 
		if (month == 11 && date >= 19) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Saguitarius!\n";
		}
		
	}

	//SAGUITARIUS

	else if (month == 11 && date >= 22 || month == 12 && date <= 21)
	{
		cout << "Your zodiac sign is Saguitarius\n"; 
		if (month == 12 && date >= 19) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Capricorn!\n";
		}
	}

	// CAPRICORN

	else if (month == 12 && date >= 22 || month == 1 && date <= 19)
	{
		cout << "Your zodiac sign is Capricorn\n"; 
		if (month == 1 && date >= 17) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Capricorn!\n";
		}
	}

	// AQUARIUS

	else if (month == 1 && date >= 20 || month == 2 && date <= 18)
	{
		cout << "Your zodiac sign is Aquarius\n"; 
		if (month == 2 && date >= 16) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Pieces!\n";
		}
	}

	// PIECES

	else if (month == 2 && date >= 19 || month == 3 && date <= 20)
	{
		cout << "Your zodiac sign is Pieces\n"; 
		if (month == 3 && date >= 18) {
			cout << "Your birthday is on a 'cusp' ADVANCE HAPPY BIRTHDAY Aries!\n";
		}
	}

	cout << "\n\n";

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
