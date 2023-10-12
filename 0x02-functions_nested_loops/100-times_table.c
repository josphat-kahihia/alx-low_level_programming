#include "main.h"
/**
 *print_times_table - prints time tables
 *
 *return: void
 */
void print_times_table(int n) 
{

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      int product = i * j;

      // Print the product, with at most 3 spaces between it and the next number
      if (product < 10) {
        putchar(' ');
        putchar(' ');
      } else if (product < 100) {
        putchar(' ');
      }
      putchar('0' + product);

      if (j < n) {
        putchar(',');
        putchar(' ');
      }
    }

    putchar('\n');
  }
}
