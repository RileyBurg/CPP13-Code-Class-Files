#include <iostream>

using namespace std;

int main() {
	/*int* int_ptr{ nullptr };
	int_ptr = new int;			//allocate an integer on the heap
	cout << int_ptr << endl;	//memory address is displayed
	cout << *int_ptr << endl;	//0xf13f21
	*int_ptr = 100;				
	cout << *int_ptr << endl;*/	//100

	//int* int_ptr{ nullptr };	//creates a null pointer
	//int_ptr = new int;			//allocate an integer on the heap

	//delete int_ptr;				//frees that allocated storage

	int* int_ptr{ nullptr };
	int_ptr = new int;
	
	cout << int_ptr << endl;
	
	delete int_ptr;

	size_t size{ 0 };
	double* temp_ptr{ nullptr };
	
	cout << "How many temps?";
	cin >> size;
	
	temp_ptr = new double[size];
	
	cout << temp_ptr << endl;

	delete[] temp_ptr;


	cout << endl;
	return 0;
}