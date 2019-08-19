#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	/*
	double num{};

	cout << "Enter a number (double): ";
	cin >> num;

	cout << "The Square root of " << num << " is: " << sqrt(num) << endl;
	cout << "The ccubed root of " << num << " is: " << cbrt(num) << endl;

	cout << "The sine of " << num << " is: " << sin(num) << endl;
	cout << "The cosine of " << num << " is: " << cos(num) << endl;

	cout << "The ceiling of " << num << " is: " << ceil(num) << endl;
	cout << "The floor of " << num << " is: " << floor(num) << endl;
	cout << "The round of " << num << " is: " << round(num) << endl;

	double power{};
	cout << "\nEnter a power to raise: " << num << " to." << endl;
	cin >> power;
	cout << num << "raised to the " << power << " power is: " << pow(num,power) << endl;
	*/

	int random_number{};
	size_t count{ 10 };
	int min{ 1 };
	int max{ 6 };

	//seed the random_number generator
	//If you dont seed the generator you will get the same sequence of random numbers every run

	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr)); //This is the seeder

	for (size_t i = 1; i < count; i++)
	{
		random_number = rand() % max + min;
		cout << random_number << endl;
	}

	cout << endl;
	return 0;
}