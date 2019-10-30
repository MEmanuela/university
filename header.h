#pragma once

#include <conio.h>

#include <iostream>
using namespace std;

class Stiva
{
private:
	int elem;
	Stiva *link;
	Stiva *head;
public:
	Stiva();
	~Stiva();
	void push(int val);
	int pop(void);
	int top(void);
	void print(void);
};
