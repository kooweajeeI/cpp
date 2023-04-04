// author �����

#include "Calculator_v1.h"
#include <sstream> // stringstream Ŭ���� ����� ���� ��� ���� ����
using namespace std;

Calculator::Calculator() {} // ������ �Լ� ����

double Calculator::calculate(string str) { // ��� �Լ� ����
    double num1, num2, result = 0; // �Է¹��� �� ��(num1, num2)�� ��� �����(result)�� ������ ���� ����
    char cper; // �Է¹��� �����ڸ� ������ ���� ����
    stringstream stream(str); // stringstream ��ü ����
    stream >> num1 >> cper >> num2; // stringstream ��ü�� �̿��Ͽ� ���ڿ����� ���ڿ� ������ ����
    
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
        throw "���� ����";
    }
}
