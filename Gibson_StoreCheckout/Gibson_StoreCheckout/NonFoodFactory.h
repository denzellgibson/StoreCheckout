//Denzell Gibson
//8/18/2017

#ifndef NONFOODFACTORY_H_
#define NONFOODFACTORY_H_

#include "AbstractFactory.h"
#include "NonFood.h"

//Factory that produces nonfood products.
class NonFoodFactory : public AbstractFactory
{
public:
	//Returns a product of the matching name.
	Product* createProduct(std::string newProduct)
	{
		if (newProduct == "Toilet Paper")
		{
			return new ToiletPaper;
		}
		else
			return new Product;
	}
};

#endif