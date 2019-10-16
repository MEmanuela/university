#include <stdio.h>
#include <iostream>

#include "structheader.h"

using namespace std;

void ReadData(student_c *st)
{
	cout << "Citire date" << endl;

	cout << "NrMatricol";
	cin >> st->nrMatricol;

	cout << "Nume student";
	cin >> st->nume;

	cout << "Gen student";
	cin >> st->gen;

	cout << "Nota";
	cin >> st->nota;
}
void WriteData(student_c *st) 
{
	cout << "Afisare date";

	cout << "NrMatricol: " << st->nrMatricol << endl;

	cout << "Nume student: " << st->nume << endl;

	cout << "Gen student: " << st->gen << endl;

	cout << "Nota: " << st->nota << endl;
}