// # include <stdio.h>
# include <iostream>

void func() {
	// std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a) {
	// std::cout << "func()" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b) {
	//std::cout << "func(a)" << std::endl;
	printf("func(a, b)\n");

}

void func(char a) {
	// std::cout << "func()" << std::endl;
	printf("func(aaa)\n");
}

int main() {

	int n = 10;
	int n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}