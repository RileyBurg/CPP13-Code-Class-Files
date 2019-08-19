#pragma once
#include <string>

class Account
{
public:
	void set_balance(double bal) { balance = bal; }
	double get_balance() { return balance; }
	
	void set_name(std::string n);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);

private:
	std::string name;
	double balance;
};
