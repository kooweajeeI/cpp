/*
����� ���� �ڷ����� ����ü : C
*/
//#include <iostream>
#include <stdio.h>

struct human {
	char name[20];
	int age;
};

int main()
{
	//char human;
	struct human h = { "ȫ�浿", 23 };         // ����ühuman Ÿ���� ����ü����h ���� 

	printf("�̸� : %s\n", h.name);
	printf("���� : %d\n", h.age);
	return 0;
}