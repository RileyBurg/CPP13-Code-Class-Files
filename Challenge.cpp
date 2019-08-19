#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> nums{1, 2, 3, 4, 5};
	char selection{};
	int mean{ 0 };
	do
	{
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display the smallest number" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit this Bish" << endl;
		cout << "---------------------------------" << endl;

		cout << "What is your choice?:" << endl;
		cin >> selection;
		cout << "\n";

		switch (selection)
		{
		case 'p':
		case 'P':
			cout << "[ ";
			for (int i = 0; i < nums.size(); i++)
			{
				cout << nums.at(i) << " " << endl;
			}
			cout << "]";
			break;
		case 'a':
		case 'A':
			cout << "A was pressed\n" << endl;
			break;
		case 'm':
		case 'M':
			if (nums.size() == NULL)
				cout << "There are no entries in the list." << endl;
			else
			{
				for (int i = 0; i < nums.size(); i++)
				{
					mean += nums.at(i);
				}
				mean = mean / nums.size();
				cout << "The mean is: " << mean << endl;
				cout << endl;
			}
			break;
		case 's':
		case 'S':
			cout << "S was pressed\n" << endl;
			break;
		case 'l':
		case 'L':
			cout << "L was pressed\n" << endl;
			break;
		case 'q':
		case 'Q':
			cout << "Ending the program... thank you!\n";
			break;
		default:
			cout << "You've entered an option that does not exist, Try again." << endl;
			break;
		}

	} while (selection != 'q' && selection != 'Q');

}