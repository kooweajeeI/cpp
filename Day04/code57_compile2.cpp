#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// 클래서 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다
class MyClass {
	// 멤버변수 : 속성
private:
	char id;
	int age;
	char name[10];
	// 멤버함수(=메소드): 기능
public:
	MyClass(char aid, int aage, const char* aname);

	void get()
	{
		cout << id << name << age << endl;
	}
};
MyClass::MyClass(char aid, int aage, const char* aname)
{
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}


int main() {
	MyClass s('2', 23, "홍길동");
	s.get();

	return 0;
}