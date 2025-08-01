#include "Spear.h"
#include <iostream>
#include <string>
using namespace std;

//Constructors
Spear::Spear() : Weapon() {

}
Spear::Spear(double doesDamage,string level) {
	setDoesDamage(doesDamage);
	setWeaponLevel(level);
}
// Redefined virtual functions 
string Spear::swingType()const {
	return "Pierce, which does " + to_string(getDoesDamage()) + " damage";
}

string Spear::finisherMove()const {
	return "360 into air piercing downed opponents skull";
}
std::ostream& Spear::attack(std::ostream& strm)const {
	strm << swingType() << endl;
	return strm;
}

std::ostream& Spear::weaponLevelDesc(std::ostream& strm)const {
	strm << "Weapon type = " << weaponType << endl;
	strm << "Weapon level = " << getWeaponLevel();

	return strm;
}
