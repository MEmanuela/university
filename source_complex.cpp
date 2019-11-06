#include "header_complex.h"

int main()
{
	Complex a(3, 4);
	Complex b(3, 4);

	a.afisare();

	cout << "\n";

	b.afisare();

	cout << "\n";

	cout << a.egal(b) << endl;

	return 0;
}