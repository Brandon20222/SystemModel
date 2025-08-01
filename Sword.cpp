#include "Sword.h"
#include <string>

//Constructors
Sword::Sword() : Weapon(){
	
}
Sword::Sword(double doesDamage,string level)  {
	setDoesDamage(doesDamage);
	setWeaponLevel(level);
}

// Redefined virtual functions 

string Sword::finisherMove()const {
	return "Stabs sword straight through downed opponents chin impailing them";
}

string Sword::swingType()const {
	return "Slash, which does " + to_string(getDoesDamage()) + " damage";
}
std::ostream& Sword::attack(std::ostream& strm)const {
	strm << swingType() << endl;

	return strm;
}

std::ostream& Sword::weaponLevelDesc(std::ostream& strm)const {
	strm << "Weapon type = " << weaponType << endl;
	strm << "Weapon level = " + getWeaponLevel();
	return strm;
}
