#include "header_s.h"

Complex::Complex(int re, int im) 
{
	this->re = re;
	this->im = im;
}Complex Complex::operator+(Complex &c2)
{
	Complex temp;
	temp.re = this->re + c2.re;
	temp.im = this->im + c2.im;
	return temp;
}void Complex::afisare() 
{
	cout << "(" << re << "," << im << ")" << endl;
}Complex Complex::operator-(Complex &c2)
{
	Complex temp;
	temp.re = this->re - c2.re;
	temp.im = this->im - c2.im;
	return temp;
}Complex Complex::operator*(Complex c2)
{
	Complex temp;
	temp.re = this->re * c2.re - this->im * c2.im;
	temp.im = this->re * c2.im + this->im * c2.re;
	return temp;
}

Complex &Complex::operator=(const Complex &c2)
{
	this->im = c2.im;
	this->re = c2.re;
	cout << "functia =" << endl;
	return *this;
}

double Complex::operator~ ()
{
	return sqrt(((this->re)*(this->re)) + ((this->im)*(this->im)));
}

int Complex::operator==(Complex &c2)
{
	return (this->re == c2.re && this->im == c2.im);
}
