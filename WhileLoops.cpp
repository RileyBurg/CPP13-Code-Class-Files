#include <iostream>

using namespace std;

int main() {
	/*
	int num{};

	cout << "Enter a positive integer - start the count down: ";
	cin >> num;

	while (num > 0)
	{
		cout << num << endl;
		--num;
	}
	cout << "The timer is done." << endl;

	
	char selection{};

	do
	{
		double width{}, height{};
		cout << "Enter width and height separated by a space: ";
		cin >> width >> height;
		
		double area{ width * height };
		cout << "The area is: " << area << endl;

		cout << "Calculate another? (Y/N): ";
		cin >> selection;
	} while (selection == 'Y' || selection == 'y');
	cout << "Thanks!" << endl;
	*/

	char selection{};

	do
	{
		cout << "\n-------------------------" << endl;
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something" << endl;
		cout << "Q. Quits" << endl;
		cout << "Enter your selection: " << endl;
		cin >> selection;

		if (selection == '1')
			cout << "You chose number 1. Nice..." << endl;
		else if (selection == '2')
			cout << "You chose number 2. Cool..." << endl;
		else if (selection == '3')
			cout << "You chose number 3. Okay..." << endl;
		else if (selection == 'Q' || selection == 'q')
			cout << "Good Bye..." << endl;
		else
			cout << "Unknown Entry -- try again." << endl;
		
	} while (selection != 'q' && selection != 'Q');

	return(0);
}