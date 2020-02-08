#pragma once
#include "Vehicle.h"

class Auto :public Vehicle
{
private:
	int m_engine;
public:
	Auto();
	Auto(const char* name, int speed, double load, int engine = EngineType::none);
	Auto(const Auto& copy);
	~Auto(){}

	void Print();
	void Scan();
	inline int GetEngine()
	{
		return m_engine;
	}
	Auto& operator= (const Auto& automobile);
	Auto operator+ (double load);
	friend ostream& operator<< (ostream& os, Auto& automobile);
	friend istream& operator>> (istream& is, Auto& automobile);
};
ostream& operator<< (ostream& os, Auto& automobile);
istream& operator>> (istream& is, Auto& automobile);