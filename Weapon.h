#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
using namespace std;

class Weapon
{
private:
	double doesDamage;
	string weaponLevel;
	string weaponType;
public:
	// Constructors
	Weapon();
	// Getters and Setters
	void setDoesDamage(double doesDamage);
	void setWeaponLevel(string weaponLevel);
	double getDoesDamage()const;
	string getWeaponLevel()const;
	void setWeaponType(string weaponType);
	string getWeaponType();
	// Pure virtual functions for Weapon
	virtual string swingType()const = 0;
	virtual string finisherMove()const = 0;
	virtual std::ostream& attack(std::ostream& strm)const = 0;
	virtual std::ostream& weaponLevelDesc(std::ostream& strm)const = 0;
	//Virtual function
	virtual string specialClassMove();

	// Overloaded insertion operator
	friend std::ostream& operator<<(std::ostream& strm, Weapon& right);
};

#endif

