#pragma once
#include <string>
#include <iostream>
using namespace std;

class PersoanaAC
{
protected:
	string m_sCnp;
	string m_sNume;
	string m_sAdresa;
public:
	PersoanaAC();
	PersoanaAC(string cnp, string nume, string adresa);
	~PersoanaAC();
	void afisareProfil()
	{
		cout << "CNP: " << m_sCnp.data() << endl;
		cout << "Nume: " << m_sNume << endl;
		cout << "Adresa: " << m_sAdresa << endl;
	}
	void schimbareAdresa(string adresaNoua)
	{
		this->m_sAdresa = adresaNoua;
	}
};