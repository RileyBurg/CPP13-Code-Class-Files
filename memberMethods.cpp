#include <iostream>
#include <string>

using namespace std;

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

void Account::set_name(string n) {
	name = n;
}

string Account::get_name()
{
	return name;
}

bool Account::deposit(double amount) {
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if (balance-amount >= 0)
	{
		balance -= amount;
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000.0);

	if (frank_account.deposit(200.0))
		cout<<"Deposit Accepted."<< endl;
	else
		cout << "Deposit Denied." << endl;

	if (frank_account.withdraw(500.0))
		cout << "Withdrawl Accepted." << endl;
	else
		cout << "Withdrawl Denied." << endl;

	if (frank_account.withdraw(1500.0))
		cout << "Withdrawl Accepted." << endl;
	else
		cout << "Withdrawl Denied." << endl;
}