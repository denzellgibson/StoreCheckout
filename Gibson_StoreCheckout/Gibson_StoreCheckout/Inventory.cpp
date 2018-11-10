//Denzell Gibson
//8/18/2017

#include "Inventory.h"

//Default Constructor.
Inventory::Inventory()
{
	//Adds inventory to vectors.
	foodInventory.push_back("Eggs");
	foodInventory.push_back("Bread");
	nonFoodInventory.push_back("Toilet Paper");
}

//Returns true if the name entered matches a name in the food vector.
bool Inventory::searchFoodInventory(std::string product)
{

	for (int i = 0; i < foodInventory.size(); i++)
	{
		if (foodInventory[i] == product)
			return true;
	}

	return false;
}

//Returns true if the name entered maches a name in the nonfood vector.
bool Inventory::searchNonFoodInventory(std::string product)
{

	for (int i = 0; i < nonFoodInventory.size(); i++)
	{
		if (nonFoodInventory[i] == product)
			return true;
	}

	return false;
}

//Display the store's inventory from both vectors.
void Inventory::displayInventory()
{
	for (int i = 0; i < foodInventory.size(); i++)
	{
		std::cout << foodInventory[i] << std::endl;
	}
	for (int j = 0; j < nonFoodInventory.size(); j++)
	{
		std::cout << nonFoodInventory[j] << std::endl;
	}
	std::cout << std::endl;
}