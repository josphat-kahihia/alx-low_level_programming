#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[0] = 4096;
  a[1] = 2048;
  a[2] = 1024;
  a[3] = 512;
  a[4] = 256;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("memory address of n: %p\n", &n);
  printf("memory address of a: %p\n", a);
  printf("memory address of n - 2: %p\n", (&n - 2));
  printf("The value of n - 2, using &n - 3: %d\n", *(&n - 3));
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
