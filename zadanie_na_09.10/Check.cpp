#include "Check.h"
Check::Check() : Purchase() {}

Check::Check(Product& product, int numofProd, double totalPrice)
{
	Purchase(product, numofProd, totalPrice);
}

void Check::setProduct(Product& product)
{
	Purchase::setProduct(product);
}

void Check::setNumberofProducts(int numofProd)
{
	Purchase::setNumberofProducts(numofProd);
}

void Check::setTotalPrice(double totalPrice)
{
	Purchase::setTotalPrice(totalPrice);
}

Product& Check::getProduct()
{
	Purchase::getProduct();
}

int Check::getNumberofProducts()
{
	Purchase::getNumberofProducts();
}

double Check::getTotalPrice()
{
	Purchase::setTotalPrice();
}
