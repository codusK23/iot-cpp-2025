#include <iostream>
using namespace std;

void func(int& arg)	// �Ű����� int�� ���� ����
{
	arg += 100;			// ������ ���� ����ȴ�
}

int main()
{
	int num = 1;
	func(num);

	cout << num << endl;
	return 0;
}