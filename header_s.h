#pragma once

#include <iostream>
using namespace std;

class Complex
{
	int re, im;
public:
	Complex() {};
	Complex(int, int);
	Complex operator + (Complex &);
	void afisare();
	Complex operator - (Complex &);
	Complex operator * (Complex);
	Complex &operator = (const Complex &);
	int operator == (Complex &);
	double operator~ ();
	~Complex() { cout << "destructor" << endl; };
};