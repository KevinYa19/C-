#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void ex1_7()
{
	int ix;
	char cName[20];
	char cAddr[20];
	char cBirthDay[20];
	do {
		cout << "��J�Ǹ� "; 
		cin >> ix;
		if (!cin.fail()) 
		{ 
			cin.sync(); 
			break; 
		} // ��J���\
		cin.clear(); 
		cin.sync();
	} while (1);
	cout << "��J�m�W "; 
	cin >> cName; cin.sync();
	cout << "��J�ͤ�(yymmdd) "; 
	while (getchar() != '\n')
		;
	cin.getline(cBirthDay, 7);
	cout << "��J��} "; 
	cin.get(cAddr, 10);
	cout << "�Ǹ� : " << ix;
	cout << " �m�W : " << cName << endl;
	cout << "�ͤ� : " << cBirthDay;
	cout << " ��} : " << cAddr << endl;
	system("pause"); 
}
