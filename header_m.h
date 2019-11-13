#pragma once

#include <conio.h>

#include <iostream>
using namespace std;

class Multime
{
private:
	int *date = nullptr;
	int dim; //max
	int n; //nr curent
public:
	void operator += (int);
	void operator -= (int);
	Multime &operator = (const Multime &);
	Multime(const Multime &);
	Multime &operator += (Multime &);
	Multime operator + (Multime);
	void afisare();
	Multime();
	Multime(int dim);
	~Multime();
};
