#pragma once

#include <iostream>
using namespace std;

class Complex
{
	int re, im;
public:
	Complex() { re = im = 0;}
	Complex(int re, int im)
	{
		this->re = re;
		this->im = im;
	}
	void afisare()
	{
		cout << "(" << re << "," << im << ")" << endl;
	}
	void citire()
	{
		cout << "re";
		cin >> this->re;
		cout << "im";
		cin >> this->im;
	}
	int egal(Complex c2)
	{
		if (this->re == c2.re && this->im ==c2.im)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	Complex(const Complex &obiectSursa)
	{
		this->re = obiectSursa.re;
		this->im = obiectSursa.im;
	}
};

class MultimeComplexe
{
private:
	Complex *v;
	int dim; //dim maxima a multimii
	int n; //nr elem ale multimii
public:
	MultimeComplexe()
	{
		dim = 10;
		v = new Complex[dim];
		n = 0;
	}

	MultimeComplexe(int d)
	{
		dim = d;
		v = new Complex[dim];
		n = 0;
	}

	~MultimeComplexe()
	{
		delete[]v;
		v = nullptr;
	}

	void adauga(Complex x);
	void extrage(Complex x);
	void afisare();
};
