#include "class_temp.h"

#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Multime <int> mi(arr, n);
	mi.afisare();

	Multime <int> m2(mi);
	m2.afisare();
	
	Multime <int> m3;
	m3 = m2 + mi;
	m3.afisare();
	
	float a[] = { 64.3, 34.5, 2.5, 12.8, 22.2, 1.1, 90 };
	int m = sizeof(a) / sizeof(a[0]);
	Multime <float> md(a, n);
	md.afisare();
	
	Multime <float> md2(md);
	md2.afisare();

	Multime<float> suma;
	suma = add(md, md2);
	suma.afisare();

	int imax = 0;
	float fmax = 0;
	imax = !m2;
	fmax = !md;
	cout << "Elem max din vect int: " << imax << endl;
	cout << "Elem max din vect float: " << fmax << endl;

}