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

// 입력과 출력이 없는 함수
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


// 입력 있는 함수
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
// 입력과 출력이 있는 함수
int func(int n1, int n2) {	// 함수선언
	int res = n1 + n2;
	return res;
}

int main() {
	int num1 = 10;
	int num2 = 20;
	
	int res = func(num1, num2);		// 리턴되는 값을 저장해서 사용한다.
	std::cout << "res : " << res << std::endl;
}