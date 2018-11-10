//Denzell Gibson
//8/18/2017

#include "Header.h"
#include "Functions.h"

int main()
{
	//Declarations.
	Inventory inventory;
	Cart cart;
	int input;

	//Introduction.
	std::cout << std::endl;
	std::cout << "This is a checkout system." << std::endl;
	std::cout << "This system allows you to display items in inventory, \n";
	std::cout << "Add, remove, or display items in your cart, \n";
	std::cout << "Checkout items and pay for them, calculating change and money still due, \n";
	std::cout << std::endl;

	while (true) //While true...
	{
		displayMainMenu();//Displays main menu.

		try
		{
			std::cin >> input; //Gets input from user.

			if (input == 1) //If input is 1...
			{
				newOrder(&inventory, &cart); //Moves to the new order submenu.
			}
			else if (input == 2) //If input is 2...
			{
				exitProgram(); //Exit program.
			}
			else
			{
				throw 20; //If input is anything else, throw exception.
			}
		}
		catch (int e) //Catches invalid input and asks the user to input again.
		{
			std::cout << "Invalid Input!" << std::endl;
			std::cout << "Please enter a valid number." << std::endl;
		}
	}
	return 0;
}