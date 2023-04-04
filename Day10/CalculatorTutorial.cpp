// author �����

#include <iostream>
#include "Calculator.h"     // Calculator ��� ������ ����
using namespace std;

int main() {
    double x, y, result = 0.0;  // �� �ǿ����ڿ� ��� ���� ����� ������ ������ ����
    char cper = '+';    // ��� ������ (+, -, *, /)�� ������ ������ ����

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    cout << "Press 'ctrl + c' to exit the program" << endl;

    Calculator calc;

    // ����ڷκ��� �Է��� ��û�ϰ� ��� ������ �����ϴ� ����
    while (true) {
        std::cout << "\n input >> ";    // ����ڿ��� �Է��� ��û
        cin >> x >> cper >> y;          // �� �ǿ����ڿ� ��� �����ڸ� �о����
        if (cper == '/' && y == 0) {    // ����ڰ� 0���� �����⸦ �õ��ϴ��� Ȯ��
            cout << "Attempted to divide by zero!" << endl;     // ���� �޽����� ǥ��
            continue;
        }
        else {
            result = calc.Calculate(x, cper, y);    // Calculator Ŭ������ Calculate() �޼��带 ����Ͽ� ��� ������ ����
        }
        cout << "= " << result << endl;  // ��� ���
    }

    return 0;
}