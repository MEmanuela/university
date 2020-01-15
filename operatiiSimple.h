#pragma once

#include<iostream>
#include <conio.h>
#include "lista.h"
#include "meniu.h"
using namespace std;

class OperatieAdunare : public Operatie 
{
public:
	OperatieAdunare(char *nume);
	void execOperatie();
};

class OperatieScadere : public Operatie 
{
public:
	OperatieScadere(char *nume);
	void execOperatie();
};

