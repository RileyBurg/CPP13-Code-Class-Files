#ifndef _MY_STRING_H_
#define _MY_STRING_H_

class Mystring
{
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);
	Mystring(Mystring&& source);
	~Mystring();

	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs);

	Mystring operator-() const;		//make lower case
	Mystring operator+(const Mystring& rhs) const;
	bool operator==(const Mystring& rhs) const;

	void display() const;
	int get_length() const;
	const char* get_str() const;

private:
	char* str;
};

#endif // !_MY_STRING_H_

