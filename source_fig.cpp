#include<iostream>
#include<conio.h>
#include"header_fig.h"
using namespace std;

int main() 
{
	const int n = 4;
	Figura *figuri[n];
	figuri[0] = new Dreptunghi(0, 0, 2, 5);
	figuri[1] = new Dreptunghi(0, 0, 2, 2);
	figuri[2] = new Cerc(0, 0, 3);
	figuri[3] = new Triunghi(0, 0, 6, 2, 3, 7);
	Figura *figMax = figCuArieMax(figuri, n);
	Figura *pMax = figCuPerMax(figuri, n);
	cout << " Dintre figurile:" << endl;
	for (int i = 0; i<3; i++) {
		cout << i << ". ";
		figuri[i]->afisare();
	}
	cout << endl
		<< " aria maxima o are:" << endl;
	figMax->afisare();
	cout << " perimetrul maxim il are:" << endl;
	pMax->afisare();
	for (int i = 0; i<n; i++) {
		delete figuri[i];
	}
	_getch();
	return 0;
}
