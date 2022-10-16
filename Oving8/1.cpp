#include <cmath>
#include <iostream>

template <typename Type>
bool equal(Type a, Type b) {
  std::cout << "Template version" << std::endl;
  return a == b;
}

bool equal(double a, double b) {
  std::cout << "Special version" << std::endl;
  const double tolerance = 0.00001;
  return (std::abs(a - b) < tolerance);
}

int main() {
  double a = 2.0;
  double b = 2.01;
  std::cout << equal(a, b) << std::endl;

  int c = 2;
  int d = 2;
  std::cout << equal(c, d) << std::endl;
}
