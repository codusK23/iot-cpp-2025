#include <iostream>
using namespace std;

int main()
{
	int indata = 0;
	cout << "input ";
	cin >> indata;

	//indata += 100;
	int&& ref = indata + 100;					// r-value ���� = const int& ref = ����� �����Ѵ�

	cout << ref << endl;	

	return 0;
}