#include <iostream>
#include <cstdlib>
using namespace std;
void hw4()
{
	int a, b = 3, c,d=3;
	for (a = 1; a <= 4; a++)
	{
		for (c = 4; c >= (a + 1); c--)
			cout << " ";
		cout << "*";
		for (c = 2; c > b; c--)
		  cout << " ";
		for (c = 2; c >= b; c--)
			 cout << " ";
		if(a!=1)
		     cout << "*";
		b--;
		cout << endl;
	}
	for (a = 1; a <= 3; a++)
	{
		for (c = 1; c <(a + 1); c++)
			cout << " ";
		cout << "*";
		for (c = 1; c < d; c++)
			cout << " ";
		for (c = 3; c <= d; c++)
			cout << " ";
		if (a != 3)
			cout << "*";
		d--;
		cout << endl;
	}
	system("pause");
}

