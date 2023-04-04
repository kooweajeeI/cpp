// author 이재욱

#include <iostream> // 표준 입출력을 위한 헤더 파일 포함
#include "Calculator_v1.h" // Calculator 클래스의 헤더 파일 포함
using namespace std;

int main() {
    Calculator calculator; // Calculator 클래스 객체 생성
    string str; // 계산식을 입력받을 문자열 변수 선언

    cout << "Calculator Console Application_v1" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    cout << "Press 'ctrl + c' to exit the program" << endl;

    while (true) {
        std::cout << "\n input >> ";
        getline(cin, str); // 계산식을 한 줄씩 입력받음
        try {
            double result = calculator.calculate(str); // 입력받은 계산식을 계산하여 결과를 저장

            // 결과 출력
            if (std::isinf(result)) {
                std::cout << "Attempted to divide by zero!" << std::endl;  
            }
            else {
                std::cout << result << std::endl;
            }
            continue;
        }
        catch (const char* message) {
            std::cerr << message << std::endl;
            continue;
    }
    return 0;   // 프로그램 종료
}
    }