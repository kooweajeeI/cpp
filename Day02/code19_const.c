#include <stdio.h>

int main() {

	const int num = 20;
	printf("num: %d\n", num);
	// num = 20;
	int* p = &num;
	printf("p�� ����� �� : %p\n", p);
	printf("p�� �����ϴ� �� : %d\n", *p);
	*p = 100;
	printf("p�� ����Ű�� ���� �����Ͱ� : %d\n", *p);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;		// �������� ���ȭ
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("���� �� pa: %p\n", pa);
	// *pa = 50;

	int* const pb = &num1;		// ������ ������ ���ȭ
	// pb = &num2;
	*pb = 70;

	return 0;
}