#include<iostream>
#include"header_fig.h"
using namespace std;

/*Dreptunghi::Dreptunghi(int x1, int y1, int x2, int y2) 
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}*/
double Dreptunghi::arie() 
{
	return (double)(b.x - a.x)*(b.y - a.y);
}
double Dreptunghi::perimetru()
{
	return (double)(2*(b.x - a.x)+(b.y - a.y));
}
void Dreptunghi::afisare() 
{
	cout << "Dreptunghi cu coordonatele (" << a.x << "," << a.y << ")-(" << b.x << "," << b.y << "), aria " <<arie() << " si perimetrul" << perimetru() << endl;
}
/*Cerc::Cerc(int x, int y, int r) 
{
	this->x = x;
	this->y = y;
	this->r = r;
}*/
double Cerc::arie() 
{
	const double PI = 3.14F;
	return PI * r * r;
}
double Cerc::perimetru()
{
	const double PI = 3.14F;
	return PI * r * 2;
}
void Cerc::afisare() 
{
	cout << "Cerc cu coordonatele (" << c.x << "," << c.y << "), raza " << r << ", aria "<< arie()<< " si perimetrul "<< perimetru() << endl;
}
/*Triunghi::Triunghi(int x1, int y1, int x2, int y2, int x3, int y3)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
}*/
double Triunghi::perimetru()
{
	double a1, b1, c1,p;
	a1 = sqrt((b.x - a.x) ^ 2 + (b.y - a.y) ^ 2);
	b1 = sqrt((c.x- b.x)^ 2 + (c.y- b.y )^2);
	c1 = sqrt((c.x- a.x) ^ 2 + (c.y- a.y) ^ 2);
	p = (a1 + b1 + c1);
	return p;
}
double Triunghi::arie()
{
	double a = sqrt((x2 - x1) ^ 2 + (y2 - y1) ^ 2);
	double b = sqrt((x3 - x2) ^ 2 + (y3 - y2) ^ 2);
	double c = sqrt((x3 - x1) ^ 2 + (y3 - y1) ^ 2);
	double sp= (a + b + c) / 2;
	return sqrt(sp * (sp - a)*(sp - b)*(sp - c));
}
void Triunghi::afisare()
{
	cout << "Triunghi cu coordonatele (" << x1 << "," << y1 << ")-(" << x2 << "," << y2 << ")-(" << x3 << "," << y3 << "), aria " << arie()<< " si perimetrul " << perimetru() << endl;
}
Figura *figCuArieMax(Figura **figuri, int n) 
{
	double max = 0;
	Figura *figMax = NULL;
	for (int i = 0; i<n; i++) {
		double arie = figuri[i]->arie();
		if (arie > max) {
			max = arie;
			figMax = figuri[i];
		}
	}
	return figMax;
}
Figura *figCuPerMax(Figura **figuri, int n)
{
	double max = 0;
	Figura *pMax = NULL;
	for (int i = 0; i<n; i++) {
		double perimetru = figuri[i]->perimetru();
		if (perimetru > max) {
			max = perimetru;
			pMax = figuri[i];
		}
	}
	return pMax;
}