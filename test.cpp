#include "persoana.h"
#include "student.h"
#include "master.h"

int main()
{
	PersoanaAC p1("1234567890123", "Ana", "Iasi");
	p1.afisareProfil();
	StudentAC s2;
	s2.afisareProfil();
	StudentAC s1("1234567890122", "Ion", "Vaslui", 2, 10);
	s1.schimbareAdresa("Bucuresti");
	s1.inscriereAnStudiu(3);
	s1.afisareProfil();

	StudentAC s4("1234567890122", "Ion", "Vaslui", 2, 7);
	s4.afisareProfil();
	
	StudentAC s3("1234567890122", "Ioana", "Bacau", 2, 9);
	afisareProfil(&s3);

	StudentAC *ret;
	ret = s4.comparN(&s1);

	ret->afisareProfil();

	StudentMaster m1;
	m1.afisareProfil();

	StudentMaster m2("1234567890123", "Ana", "Iasi", 1, 5, "Pointeri");
	m2.afisareProfil();


	StudentMaster s[3] = { { "1234567790123", "Maria", "Piatra-Neamt", 1, 7, "Vectori" },{ "1689437890123", "Matei", "Bucuresti", 1, 9, "Structuri" },{ "1234976430123", "Ana", "Iasi", 1, 5, "Pointeri" } };

	StudentMaster *max = &s[0];
	for (int i = 1; i < 3; i++)
	{
		max =(StudentMaster *) max->comparN(&s[i]);
	}
	max->afisareProfil();
	
	return 0;
}