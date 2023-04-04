// author 이재욱

#pragma once
#include <string>
using namespace std;

class Calculator {
public:
    Calculator(); // Calculator 클래스의 생성자 함수
    double calculate(string str); // 문자열 형식의 계산식을 받아서 계산 결과를 반환하는 함수
};
