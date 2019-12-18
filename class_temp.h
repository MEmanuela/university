#pragma once

#include <iostream>
using namespace std;

template <typename T>
class Multime
{
	T* m = nullptr;
	int n;
public:
	Multime(){}

	Multime(T *v, int n)
	{
		this->n = n;
		m = new T[n];
		for (int i = 0; i < n; i++)
		{
			m[i] = v[i];
		}
	}

	Multime(const Multime &m2)
	{
		n = m2.n;
		m = new T[n];
		for (int i = 0; i < n; i++)
		{
			m[i] = m2.m[i];
		}
	}

	~Multime()
	{
		if (m)
			delete[] m;
		cout << "destructor" << endl;
	}
	void afisare()
	{
		for (int i = 0; i < n; i++)
		{
			cout << m[i] << ' ';
		}
		cout << endl;
	}
	//supraincarcarea operatorului ! pt a obtine maximul:
	T operator!()
	{
		int i;
		T max = this->m[1];
		for (i = 0; i < n; i++)
		{
			if (this->m[i] > max)
			{
				max = m[i];
			}
		}
		return max;
	}
	//supraincarcarea operatorului + pt a aduna elem cu elem
	Multime operator+ (Multime &m2)
	{
		int i;
		Multime m1(*this);
		for (i = 0; i < n; i++)
		{
			m1.m[i] += m2.m[i];
		}
		return m1;
	}

	Multime &operator=(const Multime &m2)
	{
		this->n = m2.n;
		this->m = new T[n];
		for (int i = 0; i < n; i++)
		{
			this->m[i] = m2.m[i];
		}
		return *this;
	}

};

template <typename Y>
Y add(Y a, Y b)
{
	return a + b;
}