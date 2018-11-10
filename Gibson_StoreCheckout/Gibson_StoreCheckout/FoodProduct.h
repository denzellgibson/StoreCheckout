//Denzell Gibson
//8/18/2017

#ifndef FOODPRODUCT_H_
#define FOODPRODUCT_H_

#include "AbstractProduct.h"
#include "Header.h"

//Abstract class for Food products.
class FoodProduct : public Product
{
public:
	//Setters.
	void setExpirationDate(std::string newExpDate) { expirationDate = newExpDate; };
	void setStorageTemperature(std::string storTemp) { storageTemperature = storTemp; };
protected:
	std::string expirationDate; //When the food item expires from in X amount of days from instantiation.
	std::string storageTemperature; //The temperature that item needs to be stored at.
};

#endif