#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

class Person {
	char* name;
	int age;

public:
	Person() {}
	Person(const char* pname, int age) {
		name = new char[strlen(pname) + 1];
		strncpy(name, pname, strlen(pname) + 1);
		this->age = age;
		std::cout << "Constructor ȣ��!" << std::endl;
	}
	Person(const Person& other) {
		name = new char[strlen(name) + 1];
		strcpy(name, other.name);
		this->age = other.age;
		std::cout << "Constructor ȣ��!" << std::endl;
	}

	~Person() {}

	void view() {
		std::cout << "name: " << name << ", age: " << this->age << std::endl;
	}
};

int main()
{
	//Person p;
	//p.view();

	//char c[3] = "abc";					// null ���� �����ؾ���
	char c[3];
	c[0] = 'a';
	c[1] = 'b';
	c[2] = 'c';

	Person p("ȫ�浿", 50);
	p.view();

	Person p2(p);							// ���� ������ ȣ��
	p2.view();

	return 0;
}