#include "Product.h"

Product::Product()
{
	_name = "no_name";
	_price = 0;
}

Product::Product(string name, double price)
{
	_name = name;
	_price = price;
}

void Product::setName(string name)
{
	_name = name;
}

void Product::setPrice(double price)
{
	_price = price;
}

string Product::getName()
{
	return _name;
}

double Product::getPrice()
{
	return _price;
}

void Product::printInfo()
{
	cout << getName() << "    " << getPrice() << endl;
}
