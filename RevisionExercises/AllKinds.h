#pragma once
class AllKinds
{
	int anInt;
	float aFloat;
	long aLong;
public:
	AllKinds();
	AllKinds(int i, float f, long l);

	int getInt();
	float getFloat();
	long getLong();

	void setInt(int i);
	void setFloat(float f);
	void setLong(long l);

	long getIntLong();
	double getIntFloat();
	double getFloatLong();
};

