#include <stdio.h>
int main() {
  unsigned int i, j;
  unsigned int w, x, y, z;
  unsigned int f;
  unsigned int g;

  /* Print header for K-map. */
  printf("            yz      \n");
  printf("        00 01 11 10 \n");
  printf("      ______________\n");

  /* row-printing loop */
  for (w = 0; 2 > w; w = w + 1) {
    for (i = 0; 2 > i; i = i + 1) {
      x = w ^ i;
      printf("wx=%u%u | ", w, x);

      for (y = 0; 2 > y; y = y + 1) {
        for (j = 0; 2 > j; j = j + 1) {
          z = y ^ j;
          // prjntf("\n current c: %u\n", c);
          f = ((~w & x) | (x & ~y) | (~y & z) | (~z & w)) & 1;
          g = ((x & y & ~z) | (w & ~x & ~y & z) | (~y & ~w)) & 1;
          // printf("%u  ", f);
          printf("%u  ", g);
        }
      }
      /* End of row reached: print a newline character. */
      printf("\n");
    }
  }

  return 0;
}
