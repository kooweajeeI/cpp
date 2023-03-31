#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abirthday);
	void showPerson();
	Person(const Person& copy) : birthday(copy.birthday)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	~Person()  // �Ҹ���
	{

	}

};
Person::Person(const char* aname, int abirthday)
{
	int len = strlen(aname) + 1;
	name = new char[len];
	strcpy(name, aname);
	birthday = abirthday;
}

void Person::showPerson() {
	cout << "�̸� : " << name << " ������� : " << birthday << endl;
}


int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p1;
	p3.showPerson();

	Person p4("������", 20001201);
	p4.showPerson();

	p4 = p1;
	p4.showPerson();

	return 0;
}
