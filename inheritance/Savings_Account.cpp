#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account() 
{
	
}

Savings_Account::~Savings_Account()
{

}

void Savings_Account::deposit(double amount)
{
	std::cout << "Savings_Account deposit called: " << amount << std::endl;
}

void Savings_Account::withdraw(double amount)
{
	std::cout << "Savings_Account withdraw called: " << amount << std::endl;
}