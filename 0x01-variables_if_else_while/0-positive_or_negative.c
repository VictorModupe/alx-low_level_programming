#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
  int n:
    srand(time(O));
  n=rand() - RAND_MAX /2;
  if (n >0)
    {
      printf("%d is positive\n", n);
    }
  else if (n == 0)
    {
      printf("%d is negative\n", n);
    }
  return (0);
}