#include "header.h"

Stiva::Stiva()
{
	head = 0;
}
Stiva::~Stiva()
{
	if (head)
	{
		delete[]head;
	}
}
void Stiva::push(int val)
{
	if (head)
	{
		Stiva *new_head = new Stiva;
		new_head->elem = val;
		new_head->link = head;
		head = new_head;
	}
	else
	{
		Stiva *new_head = new Stiva;
		new_head->elem = val;
		new_head->link = 0;
		head = new_head;
	}
}
int Stiva::pop(void)
{
	if (head)
	{
		Stiva *new_head = head->link;
		Stiva *copy_head = head;
		head = new_head;
		return copy_head->elem;
		delete copy_head;
	}
	return 0;
}
int Stiva::top(void)
{
	if (head)
		return head->elem;
	return 0;
}
void Stiva::print(void)
{
	if (head)
	{
		Stiva *copy_head = head;
		while (copy_head)
		{
			cout << "elem = " << copy_head->elem << endl;
			copy_head = copy_head->link;
		}
	}
	else
		cout << "Empty stack";
}