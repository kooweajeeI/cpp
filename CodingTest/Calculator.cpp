// author 이재욱

#include "Calculator.h"
#include <sstream>

double Calculator::calculate(std::string str) {
    double x, y;
    char cper;
    std::stringstream ss(str);
    ss >> x >> cper >> y;

    switch (cper) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        throw "형식 오류";
    }
}
