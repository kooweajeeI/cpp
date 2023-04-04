// author 이재욱

#include <iostream>
#include "Calculator.h"     // Calculator 헤더 파일을 포함
using namespace std;

int main() {
    double x, y, result = 0.0;  // 두 피연산자와 산술 연산 결과를 저장할 변수를 선언
    char cper = '+';    // 산술 연산자 (+, -, *, /)를 저장할 변수를 선언

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    cout << "Press 'ctrl + c' to exit the program" << endl;

    Calculator calc;

    // 사용자로부터 입력을 요청하고 산술 연산을 수행하는 루프
    while (true) {
        std::cout << "\n input >> ";    // 사용자에게 입력을 요청
        cin >> x >> cper >> y;          // 두 피연산자와 산술 연산자를 읽어들임
        if (cper == '/' && y == 0) {    // 사용자가 0으로 나누기를 시도하는지 확인
            cout << "Attempted to divide by zero!" << endl;     // 오류 메시지를 표시
            continue;
        }
        else {
            result = calc.Calculate(x, cper, y);    // Calculator 클래스의 Calculate() 메서드를 사용하여 산술 연산을 수행
        }
        cout << "= " << result << endl;  // 결과 출력
    }

    return 0;
}