#include "Calculator.h"
#include <stdexcept>

double Calculator::Calculate(double x, char oper, double y) {
    switch (oper) {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/':
        if (y == 0) {
            throw std::invalid_argument("除以零錯誤");
        }
        return x / y;
    default:
        throw std::invalid_argument("無效的操作符");
    }
}