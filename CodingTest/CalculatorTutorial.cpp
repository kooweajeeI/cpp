// author �����

#include <iostream>
#include <csignal>
#include <Windows.h>
#include "Calculator.h"

using namespace std;

// SIGINT �ñ׳� �ڵ鷯 �Լ�
void signalHandler(int signum) {
    cout << "Ctrl+C �Է����� ���� ���α׷��� �����մϴ�." << endl;

    // ���α׷� ����
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
