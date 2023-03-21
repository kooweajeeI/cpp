#include <iostream>

int main(void)		// 함수머리 : 출력 함수이름(입력). 정수(int), 문자(char)
{				// 함수 시작(함수몸체)
	int num = 20;
	std::cout<<"Hello World!"<<std::endl;
	std::cout<<"Hello "<<"World!"<< std::endl;
	std::cout<<num<<' '<<'A';
	std::cout<<' '<<3.14<<std::endl;

	return 0;
}				// 함수 끝