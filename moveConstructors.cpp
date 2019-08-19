#include <iostream>
#include <vector>

using namespace std;


class Move {
private:
	int* data;										// Raw Pointer
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }\
	Move(int d);									//Constructor	
	Move(const Move& source);						//Copy Constructor
	Move(Move&& source) noexcept;					//Move Constructor
	~Move();										//Destructor

};
//
Move::Move(int d)
{
	data = new int;
	*data = d;
	cout << "Constuctor for: " << d << endl;
}
// Copy Constructor
Move::Move(const Move& source)
	:Move{*source.data}
{
	cout << "Copy Constructor - Deep Copy for: " << *data << endl;
}
//Move Constructor
Move::Move(Move&& source) noexcept
	:data {source.data}
{
	source.data = nullptr;
	cout << "Move Constructor - Moving resource: " << *data << endl;
}
// Destroy the copy
Move::~Move()
{
	if (data!=nullptr)
	{
		cout << "destructor freeing data for: " << *data << endl;
	}
	else
	{
		cout << "Destructor freeing data for nullptr" << endl;
	}
	delete data;
}

int main() {
	vector <Move> vec;

	vec.push_back(Move{ 10 });
	vec.push_back(Move{ 20 });
	vec.push_back(Move{ 30 });
	vec.push_back(Move{ 40 });
	vec.push_back(Move{ 50 });
	vec.push_back(Move{ 60 });
	vec.push_back(Move{ 70 });
	vec.push_back(Move{ 80 });

	return 0;
}