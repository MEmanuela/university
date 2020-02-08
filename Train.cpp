#include "Train.h"

Train::Train() :Vehicle()
{
	m_class = TrainClass::unknown;
}
Train::Train(const char* name, int speed, double load, int cl) :Vehicle(name, speed, load)
{
	this->m_class = cl;
}
Train::Train(const Train& copy) :Vehicle(copy)
{
	this->m_class = copy.m_class;
}

void Train::Print()
{
	Vehicle::Print();
	cout << "Train Class: ";
	switch (m_class)
	{
	case TrainClass::open:
		cout << "open";
		break;
	case TrainClass::first:
		cout << "first";
		break;
	case TrainClass::second:
		cout << "second";
		break;
	case TrainClass::sleep:
		cout << "sleep";
		break;
	default:
		cout << "unknown";
		break;
	}
	cout << endl;
}
void Train::Scan()
{
	Vehicle::Scan();
	cout << "Enter the class of the train: ";
	cin >> m_class;
}

Train& Train::operator++()
{
	m_class = m_class % 4 + 1;
	return*this;
}

ostream& operator<<(ostream& os, Train& train)
{
	os << "Name: " << train.m_ownerName << endl;
	os << "Speed: " << train.m_speed << endl;
	os << "Load: " << train.m_load << endl;
	cout << "Train Class: ";
	switch (train.m_class)
	{
	case TrainClass::open:
		cout << "open";
		break;
	case TrainClass::first:
		cout << "first";
		break;
	case TrainClass::second:
		cout << "second";
		break;
	case TrainClass::sleep:
		cout << "sleep";
		break;
	default:
		cout << "unknown";
		break;
	}
	cout << endl;
	return os;
}
istream& operator>>(istream& is, Train& train)
{
	cout << "Speed= ";
	cin >> train.m_speed;
	cout << "Load= ";
	cin >> train.m_load;
	cout << "Owner Name= ";
	char buff[256];
	is.ignore(256, '\n');
	is.getline(buff, 254);
	if (train.m_ownerName != nullptr)
		delete[] train.m_ownerName;
	train.m_ownerName = new char[strlen(buff) + 1];
	strcpy_s(train.m_ownerName, strlen(buff) + 1, buff);
	do
	{
		cout << "Train Class (open = 1, first = 2, second = 3, sleep = 4):";
		is >> train.m_class;
	} while (train.m_class != 1 && train.m_class != 2 && train.m_class != 3 && train.m_class != 4);
	cout << endl;
	return is;
}