#pragma once
#include "Vehicle.h"

class Train:public Vehicle
{
private:
	int m_class;
public:
	Train();
	Train(const char* name, int speed = 0, double load = 0, int cl = 0);
	Train(const Train& copy);
	~Train(){}
	void Print();
	void Scan();
	inline int GetClass()
	{
		return m_class;
	}
	Train& operator++ ();
	friend ostream& operator<<(ostream& os, Train& train);
	friend istream& operator>>(istream& is, Train& train);
};
ostream& operator<<(ostream& os, Train& train);
istream& operator>>(istream& is, Train& train);