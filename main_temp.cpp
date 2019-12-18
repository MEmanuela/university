#include "header_temp.h"
#include <iostream>
using namespace std;


int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	cout << "Sorted array of int: \n";
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	float a[] = { 64.3, 34.5, 2.5, 12.8, 22.2, 1.1, 90 };
	int m = sizeof(a) / sizeof(a[0]);
	bubble_sort(a, m);
	cout << "Sorted array of float: \n";
	int j;
	for (j = 0; j < m; j++)
		cout << a[j] << " ";
	cout << endl;
}