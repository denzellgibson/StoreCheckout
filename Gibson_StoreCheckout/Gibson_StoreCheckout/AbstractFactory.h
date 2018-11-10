//Denzell Gibson
//8/18/2017

#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

#include "Header.h"
#include "AbstractProduct.h"

//Used to create products. Abstract.
class AbstractFactory
{
public:
	//Creates product of matching name. Pure virtual.
	virtual Product* createProduct(std::string) = 0;
};

#endif