#include "header_m.h"

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

void Multime::operator +=(int x)
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

void Multime::operator-=(int x)
{
	for (int i = 0; i < n; i++)
	{
		if (date[i] == x)
		{
			for (int j = 0; j < n - 1; j++)
				date[j] = date[j + 1];
			n--;
		}
	}
}

Multime &Multime::operator = (const Multime &c2)
{
	this->dim = c2.dim;
	this->n = c2.n;
	for (int i = 0; i < c2.n; i++)
	{
		date[i] = c2.date[i];
	}
	return *this;
}

Multime::Multime(const Multime &x)
{
	dim = x.dim;
	n = x.n;
	date = new int[x.dim];
	for (int i = 0; i < x.n; i++)
	{
		date[i] = x.date[i];
	}
	cout << "constructor de copiere" << endl;
}

Multime &Multime::operator += (Multime &x)
{
	for (int i = 0; i < x.n; i++)
	{
		*this += x.date[i];
	}
	return *this;
}

void Multime::afisare()
{
	cout << "\nElementele vectorului: ";
	for (int i = 0; i < n; i++)
	{
		cout << date[i] << " ";
	}
}