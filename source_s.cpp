#include "header_s.h"

int main() 
{
	Complex a(3, 1);
	Complex b(1, 2);
	Complex c;

	c = a + b;
	c.afisare();

	c = a - b;
	c.afisare();

	c = a * b;
	c.afisare();

	cout << "modul a =" << a.operator~() << endl;

	if (a == b)
		cout << "a = b" << endl;
	else
		cout << "a != b" << endl;

	return 0;
}