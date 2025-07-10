#include <iostream>

/*
int add(int a, int b)
{
	return a + b;
}

int add(double a, double b)
{
	return a + b;
}
*/

template <typename T>					// 함수템플릿 - 함수당 중정의 보다는 템플릿으로 
T add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << add(3, 4) << std::endl;   
	std::cout << add(3.3, 4.3) << std::endl;
	return 0;
}