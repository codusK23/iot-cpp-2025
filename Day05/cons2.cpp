#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

class Person {
	char name[30];
	int age;

public:
	Person() {}				
	Person(const char* name, int age) {
		//this->name = name;
		strncpy(this->name, name, strlen(name) + 1);
		this->age = age;
		std::cout << "Constructor 호출!" << std::endl;
	}
	Person(const Person& other) {
		strcpy(this->name, other.name);
		this->age = other.age;
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

	//char c[3] = "abc";					// null 문자 포함해야함
	char c[3];
	c[0] = 'a';
	c[1] = 'b';
	c[2] = 'c';

	Person p("홍길동", 50);
	p.view();

	Person p2(p);							// 복사 생성자 호출
	p2.view();


	return 0;
}