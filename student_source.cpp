#include"student_header.h"

int main() 
{
	Data data(2000, 3, 20);
	Persoana radu("Radu", "Stefan", &data);
	radu.afisare();

	Student s[3] = { {"Triboi", "Maria-Emanuela", new Data(2000,07,12),1211},{"Petrov", "Sergiu", new Data(1999,07,18),1211},{"Radu", "Stefan", new Data(2000, 3, 20),1322} };

	for (int i = 0; i < 3; i++)
	{
		s[i].afisare();
	}

	Student y("Triboi", "Maria-Emanuela", new Data(2000, 07, 12), 1211);
	y = s[1];

	y.afisare();

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3 - i ; j++)
			if (s[j].getGrupa() > s[j + 1].getGrupa())
			{
				Student c("Triboi", "Maria-Emanuela", new Data(2000, 07, 12), 1211);
				c = s[j];
				s[j] = s[j + 1];
				s[j + 1] = c;
			}
	cout << "dupa sortare" <<endl;

	for (int i = 0; i < 3; i++)
	{
		s[i].afisare();
	}
	
	return 0;
}