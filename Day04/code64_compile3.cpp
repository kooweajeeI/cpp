#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�(����)
class MyClass {
	// ������� : �Ӽ�
private:
	char id;
	int age;
	char name[10];
	// ����Լ�(=�޼ҵ�): ���
public:
	MyClass(char aid, int aage, const char* aname);		// ������ ����

	void getData();	// �޼ҵ� ����(����)
};
MyClass::MyClass(char aid, int aage, const char* aname) : id(aid), age(aage)	// ������ ����
{
	
	printf("������ȣ�� \n");
	strcpy_s(name, 10, aname);
}

void MyClass::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main() {
	MyClass s('2', 23, "ȫ�浿");
	MyClass s('3', 34, "ȫ���");
	s.getData();

	return 0;
}