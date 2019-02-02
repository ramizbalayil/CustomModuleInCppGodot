#include "calculator.h"

int Calculator::add(int a, int b) {
  return a+b;
}

int Calculator::subtract(int a, int b) {
  return a-b;
}

int Calculator::multiply(int a, int b) {
  return a*b;
}

int Calculator::divide(int a, int b) {
  return a/b;
}

void Calculator::_bind_methods(){
  ClassDB::bind_method(D_METHOD("add", "a", "b"), &Calculator::add);
  ClassDB::bind_method(D_METHOD("subtract", "a", "b"), &Calculator::subtract);
  ClassDB::bind_method(D_METHOD("multiply", "a", "b"), &Calculator::multiply);
  ClassDB::bind_method(D_METHOD("divide", "a", "b"), &Calculator::divide);
}

Calculator::Calculator(){}
