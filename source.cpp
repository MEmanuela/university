#include "header.h"

Multime::Multime()
{
	cout << "constructor implicit";
	dim = 10; //dim = D
	date = new int[dim];
	n = 0;
}

Multime::Multime(int dim)
{
	this->dim = dim;
	date = new int[this->dim];
	n = 0;
}

Multime::~Multime()
{
	cout << "destructor";
	delete[]date;
	date = nullptr;
}

void Multime::adauga(int x)
{
	if (n == dim)
	{
		cout << "full";
	}
	else
	{
		int ok = 1;
		for (int i = 0; i < n; i++)
		{
			if (date[i] == x)
			{
				ok = 0;
			}
		}
		if (ok)
		{
			date[n] = x;
			++n;
		}
	}
}

void Multime::extrage(int x)
{
	for (int i = 0; i < n; i++)
	{
		if (date[i] == x)
		{
			for (int j = 0; j < n -1; j++)
				date[j] = date[j + 1];
			n--;
		}
	}
}

void Multime::afisare()
{
	cout << "\nElementele vectorului: ";
	for (int i = 0; i < n; i++)
	{
		cout << date[i] << " ";
	}
}

