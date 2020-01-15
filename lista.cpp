#include"lista.h"

Lista::Lista(int dim) 
{
	this->dim = dim;
	elem = new int[dim];
}

Lista::~Lista() 
{
	delete[] elem;
}

void Lista::operator+=(int num) 
{
	if (n == dim) 
	{
		cout << "Lista plina" << endl;
	}
	else 
	{
		elem[n] = num;
		n++;
	}
}

void Lista::sterge(int index) 
{
	for (int i = index; i<n - 1; i++) 
	{
		elem[i] = elem[i + 1];
	}
	n--;
}

void Lista::afisare() 
{
	for (int i = 0; i<n; i++) 
	{
		cout << i << ". " << elem[i] << endl;
	}
}

int Lista::operator[](int index)
{
	return elem[index];
}

OpAdaugaInLista::OpAdaugaInLista(char *nume, Lista *lista): Operatie(nume) 
{
	this->lista = lista;
}

void OpAdaugaInLista::execOperatie() 
{
	int num;
	cout << "num=";
	cin >> num;
	(*lista) += num;
	system("pause");
}

OpAfisareLista::OpAfisareLista(char *nume, Lista *lista) :Operatie(nume) 
{
	this->lista = lista;
}

void OpAfisareLista::execOperatie() 
{
	lista->afisare();
	system("pause");
}

OpStergeDinLista::OpStergeDinLista(char *nume, Lista *lista) :Operatie(nume)
{
	this->lista = lista;
}

void OpStergeDinLista::execOperatie()
{
	int i;
	cout << "index de sters";
	cin >> i;
	lista->sterge(i);
	_getch();
}

AfisareIndexLista::AfisareIndexLista(char *nume, Lista *lista) :Operatie(nume)
{
	this->lista = lista;
}

void AfisareIndexLista::execOperatie()
{
	int i;
	cout << "index:i=";
	cin >> i;
	cout << "afisare dupa index:";
	cout << lista->operator[](i);
}