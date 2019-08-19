#ifndef _MOVE_MY_STRING_H_
#define _MOVE_MY_STRING_H_

class Mystring
{
public:
	Mystring();									//No args constructor
	Mystring(const char* s);					//takes in a pointer to a character (overloaded)
	Mystring(const Mystring& source);			//copy constructor
	Mystring(Mystring&& source) noexcept;		//move constructor
	~Mystring();

	Mystring& operator=(const Mystring& rhs);

	Mystring& operator=(Mystring&& rhs);

	void display() const;
	int get_len() const;
	const char* get_str() const;

private:
	char* str;
};

#endif // !_MOVE_MY_STRING_H_
