// �̵� ������ : R-value ������ �Ķ���ͷ� ���� �̵� ������(T&&)

#include <iostream>

class Myclass {
	int num;
public:
	Myclass(int n) : num(n) { }		// ��ȯ ������
};

int main()
{
	int n = 10;
	int& rn = n;

	const int& rrn = 10;

	return 0;
}