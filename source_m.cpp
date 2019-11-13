#include "header_m.h"

int main()
{
	Multime m(10);

	m += 4;
	m += 4;

	m.afisare();

	m -= 4;
	m -= 4;

	m.afisare();

	m += 9;
	m += 2;
	m += 2;

	m.afisare();

	Multime n(10);

	n += 7;
	n += 5;

	n.afisare();

	m = n;
	m.afisare();

	cout << "\n";

	Multime x = n;
	x.afisare();

	Multime a;
	a += 4;
	a += 3;

	m += a ;
	m.afisare();

	_getch();

	return 0;
}