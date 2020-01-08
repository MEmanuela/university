#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
# include <ctime>

using namespace std;

class StudentAC
{
	string nume;
	int nota;
public:
	StudentAC()
	{
		cout << "constr. fara arg. StudentAC" << endl;
		nume = nullptr;
		nota = 0;
	}
	StudentAC(string numele, int notax)
	{
		cout << "constr. cu arg. PersoanaAC" << endl;
		nume = numele;
		nota = notax;
	}
	void afisare()
	{
		cout << "Nume: " << nume << endl;
		cout << "Nota: " << nota << endl;
	}
	void modificareNota(int nouaNota)
	{
		this->nota = nouaNota;
	}
	int getNota()
	{
		return nota;
	}
	string getNume()
	{
		return nume;
	}
	StudentAC::~StudentAC()
	{
		cout << "destructor StudentAC" << endl;
	}
	bool operator< (StudentAC s2);
};vector <StudentAC> arrToVect(StudentAC *v, int n){	vector <StudentAC> rez; 	for (int i = 0; i < n; ++i)
	{
		rez.push_back(StudentAC(v[i].getNume(), v[i].getNota()));
	}	return rez;}bool StudentAC::operator< (StudentAC s2)
{
	if (this->getNota() < s2.getNota())
		return true;
	else
		return false;
}void afisareV(vector<StudentAC> v){	vector<StudentAC>::iterator i;	for (i = v.begin(); i != v.end(); ++i)
		i->afisare();}
// clasa masina 

class masina
{
	char* marca;
	char* culoare;
	double pret;
	double vit;
public:
	masina()
	{
		pret = 0;
		vit = 0;
		marca = nullptr;
		culoare = nullptr;
	}
	masina(char* m, char* c, double p, double v)
	{
		marca = new char[strlen(m)];
		culoare = new char[strlen(c)];
		strcpy_s(marca, strlen(m) + 1, m);
		strcpy_s(culoare, strlen(c) + 1, c);
		pret = p;
		vit = v;
	}
	double getpret()
	{
		return pret;
	}
	double getvit()
	{
		return vit;
	}
	bool operator<(masina m2)
	{
		if (this->vit > m2.vit)
			return true;
		else
			if (this->vit = m2.vit)
				if (this->pret > m2.pret)
					return true;
		return false;
	}
	void afisarem()
	{
		cout << "marca:" << marca << endl;
		cout << "culoarea:" << culoare << endl;
		cout << "pret:" << pret << endl;
		cout << "viteza:" << vit << endl;
	}
};

void afisaremas(vector<masina> v)
{
	vector<masina>::iterator i;
	for (i = v.begin();i != v.end();++i)
		i->afisarem();
}
