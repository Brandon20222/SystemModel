#include "Weapon.h"
#include "Sword.h"
#include "Spear.h"
#include "Player.h"
#include "GreatSword.h"
#include "Inventory.h"
#include <vector>
#include <string>
#include <iostream>
#include "Game.h"
using namespace std;

int main() {
	
	//Intialize player inventory for player 1
	vector<string> plItems1{ "Health Potion","Health Potion","Strength Potion"};
	Inventory player1Items(plItems1);
	// Intializing a spear base class Player
	Weapon* spear = new Spear(9, "Iron");
	Player player1(spear, "Trixxy", 5, "Spear Base Class",&player1Items);
	cout << player1 << endl;
	
	//Intialize player inventory for player 2
	vector<string> plItems2{ "Health Potion","Health Potion","Strength Potion","Strength Potion","Speed Potion"};
	Inventory player2Items(plItems2);
	// Intializing a Greatsword super class player
	Weapon* greatSword = new GreatSword(15, "Steel");
	Player player2(greatSword, "Cloud", 23, "Greatsword Super Class",&player2Items);
	cout << player2 << endl;

	//Intialize player inventory for player 3
	vector<string> plItems3{ "Health Potion","Health Potion","Health Potion","Gold Ring"};
	Inventory player3Items(plItems3);
	// Intializing a Sword base class player
	Weapon* sword = new Sword(10, "iron");
	Player player3(sword, "Sticky", 8, "Sword Base Class",&player3Items);
	cout << player3 << endl;

	//Game game(&player3);
}

