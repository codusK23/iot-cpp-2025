#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

class Person {
	char name[30];
	int age;

public:
	Person() {}								// �����Ϸ� �ڵ�����
	Person(const char* name, int age) {
		//this->name = name;
		strcpy(this->name, name);
		this->age = age;
		std::cout << "Constructor ȣ��!" << std::endl;
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

	Person p("ȫ�浿", 50);
	p.view();

	Person p2(p);							// ���� ������ ȣ��
	p2.view();


	return 0;
}