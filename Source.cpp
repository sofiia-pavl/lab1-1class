#include <iostream>
#include "Combination.h"
using namespace std;
Combination makeCombination(int x, int y)
{
	Combination nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}
int main()
{
	Combination z;
	z.Read();
	z.Display();
	cout << "Combination(n,k) = " << z.combination() << endl << endl;
	double x, y;
	cout << "Input complex value:" << endl << endl;
	cout << " first = "; cin >> x;
	cout << " second = "; cin >> y;
	z = makeCombination(x, y);
	z.Display();
	cout << "Combination(n,k) = " << z.combination() << endl;
	cin.get();
	return 0;

}