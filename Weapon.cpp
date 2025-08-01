#include "Weapon.h"
#include <iostream>
using namespace std;

Weapon::Weapon() {
	doesDamage = 0.0;
	weaponLevel = "Bronze";
	weaponType = "Just a weapon";
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
void Weapon::setWeaponType(string weaponType) {
	this->weaponType = weaponType;
}
string Weapon::getWeaponType() {
	return weaponType;
}
// Overloaded insertion operator
std::ostream& operator<<(std::ostream& strm, Weapon& weapon) {
	weapon.weaponLevelDesc(strm) << endl;
	weapon.attack(strm);
	
	return strm;
}
string Weapon::specialClassMove() {
	return "No special move available";
}
