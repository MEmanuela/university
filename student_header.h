#pragma once

#include <conio.h>

#include <iostream>
using namespace std;
{
private:
	int an, luna, zi;
public:
	Data() {}
	Data(int an, int luna, int zi);
	int getAn();
	int getLuna();
	int getZi();
	/*returneaza 1 daca this > data2, 0 daca this <=
	data2*/
	int maiMare(Data data2);
	void setZi(int zi);
	void setLuna(int luna);
	void setAn(int an);
};

class Persoana:public Data
{
private:
	char *nume, *prenume;
	Data *dataNastere;
protected:
	void afisarePersoana();
public:
	Persoana(char *nume, char *prenume, Data
		*dataNastere);
	~Persoana();
	char *getNume();
	char *getPrenume();
	Data *getDataNastere();
	void afisare();
	void setNume(char *n);
	void setPrenume(char *p);
	void setData(Data *d);
	Persoana & operator=(Persoana &p2)
	{
		setNume(p2.getNume());
		setPrenume(p2.getPrenume());
		setData(p2.getDataNastere());
		return *this;
	}
};

class Student :public Persoana