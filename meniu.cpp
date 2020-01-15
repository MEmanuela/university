#include "meniu.h"


void ElementMeniu::afisareIncompletaTitlu() 
{
	if (parinte != NULL) 
	{
		parinte->afisareIncompletaTitlu();
		cout << " -> " << nume;
	}
	else {
		cout << nume;
	}
}

void ElementMeniu::afisareTitlu() 
{
	afisareIncompletaTitlu();
	cout << ":" << endl << endl;
}Operatie::Operatie(char *nume): ElementMeniu(nume) {}void Operatie::executa() 
{
	system("CLS");
	this->afisareTitlu();
	this->execOperatie();
}

Meniu::Meniu(char *nume) : ElementMeniu(nume) 
{
	this->elemente = new ElementMeniu*[nrMaxElemente];
	this->nrElemente = 0;
}Meniu::~Meniu() 
{
	for (int i = 0; i<nrElemente; i++) 
	{
		delete elemente[i];
	}
	delete[] elemente;
}/*returneaza indicele elementului activat, sau -1 pentru
iesire*/
int Meniu::citireComanda() 
{
	while (1) 
	{
		char ch;
		cout << "Introduceti comanda:";
		ch = _getch();
		cout << endl;
		if (ch > '0' &&
			(ch - '0') <= this->nrElemente) 
		{
			//element meniu
			int comanda = ch - '1';
			/*pt '1' va fi elementul 0*/
			return comanda;
		}
		else if (ch == '0' || ch == 0x1B) 
		{
			/*0 sau ESC - iesire din meniu
			return -1;*/
		}
		else 
		{
			//tasta invalida
			cout << "Tasta invalida: " << ch << " Tastele valide sunt '0' - '" << nrElemente << "'" << endl << endl;
		}
	}
}void Meniu::adaugaElement(ElementMeniu *element) 
{
	nrElemente++;
	elemente[nrElemente - 1] = element;
	element->parinte = this;
}
