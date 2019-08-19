#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num{ 100 };
	int& ref{ num };

	cout << num << endl;		//100		
	cout << ref << endl;		//100

	num = 200;
	cout << "\n====================================";
	cout << num << endl;		//200
	cout << ref << endl;		//200

	ref = 300;
	cout << "\n=====================================";
	cout << num << endl;		//300
	cout << ref << endl;		//300

	cout << "\n=====================================";
	vector<string> stooges{ "Larry", "Moe", "Curly" };
	for (auto str : stooges)
		str = "Funny";			//str is a COPY and will not change the actual vector created.

	for (auto str : stooges)
		cout << str << endl;	//the original string will print with no changes.

	cout << "\n======================================";

	for (auto& str : stooges)	//now str is a REFERENCE to the actual vector of strings
		str = "Funny";

	for (auto const& str : stooges)		//using a const for str so the copy cannot be changed only the reference can be.
		cout << str << endl;			//Now all the elements have been changed to Funny.

}