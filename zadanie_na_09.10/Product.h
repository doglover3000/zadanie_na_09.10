#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
	Product();
	Product(string name, double price);

	void setName(string name);
	void setPrice(double price);
	string getName();
	double getPrice();
	void printInfo();

private:
	string _name;
	double _price;

};
