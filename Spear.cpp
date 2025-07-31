#include "Spear.h"
#include <iostream>
#include <string>
using namespace std;

//Constructors
Spear::Spear() : Weapon() {

}
Spear::Spear(double doesDamage) {
	setDoesDamage(doesDamage);
}
// Redefined virtual functions 
string Spear::swingType()const {
	return "Pierces Player 2 doing " + to_string(getDoesDamage()) + " damage";
}

string Spear::finisherMove()const {
	return "360 into air piercing downed opponents skull";
}
std::ostream& Spear::attack(std::ostream& strm)const {
	strm << "Player 1 " << swingType() << endl;
	return strm;
}

std::ostream& Spear::weaponLevelDesc(std::ostream& strm)const {
	strm << "Player 1's weapon level = " << getWeaponLevel();

	return strm;
}
