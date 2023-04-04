// author ÀÌÀç¿í

#include <iostream>
#include "Calculator.h"

double Calculator::Calculate(double x, char cper, double y) {
    if (cper == '+') {      // µ¡¼À
        return x + y;
    }
    else if (cper == '-') { // »¬¼À
        return x - y;
    }
    else if (cper == '*') { // °ö¼À
        return x * y;
    }
    else if (cper == '/') { // ³ª´°¼À
        return x / y;
    }
    else {
        return 0.0;
    }
}
