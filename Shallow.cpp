#include <iostream>

using namespace std;

class Shallow
{
public:
	Shallow(int d);
	Shallow(const Shallow& source);
	~Shallow();

	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

private:
	int* data;
};

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow& source)
	:data(source.data)
{
	cout << "copy constructor called" << endl;
}

Shallow::~Shallow()
{
	delete data;
	cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
	cout << s.get_data_value() << endl;
}

int main() {
	Shallow obj1{ 100 };
	display_shallow(obj1);

	Shallow obj2{ obj1 };
	obj2.set_data_value(1000);

	return 0;
}