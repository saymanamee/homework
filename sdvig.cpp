// sdvig.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 4;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		printf("%d\n", arr[i]);
	}
	printf("\n");
	//printf("¬ведите на сколько массив нужно сдвинуть влево: ");
	//scanf("%d", &n);
	int tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = arr[0];
		for (int j = 1; j < size; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = tmp;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}

}

