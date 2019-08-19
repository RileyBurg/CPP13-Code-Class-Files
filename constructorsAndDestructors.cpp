#include <iostream>
#include <string>

using namespace std;
class Player
{
public:
	void set_name(std::string name_val) {
		name = name_val;
	}

	//overloaded constructors
	Player() {
		cout << "No args constructor called" << endl;
	}
	Player(std::string name) {
		cout << "String arg constuctor called" << endl;
	}
	Player(std::string name, int health, int xp) {
		cout << "Three arg constructor called" << endl;
	}
	~Player()
	{
		cout << "Destructor called for: " << name << endl;
	}
private:
	std::string name;
	int health{};
	int xp{};
};

int main() {
	{
		Player hero;
		hero.set_name("Hero");
	}
	
	{
		Player riley;
		riley.set_name("Riley");
		Player slayer;
		slayer.set_name("Slayer");
		Player villain("Villain");
		villain.set_name("Bad Guy");
	}

	Player* enemy = new Player;
	enemy->set_name("Enemy");

	Player* level_boss = new Player("Level Boss", 1000, 200);
	level_boss->set_name("Level Boss");

	delete enemy;
	delete level_boss;

	return 0;
}