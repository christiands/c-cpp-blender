#include <stdio.h>
#include "lib.h"

int main()
{
  int fib5 = LibMath_fibonacci(5);

  printf("C: The 5th fibonacci number is: %d\n", fib5);

  return 0;
}
