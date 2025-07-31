#include "Weapon.h"

Weapon::Weapon() {
	doesDamage = 0.0;
	weaponLevel = "Bronze";
}
// Getters and Setters
void Weapon::setDoesDamage(double doesDamage){
	this->doesDamage = doesDamage;
}

void Weapon::setWeaponLevel(string weaponLevel) {
	this->weaponLevel = weaponLevel;
}

double Weapon::getDoesDamage()const {
	return doesDamage;
}
string Weapon::getWeaponLevel()const {
	return weaponLevel;
}
// Overloaded insertion operator
std::ostream& operator<<(std::ostream& strm, Weapon& weapon) {
	weapon.weaponLevelDesc(strm) << endl;
	weapon.attack(strm);
	
	return strm;
}