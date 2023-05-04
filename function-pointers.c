#include <stdio.h>

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
  int (*fn)(int, int) = &multiply;

  printf("%d = \n", (*fn)(4,5));
  fn = &divide;
  printf("%d = \n", (*fn)(4,5));
}
