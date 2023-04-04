// author 이재욱

#include "Calculator_v1.h"
#include <sstream> // stringstream 클래스 사용을 위한 헤더 파일 포함
using namespace std;

Calculator::Calculator() {} // 생성자 함수 구현

double Calculator::calculate(string str) { // 계산 함수 구현
    double num1, num2, result = 0; // 입력받은 두 수(num1, num2)와 계산 결과값(result)을 저장할 변수 선언
    char cper; // 입력받은 연산자를 저장할 변수 선언
    stringstream stream(str); // stringstream 객체 생성
    stream >> num1 >> cper >> num2; // stringstream 객체를 이용하여 문자열에서 숫자와 연산자 추출
    
    switch (cper) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;
    default:
        throw "형식 오류";
    }
}
