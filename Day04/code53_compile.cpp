#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�
class Myclass {
	// ������� : �Ӽ�
private:
	char id;
	int age;
	char name[10];
	// ����Լ�(=�޼ҵ�): ���
public:
	void set(char aid, int aage, const char* aname)
	{
		id = aid;
		age = aage;
		strcpy_s(name, 10, aname);
		//name = aname;
	}
	void get()
	{
		cout << id << name << age << endl;
	}
};

int main() {
	Myclass s;
	s.set(1, 23, "ȫ�浿");
	s.get();

	return 0;
}