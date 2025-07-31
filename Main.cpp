#include "Weapon.h"
#include "Sword.h"
#include "Spear.h"
#include <iostream>
using namespace std;

int main() {
	Weapon* sword = new Sword(11);
	cout << *sword << endl;

	Weapon* spear = new Spear(9);
	cout << *spear << endl;
}