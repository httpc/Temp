#include "Function.h"
void FillRand(int arr[], const int n)
{
	//cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	//cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
		//arr[i] /= 10;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}