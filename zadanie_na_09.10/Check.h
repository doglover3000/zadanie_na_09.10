#pragma once
#include "Purchase.h"
class Check : public Purchase
{
public:
	Check();
	Check(Product& product, int numofProd, double totalPrice);

	void setProduct(Product& product);
	void setNumberofProducts(int numofProd);
	void setTotalPrice(double totalPrice);

	virtual void add_purchase(Product& product);
	virtual void printCheque();

	Product& getProduct();
	int getNumberofProducts();
	double getTotalPrice();
};