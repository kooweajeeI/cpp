# include <iostream>

int main() {
	char ch[5] = "hong";
	ch[0] = 'h';
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	// printf("char 크기 : %d\n", sizeof(char));

	printf("배열이름 ch: %p\n", ch);
	printf("배열이름 ch: %p\n", &ch);
	return 0;
}
