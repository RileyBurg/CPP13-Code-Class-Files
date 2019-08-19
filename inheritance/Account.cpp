#include <iostream>	
#include "Account.h"

Account::Account()
{
	
}

Account::~Account()
{
	
}

void Account::deposit(double amount)
{
	std::cout << "Deposit was called: " << amount << std::endl;
}

void Account::withdraw(double amount)
{
	std::cout << "Withdraw was called: " << amount << std::endl;
}