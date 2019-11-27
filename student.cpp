#include "persoana.h"
#include "student.h"

StudentAC::StudentAC()
{
	cout << "constr. fara arg. StudentAC" << endl;
	m_ianStudiu = 0;
	m_inotaP2 = 0;
}
StudentAC::StudentAC(string cnp, string nume, string adresa,
	int anStudiu, int notaP2) :
	PersoanaAC(cnp, nume, adresa), m_ianStudiu(anStudiu),
	m_inotaP2(notaP2)
{
	cout << "constr. cu arg. StudentAC" << endl;
}
StudentAC::~StudentAC()
{
	cout << "destructor StudentAC" << endl;
}

StudentAC *StudentAC::comparN(StudentAC * s2)
{
	if ((this->getNota()) > (s2->getNota()))
	{
		return this;
	}
	else
	{
		return s2;
	}
}

void afisareProfil(StudentAC *s2)
{
	cout << "CNP: " << s2->getCNP() << endl;
	cout << "Nume: " << s2->getNume() << endl;
	cout << "Adresa: " << s2->getAdresa() << endl;
	cout << "An studiu: " << s2->getAn() << endl;
	cout << "Nota: " << s2->getNota() << endl;
}