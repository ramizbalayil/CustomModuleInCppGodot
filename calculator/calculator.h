#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "reference.h"

class Calculator : public Reference {
  GDCLASS(Calculator, Reference);

protected:
  static void _bind_methods();

public:
  int add(int a, int b);
  int subtract(int a, int b);
  int multiply(int a, int b);
  int divide(int a, int b);

  Calculator();
};

#endif
