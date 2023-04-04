// author �����

#include <iostream> // ǥ�� ������� ���� ��� ���� ����
#include "Calculator_v1.h" // Calculator Ŭ������ ��� ���� ����
using namespace std;

int main() {
    Calculator calculator; // Calculator Ŭ���� ��ü ����
    string str; // ������ �Է¹��� ���ڿ� ���� ����

    cout << "Calculator Console Application_v1" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    cout << "Press 'ctrl + c' to exit the program" << endl;

    while (true) {
        std::cout << "\n input >> ";
        getline(cin, str); // ������ �� �پ� �Է¹���
        try {
            double result = calculator.calculate(str); // �Է¹��� ������ ����Ͽ� ����� ����

            // ��� ���
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
    return 0;   // ���α׷� ����
}
    }