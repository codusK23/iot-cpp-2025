// 이동 생성자 : R-value 참조를 파라미터로 갖는 이동 생성자(T&&)

#include <iostream>

class Myclass {
	int num;
public:
	Myclass(int n) : num(n) { }		// 변환 생성자
};

int main()
{
	int n = 10;
	int& rn = n;

	const int& rrn = 10;

	return 0;
}