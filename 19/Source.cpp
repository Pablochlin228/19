#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(unsigned(time(0)));

	//1)Написать программу, копирующую последовательно элементы
	//одного массива размером 10 элементов в 2 массива размером
	//5 элементов каждый.

	int arr[10];
	int arr2[5];
	int arr3[5];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	int x = 0;
	for (size_t i = 0; i < 5; i++)
	{
		arr2[i] = arr[x++];
	}
	for (size_t i = 0; i < 5; i++)
	{
		arr3[i] = arr[x++];
	}

	for (size_t i = 0; i < 5; i++)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr3[i] << "\t";
	}



	/*const int size = 5;
	int arr[size];
	int arr2[size];

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr2[i] = rand() % 21 - 10;
		cout << arr2[i] << "\t";
	}
	cout << endl;

	const int finalSize = size + size;
	int arr3[finalSize];
	int x = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			arr3[x++] = arr[i];
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		if (arr2[i] > 0)
		{
			arr3[x++] = arr2[i];
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			arr3[x++] = arr[i];
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		if (arr2[i] == 0)
		{
			arr3[x++] = arr2[i];
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			arr3[x++] = arr[i];
		}
	}

	for (size_t i = 0; i < size; i++)
	{
		if (arr2[i] < 0)
		{
			arr3[x++] = arr2[i];
		}
	}

	for (size_t x = 0; x < finalSize; x++)
	{
		cout << arr3[x] << "\t";
	}*/

	/*for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << "\t";
	}
	cout << endl;
	int first = -1;
	int last = -1;
	for (size_t i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			first = i;
			break;
		}
	}
	for (size_t i = 9; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			last = i;
			break;
		}
	}
	for (size_t i = first + 1; i < last; i++)
	{
		cout << arr[i] << "\t";
	}*/



}