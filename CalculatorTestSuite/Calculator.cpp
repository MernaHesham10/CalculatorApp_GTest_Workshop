#include "Calculator.h"
#include <stdexcept>

int Calculator::Add(int a, int b) { return a + b; }
int Calculator::Subtract(int a, int b) { return a - b; }
int Calculator::Multiply(int a, int b) { return a * b; }

double Calculator::Divide(double a, double b) {
    if (b == 0) throw std::runtime_error("Division by zero!");
    return a / b;
}

bool Calculator::IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
