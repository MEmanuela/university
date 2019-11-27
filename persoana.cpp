#include "persoana.h"
#include "student.h"

PersoanaAC::PersoanaAC()
{
	cout << "constr. fara arg. PersoanaAC" << endl;
	m_sCnp = string(13, '0');
	m_sNume = "";
	m_sAdresa = "";
}
PersoanaAC::PersoanaAC(string cnp, string nume, string adresa)
{
	cout << "constr. cu arg. PersoanaAC" << endl;
	m_sCnp = cnp;
	m_sNume = nume;
	m_sAdresa = adresa;
}
PersoanaAC::~PersoanaAC()
{
	cout << "destructor PersoanaAC" << endl;
}