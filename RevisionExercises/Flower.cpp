#include "Flower.h"

Flower::Flower()
{
	this->name = "Rose";
	this->numPetals = 22;
	this->price = 1.99f;
}
Flower::Flower(string n, int numP, float p)
{
	this->name = n;
	this->numPetals = numP;
	this->price = p;
}

string Flower::getName()const
{
	return this->name;
}
int Flower::getNumberOfPetals()const
{
	return this->numPetals;
}
float Flower::getPrice()const
{
	return this->price;
}

void Flower::setName(string s)
{
	this->name = s;
}
void Flower::setNumberOfPetals(int np)
{
	this->numPetals = np;
}
void Flower::setPrice(float price)
{
	this->price = price;
}

ostream& operator<<(ostream& out,const Flower &p)
{
	out << p.getName() << " with " << p.getNumberOfPetals() << " petals for " << p.getPrice() << endl;
	return out;
}

Flower& Flower::operator+(float p)
{
	this->price += p;
	return *this;
}
//pre increment operator
Flower& Flower::operator++()
{
	this->numPetals++;
	return *this;
}
// Post increment operator
Flower Flower::operator++(int i)
{
	Flower f = *this;
	++numPetals;
	return f;

}