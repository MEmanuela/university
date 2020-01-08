#include "header.h"

using namespace std;

int countDigits(string str)
{
	string::iterator si;
	int digits = 0;
	for (si = str.begin(); si != str.end(); ++si)
	{
		if (*si >= '0' && *si <= '9')
		{
			digits++;
		}
	}
	return digits;
}

int numar(string s)
{
	int nr = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			nr = nr + 1;
	}
	return nr;
}

int main()
{
	string s("aB12c3D4fdgHefg6");
	cout << countDigits(s) << endl;
	cout << numar(s) << endl;

	StudentAC s1("ion", 9);
	StudentAC s2("mihai", 7);
	StudentAC s3("alex", 6);

	vector<StudentAC> v1;
	v1.push_back(s1);
	v1.push_back(s2);
	v1.push_back(s3);
	afisareV(v1);
	sort(v1.begin(), v1.end());
	cout << "dupa sortare" << endl;
	afisareV(v1);

	vector<int> myvector(800000);
	generate(myvector.begin(), myvector.end(), rand);
	double start = clock();
	sort(myvector.begin(), myvector.end());
	double stop = clock();
	cout << "timpul pt sortare: " << ((double)(stop - start)) / CLOCKS_PER_SEC << endl;

	cout << "\tMasini:" << endl;
	masina m1("ford", "alb", 6500, 250);
	masina m2("mercedes", "gri", 650, 150);
	masina m3("bmw", "negru", 12500, 280);
	vector<masina> m;
	m.push_back(m1);
	m.push_back(m2);
	m.push_back(m3);
	afisaremas(m);
	cout << "\tDupa sortare:" << endl;
	sort(m.begin(), m.end());
	afisaremas(m);

	system("pause");

	return 0;
}