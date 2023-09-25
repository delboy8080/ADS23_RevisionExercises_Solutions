#pragma once
#include <iostream>
using namespace std;
class Flower
{
	string name;
	int numPetals;
	float price;
public:
	Flower();
	Flower(string n, int numP, float p);

	string getName() const;
	int getNumberOfPetals() const;
	float getPrice() const;

	void setName(string s);
	void setNumberOfPetals(int np);
	void setPrice(float price);

	friend ostream& operator<<(ostream& out, const Flower &p);
	Flower& operator+(float p);
	// Pre increment operator
	Flower& operator++();
	// Post increment operator
	Flower operator++(int i);
};

