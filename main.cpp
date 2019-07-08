#include <iostream>
using namespace std;

void FillRand(int Arr[], const int n);
void Print(int Arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");


}

void FillRand(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl; 
}
void Print(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}