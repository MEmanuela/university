#include <iostream>

#include "stcppheader.h"

using namespace std;

void student:: read(void)
{
	cout << "Citire date" << endl;

	cout << "NrMatricol";
	cin >> nrMatricol;

	cout << "Nume student";
	cin >> nume;

	cout << "Gen student";
	cin >> gen;

	cout << "Nota";
	cin >> nota;
}
void student:: write(void)
{
	cout << "Afisare date";

	cout << "NrMatricol: " << nrMatricol << endl;

	cout << "Nume student: " << nume << endl;

	cout << "Gen student: " << gen << endl;

	cout << "Nota: " << nota << endl;
}