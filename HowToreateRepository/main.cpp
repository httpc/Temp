#include "Function.h"
void main()
{
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);


	int A[ROWS][COLS];
	FillRand(A, ROWS, COLS);
	Print(A, ROWS, COLS);
	Sort(A, ROWS, COLS);
	Print(A, ROWS, COLS);
}
