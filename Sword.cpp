#include "Sword.h"
#include <string>

//Constructors
Sword::Sword() : Weapon(){
	
}
Sword::Sword(double doesDamage)  {
	setDoesDamage(doesDamage);

}

// Redefined virtual functions 

string Sword::finisherMove()const {
	return "Stabs sword straight through downed opponents chin impailing them";
}

string Sword::swingType()const {
	return "Slashes Player 2 doing " + to_string(getDoesDamage()) + " damage";
}
std::ostream& Sword::attack(std::ostream& strm)const {
	strm << "Player 1 " << swingType() << endl;

	return strm;
}

std::ostream& Sword::weaponLevelDesc(std::ostream& strm)const {
	strm << "Player 1's weapon type = " << weaponType << endl;
	strm << "Player 1's weapon level = " + getWeaponLevel();
	return strm;
}
