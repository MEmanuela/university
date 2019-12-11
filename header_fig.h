#pragma once

class Figura 
{
public:
	virtual ~Figura() {}
	virtual double arie() = 0;
	virtual double perimetru() = 0;
	virtual void afisare() = 0;
};

class Punct
{
public:
	int x, y;
	Punct(int x, int y) :x(x), y(y) {}
};
class Dreptunghi : public Figura 
{
private:
	Punct a, b;
public:
	Dreptunghi(int x1, int y1, int x2, int y2):a(x1,y1),b(x1,y1){}
	double arie();
	double perimetru();
	void afisare();
};

class Cerc : public Figura 
{
private:
	int r;
	Punct c;
public:
	Cerc(int x,int y, int r):c(x,y){}
	double arie();
	double perimetru();
	void afisare();
};

class Triunghi :public Figura
{
private:
	Punct a, b, c;
public:
	Triunghi(int x1, int y1, int x2, int y2, int x3, int y3) :a(x1, y1), b(x2, y2), c(x3, y3) {}
	double arie();
	double perimetru();
	void afisare();
};

Figura *figCuArieMax(Figura **figuri, int n);
Figura *figCuPerMax(Figura **figuri, int n);
