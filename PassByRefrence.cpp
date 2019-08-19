#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main() {
	int x{ 10 }, y{ 20 };
	cout << x << " " << y << endl;
	swap(x, y);
	cout << x << " " << y << endl;
	return 0;
}

void swap(int& a, int& b)
{
	int store = a;
	a = b;
	b = store;
}