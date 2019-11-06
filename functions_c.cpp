#include "header_complex.h"

void MultimeComplexe::adauga(Complex x)
{
	if (n == dim)
		cout << "full" << endl;
	else
	{
		int ok = 1;
		for (int i = 0;i < n;i++)
			if (v[i].egal(x))
				ok = 0;
		if (ok)
			v[n++] = x;
	}
}

void MultimeComplexe::extrage(Complex x)
{
	if (n == 0)
		cout << "multime vida" << endl;
	else
	{
		for (int i = 0;i<n;i++)
			if (v[i].egal(x))
			{
				v[i] = v[n - 1];
				n--;
			}
	}
}
void MultimeComplexe::afisare()
{
	for (int i = 0; i < n; i++)
	{
		v[i].afisare();
	}
}