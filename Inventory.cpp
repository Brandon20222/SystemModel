#include "Inventory.h"

// Constructor
Inventory::Inventory() {
	items.push_back("Health Potion");
	items.push_back("Health Potion");
}
Inventory::Inventory(vector<string> items) {
	this->items = items;
}
// Getters and Setters
vector<string> Inventory::getItems() {
	return items;
}

void Inventory::setItems(vector<string> items) {
	this->items = items;
}

