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
		cout << "輸入學號 "; 
		cin >> ix;
		if (!cin.fail()) 
		{ 
			cin.sync(); 
			break; 
		} // 輸入成功
		cin.clear(); 
		cin.sync();
	} while (1);
	cout << "輸入姓名 "; 
	cin >> cName; cin.sync();
	cout << "輸入生日(yymmdd) "; 
	while (getchar() != '\n')
		;
	cin.getline(cBirthDay, 7);
	cout << "輸入住址 "; 
	cin.get(cAddr, 10);
	cout << "學號 : " << ix;
	cout << " 姓名 : " << cName << endl;
	cout << "生日 : " << cBirthDay;
	cout << " 住址 : " << cAddr << endl;
	system("pause"); 
}
