#include "lib.h"

int FN_c(fibonacci)(int n)
{
  if(n < 0) return n;

  int curr = 1, prev = 0, temp;
  
  for(int i = 0; i < n; ++i) {
    temp = curr;
    curr += prev;
    prev = temp;
  }

  return prev;
}
