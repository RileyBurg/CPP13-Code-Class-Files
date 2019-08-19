#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

//prototype functions
void display_menu();
char selection();
void print_nums(vector<int>);
string add_val(vector<int>);
int mean_val(vector<int>);
int smallest_val(vector<int>);
int largest_val(vector<int>);
int quit();

int main() {
	vector<int> list{ 1, 2, 3, 4, 5 };
	display_menu();

	switch (selection())
	{
	case 'P':
		print_nums(list);
		break;
	case 'A':
		cout << add_val(list);
		cout << endl;
		main();
		break;
	case 'M':
		mean_val(list);
		cout << endl;
		main();
		break;
	case 'S':
		smallest_val(list);
		cout << endl;
		main();
		break;
	case 'L':
		largest_val(list);
		cout << endl;
		main();
		break;
	case 'Q':
		if (quit() == 0)
			main();
		else {
			cout << "Thank you, goodbye";
			return 0;
		}
		break;
	default:
		return 0;
		break;
	}
}

void display_menu() {
	cout << "Please choose one of the options listed below: " << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display the mean value" << endl;
	cout << "S - Display the smallest value" << endl;
	cout << "L - Display the largest value" << endl;
	cout << "Q - Quit the program" << endl;
	cout << "\nPlease enter your choice: ";
}
char selection() {
	char selection{};
	cin >> selection;
	return toupper(selection);
}
void print_nums(vector<int> list) {
	for (size_t i = 1; i < list.size()+1; i++)
	{
		cout << i;
		if(i != list.size()+1)
			cout << ", ";
	}
	cout << endl << endl;
	main();
}
string add_val(vector <int> list) {
	int num_input{};
	cout << "Enter a number you'd like to add to the end of the list: ";
	cin >> num_input;
	list.push_back(num_input);
	return ("added value " + to_string(num_input));
}
int mean_val(vector<int> list) {
	int mean{};
	for (size_t i = 1; i < list.size()+1; i++)
	{
		mean += list[i];
	}
	mean /= 2;
	return mean;
}
int smallest_val(vector<int> list) {
	int smallest{};
	for (size_t i = 1; i < list.size()+1; i++)
	{
		if (list[i] < list[i+1])
		{
			smallest = list[i];
		}
	}
	return smallest;
}
int largest_val(vector<int> list) {
	int largest{};
	for (size_t i = 1; i < list.size() + 1; i++)
	{
		if (list[i] > list[i + 1])
		{
			largest = list[i];
		}
	}
	return largest;
}
int quit() {
	char selection{};
	cout << "Are you sure you'd like to quit? (Y/N): ";
	cin >> selection;
	selection = toupper(selection);
	if (selection == 'Y')
		return 1;
	else if (selection == 'N')
		return 0;
	else
	{
		cout << "\nPlease enter either Y or N."<< endl;
		quit();
	}
}