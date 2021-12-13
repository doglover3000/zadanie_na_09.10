#include "Check.h"
Check::Check() : Purchase() {}

Check::Check(Product& product, int numofProd, double totalPrice) : Purchase(product, numofProd, totalPrice) {}

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

void Check::add_purchase(Product& product)
{
	Purchase::getProduct().setName(product.getName());
	Purchase::getProduct().setPrice(product.getPrice());
	int _numofProd;
	cout << "Ведите количество продукта, которое хотите купить: ";
	cin >> _numofProd;
	Purchase::setNumberofProducts(_numofProd);

	Purchase::setTotalPrice(product.getPrice() * Purchase::getNumberofProducts());
}

void Check::printCheque()
{
	cout << Purchase::getProduct().getName() << "  " << Purchase::getNumberofProducts() << "  x  " << Purchase::getProduct().getPrice() << "  =  " << Purchase::setTotalPrice() << endl;
}

Product& Check::getProduct()
{
	return Purchase::getProduct();
}

int Check::getNumberofProducts()
{
	return Purchase::getNumberofProducts();
}

double Check::getTotalPrice()
{
	return Purchase::setTotalPrice();
}
