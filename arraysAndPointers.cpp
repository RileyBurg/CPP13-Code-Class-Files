#include <iostream>

using namespace std;

int main() {
	int scores[]{ 100, 95, 90 };

	//cout << scores << endl;			//0036FA84
	//cout << *scores << endl;			//100

	int* scores_ptr{ scores };

	//cout << scores_ptr << endl;		//0036FA84

	//cout << *scores_ptr << endl;		//100

	cout << scores_ptr[0] << endl;		//100
	cout << scores_ptr[1] << endl;		//95
	cout << scores_ptr[2] << endl;		//90

	cout << endl;
	return(0);
}