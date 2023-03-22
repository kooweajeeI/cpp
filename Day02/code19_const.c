#include <stdio.h>

int main() {

	const int num = 20;
	printf("num: %d\n", num);
	// num = 20;
	int* p = &num;
	printf("p에 저장된 값 : %p\n", p);
	printf("p가 참조하는 값 : %d\n", *p);
	*p = 100;
	printf("p가 가리키는 곳의 데이터값 : %d\n", *p);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;		// 데이터의 상수화
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("변경 후 pa: %p\n", pa);
	// *pa = 50;

	int* const pb = &num1;		// 포인터 변수의 상수화
	// pb = &num2;
	*pb = 70;

	return 0;
}