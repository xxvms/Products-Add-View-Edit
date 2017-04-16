#pragma once
#include <string>

class Product
{
public:
	Product();

	void addProduct(int);
	void viewProduct(char);
	void editProduct(int);

	~Product();

private:
	char name;
	int quantity;
	double price;
	int productID;
	std::string description;
};

