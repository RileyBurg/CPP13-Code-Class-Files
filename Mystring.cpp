#include <iostream>
#include "Mystring.h"
#include <cstring>
#include <cctype>	

//No-args Constructor
Mystring::Mystring()
	: str{ nullptr }
{
	str = new char[1];
	*str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char* s)
	: str{ nullptr }
{
	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}

//Copy Constructor
Mystring::Mystring(const Mystring& source)
	: str{ nullptr }
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

//Move Constructor
Mystring::Mystring(Mystring&& source)
	:str(source.str)
{
	source.str = nullptr;
	std::cout << "Move constructor called" << std::endl;
}

//Destructor
Mystring::~Mystring()
{
	delete[] str;
}

Mystring& Mystring::operator=(const Mystring& rhs) 
{
	if (this == &rhs)
		return *this;
	delete[] str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) 
{
	std::cout << "Using Move Assignment" << std::endl;
	if (this== &rhs)
		return *this;
	delete[]str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

//Equality check
bool Mystring::operator==(const Mystring& rhs) const
{
	return (std::strcmp(str, rhs.str) == 0);
}

//Make lowercase
Mystring Mystring::operator-() const
{
	char* buff = new char[std::strlen(str) + 1];
	std::strcpy(buff, str);
	for (size_t i = 0; i < std::strlen(buff); i++)
		buff[i] = std::tolower(buff[i]);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

//Concatenate
Mystring Mystring::operator+(const Mystring& rhs) const
{
	char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

void Mystring::display() const
{
	std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const
{
	return std::strlen(str);
}

const char* Mystring::get_str() const
{
	return str;
}