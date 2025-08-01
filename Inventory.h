#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include <iostream>
using namespace std;

class Inventory
{
private:
	vector<string> items;
public:
	// Constructor
	Inventory();
	Inventory(vector<string> items);
	// Getters and Setters
	vector<string> getItems();
	void setItems(vector<string> items);
	

};

#endif

