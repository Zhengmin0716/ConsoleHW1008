#include "Calculator.h"
#include <stdexcept>

double Calculator::Calculate(double x, char oper, double y) {
    switch (oper) {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/':
        if (y == 0) {
            throw std::invalid_argument("���H�s���~");
        }
        return x / y;
    default:
        throw std::invalid_argument("�L�Ī��ާ@��");
    }
}