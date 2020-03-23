#include "Function.h"
#include "Functions.cpp"
void main()
{
	const int n = 3;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int m = 3;
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
