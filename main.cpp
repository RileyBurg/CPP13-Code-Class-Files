#include <iostream>
#include "Mystring.h"

int main() {
	Mystring a{ "Hello" };
	a = Mystring{ "Hola" };
	a = "Hey there.";

	return 0;
}