#pragma once
#include <string>
#include <iostream>
using namespace std;

class StudentAC : public PersoanaAC
{
	int m_ianStudiu;
	int m_inotaP2;
public:
	StudentAC();
	StudentAC(string cnp, string nume, string adresa, int
		anStudiu, int notaP2);
	~StudentAC();
	void afisareProfil()
	{
		PersoanaAC::afisareProfil();
		cout << "An studiu: " << m_ianStudiu << endl;
		cout << "Nota P2: " << m_inotaP2 << endl;
	}
	void inscriereAnStudiu(int anStudiuNou)
	{
		this->m_ianStudiu = anStudiuNou;
	}
	StudentAC* comparN(StudentAC* s2);
	int getNota()
	{
		return this->m_inotaP2;
	}
	string getCNP()
	{
		return this->m_sCnp;
	}
	string getNume()
	{
		return this->m_sNume;
	}
	string getAdresa()
	{
		return this->m_sAdresa;
	}
	int getAn()
	{
		return this->m_ianStudiu;
	}
};

void afisareProfil(StudentAC *s2);