#include <iostream>
#include <cstdlib>
using namespace std;
void hw2()
{
	int a, b=6 , c;
	for (a = 1; a <= 7; a++)
	{
		for (c = 7; c >= (a + 1); c--)
			cout << " ";
		if (a == 1)
			cout << "*";
		for (c = 6; c > b; c--)
			cout << "*";
		for (c = 6; c > b; c--)
		{ 
			if(c == 6)
				cout << " ";
			cout << "*";
		}
		b--;
		cout << endl;
	}
	system("pause");
}

