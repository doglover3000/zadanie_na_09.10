#include <iostream>
#include <locale>
#include <vector>
#include <conio.h>
#include "Product.h"
#include "Purchase.h"
#include "Check.h"

vector<Product> products;
vector<Purchase*> purchase;

void add_premade_products();
void menu();
void print_menu();
void PrintProducts();
bool Buying();
void Payment();
bool correctProduct(int i);
void PrintPurchase();
void TotalPrice();

void main()
{
	setlocale(LC_ALL, "rus");
	add_premade_products();

	while (1)
		menu();
}

void add_premade_products()
{
	products.push_back(Product("apple", 10));
	products.push_back(Product("tomato", 120));
	products.push_back(Product("bread", 50));
	products.push_back(Product("cheese", 120));
	products.push_back(Product("chicken", 180));
}

void menu() 
{
	print_menu();
	int entered;
	cin >> entered;
	int key;
	switch (entered)
	{
	case 0:
		PrintProducts();
		break;
	case 1:
		if (Buying() == true)
			Payment();
		break;
	case 2:
		exit(0);
	}
}

void print_menu() 
{
	cout << "Выберите действие:" << endl;
	cout << "0. Вывести список продуктов" << endl;
	cout << "1. Совершить покупку" << endl;
	cout << "2. Выйти из программы" << endl;
}

void PrintProducts() 
{
	cout << endl << "Товары, доступные в магазине:" << endl;
	for (int i = 0; i < products.size(); i++) {
		cout << i + 1 << ". ";
		products[i].printInfo();
	}
	cout << endl;
}

bool Buying()
{
	if (products.size() == 0)
	{
		cout << "В нашем магазине нет продуктов" << endl;
		return false;
	}
	else
	{
		int key = 27;
		PrintProducts();
		cout << "Заврешить покупки - ESC" << endl;
		cout << "Продолжить покупки - Enter" << endl;
		int entered;
		while (1) 
		{
			cout << "Выберите продукт ";
			cin >> entered;
			if (correctProduct(entered) == true)
			{
				Check* check = new Check;
				check->add_purchase(products.at(entered - 1));
				purchase.push_back(check);
				if (key == _getch())
					break;
			}
			else
				cout << "В магазине нет такого продукта. " << endl;
		}
		return true;
	}
}

void Payment()
{
	PrintPurchase();
	TotalPrice();
	cout << "Оплатите покупку (Entrer)" << endl;
	int key = 13;
	if (key == _getch())
	{
		cout << "Покупка оплачена" << endl << endl;
		purchase.clear();
	}
	else
		cout << "Покупка не оплачена" << endl << endl;
}

bool correctProduct(int i)
{
	if (i <= products.size() && (i > 0))
		return true;
	else
		return false;
}

void PrintPurchase()
{
	cout << endl << "Содержимое корзины: " << endl;
	for (int i = 0; i < purchase.size(); i++) 
	{
		cout << i + 1 << ". ";
		purchase[i]->printCheque();
	}
}

void TotalPrice()
{
	double price, total_price = 0;
	for (int i = 0; i < purchase.size(); i++) 
	{
		price = purchase[i]->getTotalPrice();
		total_price += price;
	}
	cout << "ИТОГО: " << total_price << endl << endl;
}
