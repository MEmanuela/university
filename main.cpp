#include<iostream>
#include "lista.h"
#include "meniu.h"
#include "operatiiSimple.h"
using namespace std;
int main() 
{
	Meniu *meniu = new Meniu("Meniu Principal");
	Meniu *submeniuCalculator = new Meniu("Calculator");
	meniu->adaugaElement(submeniuCalculator);
	submeniuCalculator->adaugaElement(new OperatieAdunare("'+'"));
	submeniuCalculator->adaugaElement(new OperatieScadere("'-'"));

	meniu->adaugaElement(new Meniu("Meniu vid"));
	meniu->adaugaElement(new Meniu("Despre program"));

	Meniu *lista = new Meniu("Lista");
	Lista *list = new Lista(20);
	meniu->adaugaElement(lista);
	lista->adaugaElement(new OpAdaugaInLista("first", list));
	lista->adaugaElement(new OpAfisareLista("sec",list));
	lista->adaugaElement(new OpStergeDinLista("sec", list));
	meniu->executa();

	delete meniu;
	cout << endl << endl
		<< "Sfarsit." << endl;
	system("pause");
	return 0;
}