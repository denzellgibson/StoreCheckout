//Denzell Gibson
//8/18/2017

#ifndef FOOD_H_
#define FOOD_H_

#include "FoodProduct.h"
#include "Header.h"

//Food Product called Eggs.
class Eggs : public FoodProduct
{
public:
	//Default constructor.
	Eggs()
	{
		name = "Eggs";
		price = 4.99;
		expirationDate = "7 days";
		storageTemperature = "40F";
	}
};

//Food Product called Bread.
class Bread : public FoodProduct
{
public:
	//Default constructor.
	Bread()
	{
		name = "Bread";
		price = 2.99;
		expirationDate = "6 days";
		storageTemperature = "72F";
	}
};

#endif