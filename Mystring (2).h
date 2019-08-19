#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);

	~Mystring();

	Mystring& operator=(const Mystring& rhs); //Copy assignment

	void display() const;

	int get_length() const;
	const char* get_str() const;

private:
	char* str;
};

#endif // !_MYSTRING_H_

