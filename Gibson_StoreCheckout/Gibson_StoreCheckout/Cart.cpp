//Denzell Gibson
//8/18/2017

#include "Cart.h"

//Default constructor. Does nothing.
Cart::Cart()
{

}

//Returns true if name matches a product's name.
bool Cart::searchCart(std::string product)
{
	for (unsigned int i = 0; i < cart.size(); i++)
	{
		if (cart[i]->getName() == product)
			return true;
	}

	return false;
}

//Adds a product to the cart vector
void Cart::addItem(Product *product)
{
	cart.push_back(product);
}

//Removes product from cart vector.
void Cart::removeItem(std::string name)
{
	for (int i = 0; i < cart.size(); i++)
	{
		if (cart[i]->getName() == name)
			cart.erase(cart.begin() + i);
	}
}

//Displays name and price of all products in cart vector.
void Cart::displayCart()
{
	if (!cart.empty())
	{
		for (int i = 0; i < cart.size(); i++)
		{
			std::cout << cart[i]->getName() << " $" << cart[i]->getPrice() << std::endl;
		}
		std::cout <<std::endl;
	}
	else
		std::cout << "Cart is empty." << std::endl << std::endl;
}

//Returns true if cart vector is empty.
bool Cart::isEmpty()
{
	if (cart.empty() == true)
		return true;
	else
		return false;
}

//Calculates total and returns total.
double Cart::getTotal()
{
	calculateTotal();
	return total;
}

//Calculates total by adding the price of each product in the cart vector.
double Cart::calculateTotal()
{
	if (!cart.empty())
	{
		for (int i = 0; i < cart.size(); i++)
		{
			total += cart[i]->getPrice();
		}
		return total;
	}
	else
	{
		total = 0;
		return total;
	}
}

//Clears the cart vector of all products.
void Cart::emptyCart()
{
	cart.clear();
}