// ������� �ʱ�ȭ
#include <iostream>

// 1. ������ �ʱ�ȭ
class Myclass {
	int a;
public:
	Myclass(int _a) { a = _a; }
};

// 2. ��� �ʱ�ȭ ����Ʈ
class Myclass1 {
	int a;
public:
	Myclass1(int _a) : a(_a) { }
};

// C++ 11���� ���� (in-class �ʱ�ȭ)
class Myclass2 {
	int x = 10;								// ����� ���ÿ� �ʱ�ȭ
};

// static ��� ���� �ʱ�ȭ - Ŭ���� �ܺο��� �ʱ�ȭ
class Myclass3 {
	static int count;  
};
int Myclass3::count = 0; 

// const �ʱ�ȭ
class Myclass4 {
	const int id;
public:
	Myclass4(int _id) : id(_id) { }			// ������ �ʱ�ȭ ����Ʈ�� ����Ͽ� �ʱ�ȭ
};

// ���� �ʱ�ȭ
class Myclass5 {
	int& ref;
	//int x;
public:
	Myclass5(int& r) : ref(r) {}
	//void f(int _x) : x(_x) { }				// �Ϲ� �Լ��� �ʱ�ȭ ����Ʈ�� ����� �� ����.
};

Myclass a(10);

int main()
{
	Myclass b(10);	
	return 0;
}