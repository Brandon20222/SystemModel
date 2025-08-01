#include "Player.h"
#include "Sword.h"
#include <iostream>
#include <typeinfo>
#include "GreatSword.h"
using namespace std;

// Constructors and Destructors
Player::Player() {
	weapon = new Sword;
	name = "Unkown";
	elims = 0;
	className = "Unknown";
	inventory = new Inventory;
}
Player::Player(Weapon* weapon, string name, int elims, string className,Inventory* inventory) {
	this->weapon = weapon;
	this->name = name;
	this->elims = elims;
	this->className = className;
	this->inventory = inventory;
}
Player::~Player() {
	delete weapon;
}
// Getters and Setters
Weapon* Player::getWeapon()const{
	return weapon;
}
string Player::getName()const{
	return name;
}
int Player::getElims()const{
	return elims;
}
string Player::getClassName()const{
	return className;
}
void Player::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
}
void Player::setName(string name) {
	this->name = name;
}
void Player::setElims(int elims) {
	this->elims = elims;
}
void Player::SetClassName(string className) {
	this->className = className;
}
Inventory* Player::getInventory()const {
	return inventory;
}
void Player::setInventory(Inventory* inventory) {
	this->inventory = inventory;
}
int Player::getHealth()const {
	return health;
}
void Player::setHealth(int health) {
	this->health = health;
}

std::ostream& operator<<(std::ostream& strm,const Player& right) {
	//Displaying player information
	strm << "Player's name: " << right.getName() << endl
	<< "Class Type: " << right.getClassName() << endl;
	right.getWeapon()->weaponLevelDesc(strm);
	strm << endl << "Eliminations: " << right.getElims() << endl
		<< "Attack type: ";
		right.getWeapon()->attack(strm);
		strm << "Finisher Move: " << right.getWeapon()->finisherMove() << endl;
		
			// If right.weapon is a greatsword then display the special move for greatsword with the player display
			GreatSword* gs = dynamic_cast<GreatSword*>(right.getWeapon());
			if (gs)
			strm << "Special Move: " << right.getWeapon()->specialClassMove() << endl;

			
		// Display Player Inventory
		strm <<  "Inventory:\n";
		vector<string> items = right.getInventory()->getItems();
		for (int i = 0; i < right.getInventory()->getItems().size(); i++) {
			strm << items[i];
			strm << endl;
		}
	
		

	return strm;
}
