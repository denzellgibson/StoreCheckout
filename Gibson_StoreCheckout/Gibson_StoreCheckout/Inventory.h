//Denzell Gibson
//8/18/2017

#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "Header.h"

class Inventory
{
public:
	Inventory(); //Default constructor.

	bool searchFoodInventory(std::string); //Returns true is name matches product name, for food items.
	bool searchNonFoodInventory(std::string); //Returns ture if name matches product name, for nonfood items.
	void displayInventory(); //Displays all products from both vectors.
private:
	std::vector<std::string> foodInventory, nonFoodInventory;//Holds products from both food and nonfood.
};

#endif