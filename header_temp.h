#pragma once

template <typename T>
void bubble_sort(T *arr, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) 
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
}