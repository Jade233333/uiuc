/*
 * sum_of_integers.c: Computes the sum of all integers from 1 to N
 *
 */

#include <stdio.h>

int main() {
  /* Declare variables */
  int counter;  /* loop counter */
  int sum;      /* result, 1 + 2 + 3 + ... + N */
  int endCount; /* integer N */

  /* Read the value of N */
  printf(
      "This program will compute the sum of integers from 1 to N; enter N: ");
  scanf("%d", &endCount);
  // check for negative input
  // if (0 > endCount) {
  //   printf("The operation is undefined for negative integers \n");
  //   return 0;
  // } else if (65536 < endCount) {
  //   printf("The value exceeds the supported numerical range \n");
  //   return 0;
  // }

  /* Compute the sum */
  sum = 1;
  for (counter = 1; counter <= endCount; counter = counter + 1) {
    sum = sum * counter;
    // test for max counter
    if (sum < 0) {
      printf("%d", counter);
      printf("overflow");
      return 0;
    }
  }

  /* Print the final result */
  printf("The sum of integers from 1 to %d is %d\n", endCount, sum);

  return 0;
}
