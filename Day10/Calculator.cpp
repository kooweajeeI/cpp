// author �����

#include <iostream>
#include "Calculator.h"

double Calculator::Calculate(double x, char cper, double y) {
    if (cper == '+') {      // ����
        return x + y;
    }
    else if (cper == '-') { // ����
        return x - y;
    }
    else if (cper == '*') { // ����
        return x * y;
    }
    else if (cper == '/') { // ������
        return x / y;
    }
    else {
        return 0.0;
    }
}
