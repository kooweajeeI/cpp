#include <iostream>
/*
int main(void)		
{				
	int a = 10;
	int b = 20;
	int res;
	res = a + b;

	std::cout << "res : " << res << std::endl;

	return 0;
}
*/

// �Է°� ����� ���� �Լ�
/* void func(void) {
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main(){
	func()
	return 0;
	}
*/


// �Է� �ִ� �Լ�
/*
void func(int n1, int n2) {

	int res = n1 + n2;
	std::cout << "res : " << res << std::endl;
}

int main() {
	int num1 = 10;
	int num2 = 20;

	func(num1, num2);
}
*/
// �Է°� ����� �ִ� �Լ�
int func(int n1, int n2) {	// �Լ�����
	int res = n1 + n2;
	return res;
}

int main() {
	int num1 = 10;
	int num2 = 20;
	
	int res = func(num1, num2);		// ���ϵǴ� ���� �����ؼ� ����Ѵ�.
	std::cout << "res : " << res << std::endl;
}