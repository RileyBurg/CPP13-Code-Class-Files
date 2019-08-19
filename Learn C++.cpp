// Learn C++.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
	int cents{ 0 }, dollar{ 0 }, quarter{ 0 }, dime{ 0 }, nickle{ 0 }, penny{ 0 };

	cout << "Enter a the amount of cents you have: " << endl;
	cin >> cents;

	if (cents / 100 != 0)
	{
		dollar = cents / 100;
		cents = cents - dollar * 100;
	}
	if (cents / 25 != 0)
	{
		quarter = cents / 25;
		cents = cents - quarter * 25;
	}
	if (cents / 10 != 0)
	{
		dime = cents / 10;
		cents = cents - dime * 10;
	}
	if (cents / 5 != 0)
	{
		nickle = cents / 10;
		cents = cents - nickle * 5;
	}
	if (cents / 1 != 0)
	{
		penny = cents / 1;
		cents = cents - penny;
	}

	cout << "Provide the change as follows." << endl;
	cout << "Dollars: " << dollar << endl;
	cout << "Quarters: " << quarter << endl;
	cout << "Dime: " << dime << endl;
	cout << "Nickle: " << nickle << endl;
	cout << "Penny: " << penny << endl;

	cout << endl;
	return 0;
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
