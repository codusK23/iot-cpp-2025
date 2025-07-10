// 멤버변수 초기화
#include <iostream>

// 1. 생성자 초기화
class Myclass {
	int a;
public:
	Myclass(int _a) { a = _a; }
};

// 2. 멤버 초기화 리스트
class Myclass1 {
	int a;
public:
	Myclass1(int _a) : a(_a) { }
};

// C++ 11이후 지원 (in-class 초기화)
class Myclass2 {
	int x = 10;								// 선언과 동시에 초기화
};

// static 멤버 변수 초기화 - 클래스 외부에서 초기화
class Myclass3 {
	static int count;  
};
int Myclass3::count = 0; 

// const 초기화
class Myclass4 {
	const int id;
public:
	Myclass4(int _id) : id(_id) { }			// 생성자 초기화 리스트를 사용하여 초기화
};

// 참조 초기화
class Myclass5 {
	int& ref;
	//int x;
public:
	Myclass5(int& r) : ref(r) {}
	//void f(int _x) : x(_x) { }				// 일반 함수는 초기화 리스트를 사용할 수 없다.
};

Myclass a(10);

int main()
{
	Myclass b(10);	
	return 0;
}