#include <stdio.h>

int main() {
	/*
	int num = 10;
	int num1;
	num1 = 20;
	num = 30;

	char ch;
	printf("chũ�� : %d\n", sizeof(char));

	double d = 3.14;
	printf("double ũ�� : %d\n", sizeof(double));
	*/

	char ch = 0x7f;			// 16����
	unsigned char ch1 = 0x7f;
	printf("ch: %x \t ch %d\n", ch, ch);
	printf("ch1: %x \t ch1 %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2: %x \t ch2 %d\n", ch2, ch2);
	printf("uch2: %x \t uch2 %d\n", uch2, uch2);

	uch2 = uch2 << 1;		// ��Ʈ������

	return 0;
}