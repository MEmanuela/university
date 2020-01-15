#include "operatiiSimple.h"

OperatieAdunare::OperatieAdunare(char *nume): Operatie(nume) {}

void OperatieAdunare::execOperatie() 
{
	int a, b;
	cout << "Introduceti 2 numere:";
	cin >> a >> b;
	cout << "suma = " << a + b << endl;
	system("pause");
}OperatieScadere::OperatieScadere(char *nume): Operatie(nume) {}void OperatieScadere::execOperatie()
{
	int a, b;
	cout << "Introduceti 2 numere:";
	cin >> a >> b;
	cout << "diferenta = " << a - b << endl;
	system("pause");}