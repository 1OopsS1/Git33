#include <iostream>
using namespace std;

template<typename T>void FillRand(T Arr[], const int n);
template<typename T>void Print(T Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	FillRand(Arr, n);
	Print(Arr, n);

	char Brr[n];
	FillRand(Arr, n);
	Print(Arr, n);
}

template<typename T>void FillRand(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
	}
}

template <typename T>void Print(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}