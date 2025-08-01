#ifndef PLAYER_H
#define PLAYER_H
#include "Weapon.h"
#include "Inventory.h"

class Player
{
private:
	Weapon* weapon;
	string name;
	int elims;
	string className;
	Inventory* inventory;
	int health;

public:
	// Constructors and Destructors
	Player();
	Player(Weapon* weapon, string name, int elims, string className,Inventory* inventory);
	~Player();
	// Getters and Setters
	Weapon* getWeapon()const;
	string getName()const;
	int getElims()const;
	string getClassName()const;
	void setWeapon(Weapon* weapon);
	void setName(string name);
	void setElims(int elims);
	void SetClassName(string className);
	Inventory* getInventory()const;
	void setInventory(Inventory* inventory);
	int getHealth()const;
	void setHealth(int health);
	// overloaded insertion operator
	friend std::ostream& operator<<(std::ostream& strm,const Player& right);
};

#endif