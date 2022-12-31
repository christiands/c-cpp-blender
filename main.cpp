#include <iostream>
#include "lib.h"

int main()
{
  int fib5 = lib::math::fibonacci(5);

  std::cout << "C++: The 5th fibonacci number is: " << fib5 << std::endl;

  return 0;
}
