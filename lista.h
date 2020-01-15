#pragma once
#include<iostream>
#include "meniu.h"
#include "operatiiSimple.h"
using namespace std;

/*reprezinta o lista de numere. Fiecare numar are un
index, incepand de la 0, la fel ca intr-un vector.*/
class Lista 
{
private:
	int *elem;
	int n, dim;
public:
	Lista(int dim);
	~Lista();
	void operator+=(int num);
	void sterge(int index);
	int operator[](int index);
	//afiseaza numerele si indecsii lor
	void afisare();
};

class OpAdaugaInLista : public Operatie 
{
private:
	Lista *lista;
public:
	OpAdaugaInLista(char *nume, Lista *lista);
	void execOperatie();
};

class OpAfisareLista : public Operatie 
{
private:
	Lista *lista;
public:
	OpAfisareLista(char *nume, Lista *lista);
	void execOperatie();
};

class OpStergeDinLista :public Operatie 
{
	Lista *lista;
public:
	OpStergeDinLista(char *nume, Lista *lista);
	void execOperatie();
};


class AfisareIndexLista : public Operatie 
{
	Lista *lista;
public:
	AfisareIndexLista(char *nume, Lista *lista);
	void execOperatie();
};

