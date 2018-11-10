//Denzell Gibson
//8/18/2017

#ifndef CART_H_
#define CART_H_

#include "Header.h"
#include "Food.h"
#include "NonFood.h"
#include "NonFoodFactory.h"
#include "FoodFactory.h"

//Holds the user's items.
class Cart
{
public:
	Cart(); //Default constructor.

	bool searchCart(std::string); //Returns true is name matches product's name in cart.
	void addItem(Product *product); //Adds product into cart.
	void removeItem(std::string); //Removes product from cart.
	bool isEmpty(); //Returns true is cart is empty.
	void displayCart(); //Displays items in cart.
	double getTotal(); //Returns total price of all items.
	double calculateTotal(); //Calculates total of all items in cart.
	void emptyCart(); //Clears cart.

private:
	std::vector<Product*> cart; //Holds the products.
	double total = 0; //Total price of items.
};

#endif