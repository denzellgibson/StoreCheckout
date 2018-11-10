//Denzell Gibosn
//8/18/2017

#ifndef ABSTRACTPRODUCT_H_
#define ABSTRACTPRODUCT_H_

#include "Header.h"

//Abstract Product for food and nonfood product classes.
class Product
{
public:

	//Setters and getters.
	void setName(std::string newName) { name = newName; };
	void setPrice(float newPrice) { price = newPrice; }; 
	std::string getName() { return name; };
	double getPrice() { return price; };

protected:
	std::string name; //Holds the name of the product.
	double price; //Holds the price of the product.
};

#endif