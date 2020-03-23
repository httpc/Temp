#pragma once
#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

template<typename T>
void FillRand(T *arr[], const int n);

template<typename T>
void FillRand(T *arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T *arr[], const int n);

template<typename T>
void Print(T *arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T *arr[], const int n);

template<typename T>
void Sort(T *arr[ROWS][COLS], const int ROWS, const int COLS);

