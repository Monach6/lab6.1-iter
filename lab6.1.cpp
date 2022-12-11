#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* r, const int size, const int Min, const int Max)
{
	for (int i = 0; i < size; i++)
		r[i] = Min + rand() % (Max - Min + 1);
}
void Vyvid(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}

void Create1(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		if (!(r[i] % 2 == 1 && i % 7 == 0))
			cout << setw(4) << r[i];
}

int New(int* r, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (!(r[i] % 2 == 1 && i % 7 == 0))
			k++;
	return k;
}

int Sum(int* r, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (!(r[i] % 2 == 1 && i % 7 == 0))
			S += r[i];
	return S;
}

void Zamina(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		if (!(r[i] % 2 == 1 && i % 7 == 0))
			r[i] = 0;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 26;
	int r[n];
	int Min = 3;
	int Max = 92;

	Create(r, n, Min, Max);
	Vyvid(r, n);

	int k = New(r, n);
	cout << "New = " << k << endl;
	cout << "S = " << Sum(r, n) << endl;

	Zamina(r, n);
	Vyvid(r, n);
}