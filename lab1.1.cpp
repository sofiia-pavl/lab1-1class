#include "cOMBINATION.H"
#include <iostream>
using namespace std;

bool Combination::Init(int k, int n)
{
	if (k < n)
	{
		first = k;
		second = n;
		return true;
	}
	else
	{
		return false;
	}
}
void Combination::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Combination::Read()
{
	int k, n;
	cout << "first = ? ";
	cin >> k;
	do {
		cout << "second = ?";
		cin >> n;
	} while (!Init(k, n));
}
double Combination::combination()
{
	int a, b, t, d;
	double c;
	a = 1;
	for(int i = 1; i <= second; i++)
	{
		a *= i;
	}
	b = second - first;
	t = 1;
	for(int i = 1; i <= b; i++)
	{
		t *= i;
	}
	d = 1;
	for(int i = 1; i <= first; i++)
	{
		d *= i;
	}
	c = a/(t * d);
	return c;
}