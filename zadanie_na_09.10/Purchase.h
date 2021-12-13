#pragma once
#include <iostream>;
#include "Product.h"
using namespace std;


class Purchase
{
public:

	Purchase();
	Purchase(Product& product, int numofProd, double totalPrice);

	void setProduct(Product& product);
	void setNumberofProducts(int numofProd);
	void setTotalPrice(double totalPrice);

	Product& getProduct();
	int getNumberofProducts();
	double getTotalPrice();
	double setTotalPrice();

	virtual void add_purchase(Product&) = 0;
	virtual void printCheque() = 0;

private:
	Product _product;
	int _numofProd;
	double  _totalPrice;

};

