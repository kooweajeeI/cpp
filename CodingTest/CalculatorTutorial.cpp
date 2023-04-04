// author 이재욱

#include <iostream>
#include <csignal>
#include <Windows.h>
#include "Calculator.h"

using namespace std;

// SIGINT 시그널 핸들러 함수
void signalHandler(int signum) {
    cout << "Ctrl+C 입력으로 인해 프로그램을 종료합니다." << endl;

    // 프로그램 종료
    exit(signum);
}

int main() {
    Calculator calc;
    string str;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    
    signal(SIGINT, signalHandler);
    cout << "Press 'ctrl + c' to exit the program" << endl;
 
    while (true) {
        std::cout << "\n input >> ";
        cin >> str;
        try {
            cout << "= " << calc.calculate(str) << endl;
            continue;
        }
        catch (const char* message) {
            std::cerr << message << std::endl;
            continue;
        }
        return 0;
    }
}
