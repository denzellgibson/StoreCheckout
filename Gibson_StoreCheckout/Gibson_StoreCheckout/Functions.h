//Denzell Gibson
//8/18/2017

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include "Header.h"
#include "AbstractProduct.h"
#include "Cart.h"
#include "Inventory.h"

//Function Prototypes.
void newOrder(Inventory *pInventory, Cart *pCart); //Submenu for new order, when chosen in main menu.
void displayMainMenu(); //Displays main menu.
void displaySubMenu(); //Displays submenu.
void displayInventory(Inventory *pInventory); //Displays all items in inventory.
void displayCart(Cart *pCart); //Displays all items in cart.
void addItems(Inventory *pInventory, Cart *pCart); //Adds items to cart.
void removeItem(Cart *pCart); //Removes items from cart.
void checkOut(Cart *pCart); //Checks out items in cart.
void cancelOrder(Cart *pCart); //Removes all items from cart and back into inventory, and returns to main menu.
void exitProgram(); //Exits the program, updating the inventory before exiting.
bool searchProduct(Inventory *pInventory, std::string); //Searches for product by string in inventory.

#endif