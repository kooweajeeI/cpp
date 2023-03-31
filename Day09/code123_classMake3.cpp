#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
    char* name;
    int birthday;
public:
    Person(const char* aname, int abirth)  // ������
    {
        name = new char[strlen(aname) + 1];  // �޸� ���� �Ҵ�
        strcpy(name, aname);  // �������� -> �������� : ���� �����ڸ� ���� ����� ���� �ذ�
        birthday = abirth;
    }
    Person(const Person& copy)  // ���� ������ (�Ű����� ���� ���·�!)
    {
        name = new char[strlen(copy.name) + 1];
        strcpy(name, copy.name);
        birthday = copy.birthday;
    }

    void showPerson()
    {
        cout << "�̸�: " << name << ", " << "����: " << birthday << endl;
    }
    void operator=(Person& ref)  // ���Կ����� �����ε�
    {
        name = new char[strlen(ref.name) + 1];
        strcpy(name, ref.name);
        birthday = ref.birthday;
    }
    ~Person()  // �Ҹ���
    {
        delete[] name;
    }

};


int main()
{
    Person p1("ȫ�浿", 19990909);
    p1.showPerson();

    Person p2(p1);
    p2.showPerson();

    Person p3 = p2;
    p3.showPerson();

    Person p4("������", 20000101);
    p4.showPerson();
    p4 = p1;
    p4.showPerson();

    return 0;
}