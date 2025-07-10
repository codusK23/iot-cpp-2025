#include <iostream>
using namespace std;

int main()
{
	int indata = 0;
	cout << "input ";
	cin >> indata;

	//indata += 100;
	int&& ref = indata + 100;					// r-value 참조 = const int& ref = 상수를 참조한다

	cout << ref << endl;	

	return 0;
}
