#include "Calc.h"

Calculator::Calculator() {}

double Calculator::add(double x, double y) {
    return x + y;
}

double Calculator::subtract(double x, double y) {
    return x - y;
}

double Calculator::multiply(double x, double y) {
    return x * y;
}

double Calculator::divide(double x, double y) {
    if (y == 0) {
        return 0;
    }
    return x / y;
}
