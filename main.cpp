#include "header.h"

int main()
{
	Multime m(10);

	m.adauga(4);
	m.adauga(3);

	m.afisare();

	m.extrage(4);
	m.extrage(4);

	m.afisare();

	m.adauga(9);
	m.adauga(2);
	m.adauga(2);

	m.afisare();

	_getch();

	return 0;
}