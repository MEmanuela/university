#include "student_header.h"

Persoana::Persoana(char *nume, char *prenume, Data *dataNastere) 
{
	this->nume = new char[strlen(nume) + 1];
	this->prenume = new char[strlen(prenume) + 1];
	strcpy(this->nume, nume);
	strcpy(this->prenume, prenume);
	this->dataNastere =
		new Data(*dataNastere);
}

Persoana::~Persoana() 
{
	delete[] nume;
	delete[] prenume;
	delete dataNastere;
}

char *Persoana::getNume() 
{
	return nume;
}

char *Persoana::getPrenume() 
{
	return prenume;
}

Data *Persoana::getDataNastere() 
{
	return dataNastere;
}

void Persoana::afisarePersoana() 
{
	cout << nume << " " << prenume << ", data nastere: " << dataNastere->getAn() << "." << dataNastere->getLuna() << "." << dataNastere->getZi() ;
}

void Persoana::afisare() 
{
	afisarePersoana();
	cout << endl;
}void Persoana::setNume(char *n)
{
	delete[] nume;
	nume = new char[strlen(n) + 1];
	strcpy(this->nume, n);
}
void Persoana::setPrenume(char *p)
{
	delete[] prenume;
	prenume = new char[strlen(p) + 1];
	strcpy(this->prenume, p);
}

void Persoana::setData(Data *d){	this->dataNastere->setZi(d->getZi());	this->dataNastere->setLuna(d->getLuna());	this->dataNastere->setAn(d->getAn());}