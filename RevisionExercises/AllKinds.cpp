#include "AllKinds.h"
AllKinds::AllKinds()
{
	this->anInt = 0;
	this->aFloat = 0;
	this->aLong = 0l;
}
AllKinds::AllKinds(int i, float f, long l)
{
	this->anInt = i;
	this->aFloat = f;
	this->aLong = l;
}

int AllKinds::getInt()
{
	return anInt;
}
float AllKinds::getFloat()
{
	return aFloat;
}
long AllKinds::getLong()
{
	return aLong;
}

void AllKinds::setInt(int i)
{
	this->anInt = i;
}
void AllKinds::setFloat(float f)
{
	this->aFloat = f;
}
void AllKinds::setLong(long l)
{
	this->aLong = l;
}

long AllKinds::getIntLong()
{
	return anInt + aLong;
}
double AllKinds::getIntFloat()
{
	return anInt + aFloat;
}
double AllKinds::getFloatLong()
{
	return aLong + aFloat;
}