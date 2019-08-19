#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

private:
	std::string name;
	int health;
	int xp;
};

Player::Player(std::string name_val, int health_val, int xp_val)
	: name{name_val}, health{health_val}, xp{xp_val}
{
	cout << "Three-args constructor" << endl;
}

int main() {
	Player empty;
	Player frank{"Frank"};
	Player villian{"Villian", 100, 50};
}