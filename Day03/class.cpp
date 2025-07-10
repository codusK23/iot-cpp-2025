#include <iostream>

class Myclass {
private:
	int id;
	char name[20];
	int age;

public:
	Myclass(int id, char name[20], int age) {
		this->id = id;						// this.id는 잘못된 표현
		this->age = age;	
		strcpy(this->name, name);		// 배열을 선언한 루 문자열을 저장하는 경우는 대입연산자 처리 불가
		//this->name = name;		
		//this->name = "홍길동";
	}
};

int main()
{
	return 0;
}