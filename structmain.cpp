#include <stdio.h>
#include <iostream>

#include "structheader.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	student_c *v;
	v = new student_c[n];

	for (int i = 0; i < n; i++)
	{
		v[i].read = &ReadData;
		v[i].write = &WriteData;
	}

	for (int i = 0; i < n; i++)
	{
		v[i].read(&v[i]);
		v[i].write(&v[i]);

	}
	return 0;
}