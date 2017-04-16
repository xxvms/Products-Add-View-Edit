//Product add view modify and delte
#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include <string>
#include "Product.h"




int main()
{
	int id = 0;
	int choice = 9;

	Product  Product;
	while (true)
	{
		std::cout << "Please make your selection: " << std::endl;
		std::cout << "Press 1 to Add Product." << std::endl;
		std::cout << "Press 2 to Edit Product." << std::endl;
		std::cout << "Press 3 to View Product." << std::endl;
		std::cout << "Press 4 to Delete Product." << std::endl;
		std::cout << "Press 0 to Quit." << std::endl;

		std::cin >> choice;

		if (choice == 1)
		{
			std::cout << "Plese type product ID to Add" << std::endl;
			std::cin >> id;
			Product.addProduct(id);
		}
		else if (choice == 2)
 		{
			std::cout << "Plese type product ID to edit" << std::endl;
			std::cin >> id;
			Product.editProduct(id);
		}
		else if (choice == 3)
		{
			std::cout << "Plese type product ID to view" << std::endl;
			std::cin >> id;
			Product.viewProduct(id);

		}
		else if (choice == 4)
		{
			//Product.~Product;
		}
		else if (choice == 0)
		{
			break;
		}

	}
	system("pause");
	return 0;
}
