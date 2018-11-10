//Denzell Gibson
//8/18/2017

#include "Functions.h"

void newOrder(Inventory *pInventory, Cart *pCart)
{
	bool isRunning = true;
	int input;

	while (isRunning == true)
	{
		try
		{
			displaySubMenu(); //Displays submenu.
			std::cin >> input; //Gets user input.
			std::cout << std::endl;

			if (input == 1) //Displays items in the inventory.
			{
				displayInventory(pInventory);
			}

			else if (input == 2) //Adds items to cart.
			{
				addItems(pInventory, pCart);
			}

			else if (input == 3) //Removes items from the cart.
			{
				removeItem(pCart);
			}

			else if (input == 4) //Displays all items in cart.
			{
				displayCart(pCart);
			}

			else if (input == 5) //Turns to checkout, breaks loop afterwards.
			{
				checkOut(pCart);
				isRunning = false;
			}

			else if (input == 6) //Cancels the order, clearing the cart. Breaks loop.
			{
				cancelOrder(pCart);
				isRunning = false;
			}
			else
			{
				throw 2; //If input is anything else, throw exception.
			}
		}
		catch (int e) //Yells at user to put a valid input.
		{
			std::cout << "Invalid Input!" << std::endl;
			std::cout << "Please enter a valid input" << std::endl;
			std::cout << std::endl;
		}
	}
}

void displayMainMenu() //Displays the main menu.
{
	std::cout << "Welcome to Checkout System." << std::endl;
	std::cout << "Please enter the number that corresponds to the desired action." << std::endl;
	std::cout << "1. New Order." << std::endl;
	std::cout << "2. Exit Program." << std::endl;
}

void displaySubMenu() //Displays the new order menu.
{
	std::cout << std::endl;
	std::cout << "Please enter the value that corresponds with the desired action." << std::endl;
	std::cout << "1. Display items available for purchase." << std::endl;
	std::cout << "2. Add items to Cart." << std::endl;
	std::cout << "3. Remove item from Cart." << std::endl;
	std::cout << "4. Display Cart." << std::endl;
	std::cout << "5. Checkout." << std::endl;
	std::cout << "6. Cancel Order." << std::endl;
}

//Displays all items in inventory.
void displayInventory(Inventory *pInventory) //Passes in inventory by pointer.
{
	pInventory->displayInventory();
}

//Displays all items in cart.
void displayCart(Cart *pCart)
{
	pCart->displayCart();
}

//Searches for product by string in vector.
bool searchProduct(Inventory *pInventory, std::string product) //Pass vector in by pointer, and pass string.
{
	if (pInventory->searchFoodInventory(product))
		return true;
	else if (pInventory->searchNonFoodInventory(product))
		return true;
	else
		return false;
}

//Asks user for name and quantity and adds the item into the cart.
void addItems(Inventory *pInventory, Cart *pCart)
{
	//Declarations.
	std::string name;
	FoodFactory foodFactory;
	NonFoodFactory nonFoodFactory;
	Product *product;

	//Asks the user for name of product.
	std::cout << "Please enter the name of the product" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name); //Stores input into name.
	std::cout << std::endl;
	
	//Adds item to cart if the item exist, otherwise tells user that item does not exists.
	if (pInventory->searchFoodInventory(name) == true)
	{
		product = foodFactory.createProduct(name);
		pCart->addItem(product);
		std::cout << "Item added!" << std::endl;
	}
	else if(pInventory->searchNonFoodInventory(name) == true)
	{
		product = nonFoodFactory.createProduct(name);
		pCart->addItem(product);
		std::cout << "Item added!" << std::endl;
	}
	else
	{
		std::cout << "Product does not exist." << std::endl;
	}
	std::cout << std::endl;
}

//Removes item by searching for matching name given by user.
void removeItem(Cart *pCart)
{
	//Declarations.
	std::string name;

	//Asks the user for name of product.
	std::cout << "Please enter the name of the product" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	std::cout << std::endl;

	if (pCart->searchCart(name) == true)//If there is not matching names...
	{
		pCart->removeItem(name);
		std::cout << "Item removed." << std::endl;
	}
	else
	{
		std::cout << "Item does not exist in cart." << std::endl;
	}
	std::cout << std::endl;
}

//Moves to checkout, totaling up price of all items and makes user pay.
void checkOut(Cart *pCart)
{
	bool checkout = true;
	double total = 0;
	double paid;

	if (pCart->isEmpty() == true)
	{
		std::cout << "There are no items in the cart." << std::endl;
		std::cout << std::endl;
	}
	else
	{
		while (checkout == true) //While true;
		{
			try
			{
				pCart->displayCart(); //Shows all items in cart.

				total = pCart->getTotal();

				//Displays total.
				std::cout << std::endl;
				std::cout << "Here is the total: " << "$" << total << std::endl;
				std::cout << std::endl;

				while (total > 0) //While the total is above 0...
				{
					std::cout << "Please enter amount paid:" << std::endl; //Asks for user to pay.
					std::cin >> paid; //Stores amount entered into paid.
					std::cout << std::endl;

					total -= paid; //Subtracts paid from total.
					if (total > 0) //Checks if total is now over 0.
					{
						std::cout << "$" << total << " amount is still due." << std::endl; //Tells user amount still owed.
					}
				}

				//Otherwise...
				std::cout << "Your change is: $" << total * (-1) << std::endl; //Tells change.
				std::cout << "Thank you for shopping with us. We hope to see you again!" << std::endl << std::endl;
				pCart->emptyCart(); //Clears cart.
				checkout = false; //Breaks loop.
			}
			catch (double e) //Yells at user that input is invalid.
			{
				std::cout << "Invalid Input!" << std::endl;
				std::cin >> paid; //Makes the user enter something again.
			}
		}
	}
}

//Cancels the order, before checkout.
void cancelOrder(Cart *pCart)
{
	pCart->emptyCart(); //Clears the cart.
}

void exitProgram()
{
	exit(0); //Exits the program.
}


