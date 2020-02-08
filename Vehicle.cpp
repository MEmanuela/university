#include "Vehicle.h"

Vehicle::Vehicle()
{
	m_ownerName = nullptr;
	m_speed = 0;
	m_load = 0;
	m_counter++;
}

Vehicle::Vehicle(const char* name, int speed, double load)
{
	this->m_ownerName = new char[strlen(name) + 1];
	strcpy_s(this->m_ownerName, strlen(name) + 1, name);
	this->m_speed = speed;
	this->m_load = load;
	m_counter++;
}

Vehicle::Vehicle(const Vehicle& v)
{
	this->m_ownerName = new char[strlen(v.m_ownerName) + 1];
	strcpy_s(this->m_ownerName, strlen(v.m_ownerName) + 1, v.m_ownerName);
	this->m_speed = v.m_speed;
	this->m_load = v.m_load;
	m_counter++;
}

Vehicle::~Vehicle()
{
	if (m_ownerName != nullptr)
	{
		delete[]m_ownerName;
	}
	m_counter--;
}

void Vehicle:: Print()
{
	cout << "Owner: " << m_ownerName << endl;
	cout << "Speed: " << m_speed << endl;
	cout << "Load: " << m_load << endl;
}

void  Vehicle::Scan()
{
	cout << "Enter owner's name: ";
	char buff[256];
	cin.ignore(256, '\n');
	cin.getline(buff, 254);
	if (m_ownerName != nullptr)
	{
		delete[]m_ownerName;
	}
	m_ownerName = new char[strlen(buff) + 1];
	strcpy_s(m_ownerName, strlen(buff) + 1, buff);
	cout << "Enter the speed: ";
	cin >> m_speed;
	cout << "Enter the load: ";
	cin >> m_load;
}
int CompareBySpeed(const Vehicle* obj1, const Vehicle* obj2)
{
	if (obj1->m_speed < obj2->m_speed)
		return 0;
	return 1;
}