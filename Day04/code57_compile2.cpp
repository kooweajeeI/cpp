#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�
class MyClass {
	// ������� : �Ӽ�
private:
	char id;
	int age;
	char name[10];
	// ����Լ�(=�޼ҵ�): ���
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
	MyClass s('2', 23, "ȫ�浿");
	s.get();

	return 0;
}