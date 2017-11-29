#include <iostream>
#include <cstdlib>
using namespace std;
void hw3()
{
	int a, b = 3, c;
	for (a = 1; a <= 4; a++)
	{
		for (c = 4; c >= (a + 1); c--)
			cout << " ";
		for (c = 1; c <= a; c++)
			cout << "*";
		for (c = 3; c > b; c--)
			cout << "*";
		b--;
		cout << endl;
	}
	for (a = 1; a <= 3; a++)
	{
		for (c = 1; c <(a+1); c++)
			cout << " ";
		for (c = 3; c >=a; c--)
			cout << "*";
		for (c = 2; c >= a; c--)
			cout << "*";
		cout << endl;
	}
	system("pause");
}

