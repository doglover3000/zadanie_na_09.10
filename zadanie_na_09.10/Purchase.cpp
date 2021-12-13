#include "Purchase.h"

Purchase::Purchase()
{
	_numofProd = 0;
	_totalPrice = 0;
}

Purchase::Purchase(Product& product, int numofProd, double totalPrice)
{
	_product = product;
	_numofProd = numofProd;
	_totalPrice = totalPrice;
}

void Purchase::setProduct(Product& product)
{
	_product = product;
}

void Purchase::setNumberofProducts(int numofProd)
{
	_numofProd = numofProd;
}

void Purchase::setTotalPrice(double totalPrice)
{
	_totalPrice = totalPrice;
}

Product& Purchase::getProduct()
{
	return _product;
}

int Purchase::getNumberofProducts()
{
	return _numofProd;
}

double Purchase::getTotalPrice()
{
	return _totalPrice;
}

double Purchase::setTotalPrice()
{
	return _totalPrice;
}
