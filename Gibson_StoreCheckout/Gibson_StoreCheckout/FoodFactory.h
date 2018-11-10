//Denzell Gibson
//8/18/2017

#ifndef FOODFACTORY_H_
#define FOODFACTORY_H_

#include "AbstractFactory.h"
#include "Food.h"

//Factory that produces food products.
class FoodFactory : AbstractFactory
{
public:
	//Creates a food product of the matching name.
	Product* createProduct(std::string newProduct)
	{
		if (newProduct == "Eggs")
			return new Eggs;
		else if (newProduct == "Bread")
			return new Bread;
		else
			return new Product;
	}
};

#endif