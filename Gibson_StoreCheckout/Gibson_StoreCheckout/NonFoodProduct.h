//Denzell Gibson
//8/18/2017

#ifndef NONFOODPRODUCT_H_
#define NONFOODPRODUCT_H_

#include "AbstractProduct.h"
#include "Header.h"

//Abstract class for nonfood products.
class NonFoodProduct : public Product
{
public:
	//Setter.
	void setSize(std::string newSize) { size = newSize; };

protected:
	std::string size; //For the dimension of the product.
};

#endif