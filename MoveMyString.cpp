#include <iostream>
#include <cstring>	
#include "MoveMystring.h"

using namespace std;

Mystring::Mystring() 
	:str{ nullptr }
{
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char* s)
	:str{ nullptr }
{
	if (s == nullptr) 
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
}

Mystring::Mystring(const Mystring& source)
	:str{ nullptr }
{
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
	std::cout << "Copy constructor called" << std::endl;
}

Mystring::Mystring(Mystring&& source) noexcept
	:str(source.str)
{
	source.str = nullptr;
	std::cout << "Move constructor called" << std::endl;
}
Mystring::~Mystring()
{
	if (str == nullptr)
	{
		std::cout << "Calling destructor for Mystring: Nullptr" << std::endl;
	}
	else
	{
		std::cout << "Calling destructor for Mystring." << std::endl;
	}
	delete[] str;
}

Mystring& Mystring::operator=(const Mystring& rhs) {
	std::cout << "Using copy assignment" << std::endl;

	if(this == &rhs)
		return *this;
	delete []str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) {
	std::cout << "Using move assignment" << std::endl;

	if (this == &rhs)
		return *this;
	delete[]str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

void Mystring::display() const {
	std::cout << str << ":" << get_len() << std::endl;
}
int Mystring::get_len() const { return(strlen(str)); }
const char* Mystring::get_str() const { return (str); }