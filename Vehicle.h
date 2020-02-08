#pragma once

#include <iostream>
namespace VehicleType
{
	static const int m_auto = 1;
	static const int train = 2;
}
namespace TrainClass
{
	static const int unknown = 0;
	static const int open = 1;
	static const int first = 2;
	static const int second = 3;
	static const int sleep = 4;
}
namespace EngineType
{
	static const int none = 0;
	static const int otto = 1;
	static const int diesel = 2;
	static const int electric = 3;
}
using namespace std;

class Vehicle
{
private:
	static int m_counter;
protected:
	char* m_ownerName;
	int m_speed;
	double m_load;
	Vehicle();
	Vehicle(const char* name, int speed = 0, double load = 0);
	Vehicle(const Vehicle& v);
public:
	virtual ~Vehicle();
	virtual void Print();
	virtual void Scan();
	static int GetContor()
	{
		return m_counter;
	}
	friend int CompareBySpeed(const Vehicle* obj1, const Vehicle* obj2);
};
int CompareBySpeed(const Vehicle* obj1, const Vehicle* obj2);