#pragma once
#include<iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class ElementMeniu 
{
private:
	char *nume;
	ElementMeniu *parinte = NULL;
protected:
	ElementMeniu(char *n)
	{
		int a = strlen(n);
		this->nume = new char[a + 1];
		strcpy_s(this->nume, a + 1, n);
	}
	virtual ~ElementMeniu(){}
	void afisareIncompletaTitlu();
	void afisareTitlu();
public:
	char *getNume()
	{
		return nume;
	}
	virtual void executa() = 0;
	friend class Meniu;
};

class Operatie : public ElementMeniu 
{
protected:
	Operatie(char *nume);
	virtual void execOperatie() = 0; 
public:
	/*intreaga logica a elementului - afisaretitlu + operatie */
	void executa();
};

class Meniu : public ElementMeniu 
{
private:
	static const int nrMaxElemente = 9;
	int nrElemente;
	ElementMeniu **elemente;
	void afisare()
	{
		for (int i = 0; i < nrElemente; ++i)
		{
			elemente[i]->afisareTitlu();
		}
	}
	int citireComanda();
public:
	Meniu(char *nume);
	//va dealoca fii sai, eventual recursiv.
	~Meniu();
	void adaugaElement(ElementMeniu *element);
	void executa()
	{
		for (;;)
		{
			int comanda;
			system("CLS");
			afisareTitlu();
			afisare();
			comanda = citireComanda();
			if (comanda >= 0 && comanda < nrElemente)
			{
				elemente[comanda]->executa();
			}
			else
			{
				//probabil iesirea - -1
				return;
			}
		}
	}
};

