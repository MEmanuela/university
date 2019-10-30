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
	void adauga(int x);
	void extrage(int x);
	void afisare();
	Multime();
	Multime(int dim);
	~Multime();
};