#include <iostream>

#include "stcppheader.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	student_cpp *v;
	v = new student_cpp[n];
	
	for (int i = 0; i < n; i++)
	{
		v[i].read();
	}
	for (int i = 0; i < n; i++)
	{
		v[i].write();

	}

	delete v;

	return 0;
}