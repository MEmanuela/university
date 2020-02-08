#include "Auto.h"

Auto::Auto() :Vehicle()
{
	m_engine = EngineType::none;
}
Auto::Auto(const char* name, int speed, double load, int engine) :Vehicle(name, speed, load)
{
	if (engine != 1 && engine != 2 && engine != 3)
		m_engine = EngineType::none;
	this->m_engine = engine;
}
Auto::Auto(const Auto& copy) :Vehicle(copy)
{
	this->m_engine = copy.m_engine;
}

void Auto::Print()
{
	Vehicle::Print();
	switch (m_engine)
	{
	case EngineType::otto:
		cout << "otto";
		break;
	case EngineType::diesel:
		cout << "diesel";
		break;
	case EngineType::electric:
		cout << "electric";
		break;
	default:
		cout << "none";
		break;
	}
	cout << endl;
}
void Auto::Scan()
{
	Vehicle::Scan();
	cout << "Enter the engine: ";
	cin >> m_engine;
}

Auto& Auto::operator= (const Auto& automobile)
{
	if (m_ownerName != nullptr)
	{
		delete[]m_ownerName;
	}
	this->m_ownerName = new char[strlen(automobile.m_ownerName) + 1];
	strcpy_s(this->m_ownerName, strlen(automobile.m_ownerName) + 1, automobile.m_ownerName);
	this->m_speed = automobile.m_speed;
	this->m_load = automobile.m_load;
	this->m_engine = automobile.m_engine;
	return*this;
}
Auto Auto::operator+ (double load)
{
	this->m_load += load;
	return*this;
}

ostream& operator<< (ostream& os, Auto& automobile)
{
	os << "Name: " << automobile.m_ownerName << endl;
	os << "Speed: " << automobile.m_speed << endl;
	os << "Load: " << automobile.m_load << endl;
	cout << "Engine Type: ";
	switch (automobile.m_engine)
	{
	case EngineType::otto:
		cout << "otto";
		break;
	case EngineType::diesel:
		cout << "diesel";
		break;
	case EngineType::electric:
		cout << "electric";
		break;
	default:
		cout << "none";
		break;
	}
	cout << endl;
	return os;
}

istream& operator>> (istream& is, Auto& automobile)
{
	cout << "Speed = ";
	is >> automobile.m_speed;
	cout << "Load = ";
	is >> automobile.m_load;
	cout << "Owner's Name = ";
	char buff[256];
	is.ignore(256, '\n');
	is.getline(buff, 254);
	if (automobile.m_ownerName != nullptr)
		delete[]automobile.m_ownerName;
	automobile.m_ownerName = new char[strlen(buff) + 1];
	strcpy_s(automobile.m_ownerName, strlen(buff) + 1, buff);
	do
	{
		cout << "Engine Type (otto = 1, diesel = 2, electric = 3) ";
		is >> automobile.m_engine;
	} while (automobile.m_engine != 1 && automobile.m_engine != 2 && automobile.m_engine != 3);
	cout << endl;
	return is;
}