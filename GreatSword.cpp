#include "GreatSword.h"
#include <iostream>
#include <string>
using namespace std;
// Constructors
GreatSword::GreatSword() {
	setWeaponLevel("Steel");
	setDoesDamage(16);
}
GreatSword::GreatSword(double doesDamage, string level) {
	setDoesDamage(doesDamage);
	setWeaponLevel(level);
}
// Redefined virtual Functions
string GreatSword::swingType()const {
	return "Two-handed Horizontal Slash, which does " + to_string(getDoesDamage()) + " damage";
}
string GreatSword::finisherMove()const {
	return "Winds back greatsword and then decapitates opponents head cleanly";
}
std::ostream& GreatSword::attack(std::ostream& strm)const {
	strm << swingType() << endl;
	
	return strm;
}
std::ostream& GreatSword::weaponLevelDesc(std::ostream& strm)const {
	strm << "Weapon type = " << weaponType << endl;
	strm << "Weapon level = " + getWeaponLevel();
	return strm;
}

string GreatSword::specialClassMove() {
	return "360 spin move for 5 seconds";
}


