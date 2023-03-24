#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// 클래서 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다(은닉)
class MyClass {
	// 멤버변수 : 속성
private:
	char id;
	int age;
	char name[10];
	// 멤버함수(=메소드): 기능
public:
	MyClass(char aid, int aage, const char* aname);		// 생성자 원형

	void getData();	// 메소드 원형(선언)
};
MyClass::MyClass(char aid, int aage, const char* aname) : id(aid), age(aage)	// 생성자 정의
{
	
	printf("생성자호출 \n");
	strcpy_s(name, 10, aname);
}

void MyClass::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main() {
	MyClass s('2', 23, "홍길동");
	MyClass s('3', 34, "홍길순");
	s.getData();

	return 0;
}