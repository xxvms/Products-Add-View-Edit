#include "stdafx.h"
#include "Product.h"
#include <iostream>
#include <string>


Product::Product()
{
	
}

void Product::addProduct(int productID1)
{
	system("cls");
	productID = productID1;
	std::cout << "Please type new Name: ";
	std::cin >> name;
	std::cout << "Please type new quantity: ";
	std::cin >> quantity;
	std::cout << "Please type new price: ";
	std::cin >> price;
	std::cout << "Please type new description: ";
	std::cin >> description;
}
void Product::viewProduct(char name_)
{
	system("cls");
	std::cout << "Product ID: " << productID << std::endl;
	std::cout << "Product Name: " << name << std::endl;
	std::cout << "Quantity: " << quantity << std::endl;
	std::cout << "Price: " << price << std::endl;
	std::cout << "Product Description: " << description << std::endl;
}
void Product::editProduct(int productID_)
{
	productID = productID_;
	system("cls");
	std::cout <<"Current name is " << name << " Please type new Name: ";
	std::cin >> name;
	std::cout << "Current quantity is " << quantity << " Please type new quantity: ";
	std::cin >> quantity;
	std::cout << "Current price is " << price << " Please type new price: ";
	std::cin >> price;
	std::cout << "Current description is " << description << std::endl;
	std::cout << "Please type new description: ";
	std::cin >> description;
}

Product::~Product()
{

}
