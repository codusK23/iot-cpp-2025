#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

class Person {
	char name[30];
	int age;

public:
	Person() {}								// 컴파일러 자동생성
	Person(const char* name, int age) {
		//this->name = name;
		strcpy(this->name, name);
		this->age = age;
		std::cout << "Constructor 호출!" << std::endl;
	}

	~Person() {}

	void view() {
		std::cout << "name: " << this->name << ", age: " << this->age << std::endl;
	}
};

int main()
{
	//Person p;
	//p.view();

	Person p("홍길동", 50);
	p.view();

	Person p2(p);							// 복사 생성자 호출
	p2.view();


	return 0;
}