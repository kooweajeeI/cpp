#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	// char name[20];
	char* name;
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human(){
		delete[] name;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		// name = "ȫ�浿"
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "�̸� : " << name << " " << "�ֹι�ȣ : " << id << " " << "���� : " << age << endl;
	}
};

int main()
{
	// Human h;
	// h.setData("ȫ�浿",	1, 30);
	Human h("ȫ�浿", 1, 30);
	h.getData();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3, 25), Human("��μ�", 4, 35) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}