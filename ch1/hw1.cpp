#include <iostream>
#include <cstdlib>
using namespace std;
void hw1()
{
	int a, b=6, c;
    for (a = 1; a <= 7; a++)
	{
		for (c = 7; c >= (a + 1); c--)
			cout << " " ;
		for (c=1;c<=a;c++)
			cout << "*" ;
		for (c = 6; c > b; c--)
			cout << "*";
		b--;
		cout << endl;
	}
	system("pause");
}

