//Denzell Gibson
//8/18/2017

#ifndef NONFOOD_H_
#define NONFOOD_H_

#include "Header.h"
#include "NonFoodProduct.h"

//Nonfood Product called Toilet Paper.
class ToiletPaper : public NonFoodProduct
{
public:
	//Default constructor.
	ToiletPaper()
	{
		name = "Toilet Paper";
		price = 3.99;
		size = "Small";
	}
};

#endif