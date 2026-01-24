#include <stdio.h>

int main(void) {

  // Basic IO
  // float foot, hand;
  //
  // printf("Type your foot length:");
  // if (scanf("%f", &foot) == 1) {
  //   printf("Type your hand length:");
  //   if (scanf("%f", &hand) == 1) {
  //     printf("Your Hobbit Index is %f\n", foot / hand);
  //   } else {
  //     printf("Invalid input!");
  //   }
  // } else {
  //   printf("Invalid input!");
  // }
  //

  // Operators
  // int a = 0xB17E;
  // int b = 0xCAFE;
  //
  // printf("a | b = %x\n", a | b);
  // printf("a ^ b = %x\n", a ^ b);
  // printf("~b = %x\n", ~b);
  // printf("a & b = %x\n", a & b);

  // Conditions
  //   int x = -2;
  //   if (x)
  //     printf("First sentence\n");
  //   else if (x != 1)
  //     printf("Second sentence\n");
  //   else if (x < 1)
  //     printf("Third sentence\n");
  //   else if (x == -2)
  //     printf("Last sentence\n");
  //
  //   int y;
  //   x = -2;
  //   if (x = x + 2)
  //     y = x;
  //   else if (x == 0)
  //     y = x - 1;
  //   if (y == 0)
  //     printf("y == 0\n");
  //   else if (y < 0)
  //     printf("y < 0\n");
  //   else if (y > 0)
  //     printf("y > 0\n");
  //
  //   x = -2;
  //   if (x = 2)
  //     printf("First option\n");
  //   else if (x <= 0)
  //     printf("Second option\n");
  //
  //   char ascii = '1';
  //   if ((ascii >= '6' && ascii <= '9') || (ascii >= 'A' && ascii <= 'Z')) {
  //     printf("%c\n", ascii);
  //   }
  //
  //   int a = 7;
  //   while (a > 0) {
  //     a = a - 2;
  //     printf("%d", a);
  //   }
  //   printf("%d", a);
  //   return 0;
  int a, b;
  for (a = 4; a < 6; ++a) /*here `++a` is equivalent to `a = a+1` */
  {
    for (b = 0; b <= 6; b = b + 2) {
      printf("%d*%d = %d\n", a, b, a * b);
    }
  }
  //
  // int a = -5;
  // for (a = 0; a < 15; ++a) /*here `++a` is equivalent to `a = a+1`*/
  // {
  //   a = a + 3;
  //   printf("%d\n", a);
  // }
  return 0;
}
