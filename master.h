#pragma once
#include "persoana.h"
#include "student.h"
#include <iostream>
using namespace std;

class StudentMaster:public StudentAC
{
	string m_sNumeDis;
public:
	StudentMaster(string c, string n, string a, int an, int nota, string numeD) :StudentAC(c, n, a, an, nota)
	{
		m_sNumeDis = numeD;
		cout << "constr. cu arg. StudentMaster" << endl;
	}
	StudentMaster();
	~StudentMaster();
	void afisareProfil()
	{
		StudentAC::afisareProfil();
		cout << "Nume Dizertatie: " << m_sNumeDis << endl;
	}
};