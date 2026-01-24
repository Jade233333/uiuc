# Problems

## 1. Code transformation

Before a program written in C can be executed on a computer, what step is required to be done first? Briefly explain that step.

The source code and the header file are preprocessed by C preprocessed and then passed to a compiler to compile them to assembly code. The code are then transcribed to object code which is basically instructions by an assembler. Then the linker will process it with any dependencies like other object files and libraries. Finally, it becomes an executable image.

## 2. Basic I/O in C

Write a few lines of code that will accomplish the following:

1. Ask the user to first enter their foot length (in inches) and secondly, enter their hand length (in inches). For every field to be filled in, print on the screen the messages "Type your foot length: " and "Type your hand length: " respectively.

2. Calculate the user Hobbit Index metric using the following formula: $$HobbitIndex = \frac{FootLength}{HandLength}$$
Print on the screen the calculated information with the message "Your Hobbit Index is "

Note: For this problem, there is no need to write any #include preprocessor directives or main() function in the solution. Just write the C language instructions needed to accomplish the required task, but do not forget to declare the variables needed to store entered value.

```

  // Basic IO
  float foot, hand;

  printf("Type your foot length:");
  if (scanf("%f", &foot) == 1) {
    printf("Type your hand length:");
    if (scanf("%f", &hand) == 1) {
      printf("Your Hobbit Index is %f\n", foot / hand);
    } else {
      printf("Invalid input!");
    }
  } else {
    printf("Invalid input!");
  }


```

## 3. Operators

What is the value each of the following C expressions evaluate to? Assume a and b have been initialized with 0xB17E and 0xCAFE, respectively. Write your answers as hexadecimal numbers. SHOW YOUR WORK.

- a | b
- a ^ b
- ~b
- a & b

```

  int a = 0xB17E;
  int b = 0xCAFE;

  printf("a | b = %x\n", a | b);
  printf("a ^ b = %x\n", a ^ b);
  printf("~b = %x\n", ~b);
  printf("a & b = %x\n", a & b);

a | b = fbfe
a ^ b = 7b80
~b = ffff3501
a & b = 807e
```

### Manually

binary a = 1011 0001 0111 1110
binary b = 1100 1010 1111 1110

bit-wise OR operation:
binary r = 1111 1011 1111 1110
HEX r = FEFE

bit-wise XOR operation:
binary r = 0111 1011 1000 0000
HEX r = 7B80

bit-wise NOT operation:
binary r = 0011 0101 0000 0001
as stored in 32 bit, all 16bits of 0s before are 1s, makes it FFFF
HEX r = FFFF 3501

bit-wise AND operation:
binary r = 1000 0000 0111 1110
HEX r = 807E

## 4. Conditional Constructs

Give the output for the following code segments assuming that x equals -2 at the beginning of each segment (a, b, c). Show exactly what would be displayed on the terminal. If nothing would be displayed, write "No output". SHOW YOUR WORK.

### a)

```
if (x)
    printf("First sentence\n");
else if (x != 1)
    printf("Second sentence\n");
else if (x < 1)
    printf("Third sentence\n");
else if (x == -2)
    printf("Last sentence\n");

```

Outputs: First sentence
Work: x = -2 != 0 --> First Condition Satisfied

### b)

```
int y;
if (x = x + 2)
    y = x;
else if (x == 0)
    y = x-1;
if (y == 0)
    printf("y == 0\n");
else if (y < 0)
    printf("y < 0\n");
else if (y > 0)
    printf("y > 0\n");
```

Outputs: y < 0
Works: x + 2 = 0 --> y = x-1 = -1 --> y < 1

### c)

```
if (x = 2)
    printf("First option\n");
else if (x <= 0)
    printf("Second option\n");
```

Outputs: First option
Works: x = 2 != 0 --> first condition Satisfied

## 5. Range Checking

Let the variable ascii be of type char. In general, it could contain any valid ASCII character. The following code prints the variable ascii to the terminal. Modify the code to only print numbers 6-9 or uppercase letters (A-Z).

```
if ((ascii >= '6' && ascii <= '9') || (ascii >= 'A' && ascii <= 'Z')) {
    printf("%c", ascii);
}
```

## 6. Nested Conditional Constructs

Manually trace (show your work) the following code segments, assuming that x equals 1. Show exactly what would be displayed on the terminal. SHOW YOUR WORK.

### a)

```
if (x > 0) {
    printf("x > 0\n");
    if (x < 2) {
        printf("x < 2\n");
        if (x > 1) {
            printf("x > 1\n");
        }
    }
}
```

Work:
x = 1 > 0 --> print x > 0
x = 1 < 2 --> print x < 2
x = 1 <= 1 --> not output

### b)

```
if (0<x && x>2)
    printf("True.\n");
else
    printf("False.\n");
```

Work:
0 < x = 1 < 2 --> True

## 7. Iterative Constructs

Manually trace (show your work) the following code segments. Show exactly what would be displayed on the terminal. SHOW YOUR WORK.

### a)

```
int a = 7;
while (a > 0)
{
    a =  a - 2;
    printf("%d", a);
}
printf("%d", a);
```

Work:
a = 7 > 0 --> a = a - 2 = 5 --> print 5
a = 5 > 0 --> a = a - 2 = 3 --> print 3
...
a = -1 < 0 --> no print
print a = -1

Terminal:

```
531-1-1
```

### b)

```
int a = -5;
for (a = 0; a < 15; ++a) /*here `++a` is equivalent to `a = a+1`*/
{
    a = a + 3;
    printf("%d\n", a);
}
```

Work:
a = -5
a = 0 < 15 --> a = a + 3 = 3 --> print 3 --> a = a + 1 = 4
a = 4 < 15 --> a = a + 3 = 7 --> print 7 --> a = a + 1 = 8
...
a = 12 < 15 --> a = a + 3 = 15 --> print 15 --> a = a + 1 = 16
a = 16 > 15 --> ends

Terminal:

```
3
7
11
15
```

### c)

```
int a, b;
for (a = 4; a < 6; ++a) /*here `++a` is equivalent to `a = a+1` */
{
    for (b = 0; b <= 6; b = b+2)
    {
        printf("%d*%d = %d\n", a, b, a*b);
    }
}
```

Work:
a = 4 < 6
b = 0 <= 6 --> print axb = 0 --> b = b + 2 = 2
...
b = 6 <= 6 --> print axb = 24--> b = b + 2 = 8
b = 8 > 6 --> end
a = a + 1 = 5

a = 5 < 6
...
a = a + 1 = 6 <= 6 --> end

Terminal:

```
4*0 = 0
4*2 = 8
4*4 = 16
4*6 = 24
5*0 = 0
5*2 = 10
5*4 = 20
5*6 = 30
```

## 8. C Program Modification I

Download or copy the following program: sum_of_integers.c

sum_of_integers.c code gives erroneous answers for integer input values for which the answer exceeds 2^31−1. Your mission is to extend this program so that it accepts only those inputs that will produce correct outputs. It should print the appropriate warning messages, "The operation is undefined for negative integers" or "The value exceeds the supported numerical range" before exiting. (This kind of "range" checking is essential for codes that others might use, and even for codes that you might use again later after forgetting the details and limitations of your implementation!). Write, compile, run, test, and debug your program code to confirm that it provides the correct output for integer inputs within 32­-bit range.

Turn in a screenshot of your working program code as part of your homework solution.

Do not just modify the program and submit it with compiling and testing! Sometimes, you think your code is working, actually it is not.

Hint: If you are having trouble with determining what the max input could be, take a look HERE

Links to an external site..

```
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
  // check for negative input and maximum
  if (0 > endCount) {
    printf("The operation is undefined for negative integers \n");
    return 0;
  } else if (65536 < endCount) {
    printf("The value exceeds the supported numerical range \n");
    return 0;
  }

  /* Compute the sum */
  sum = 0;
  for (counter = 1; counter <= endCount; counter = counter + 1) {
    sum = sum + counter;
    // test for max counter
    // if (sum < 0) {
    //   printf("%d", counter);
    //   printf("overflow");
    //   return 0;
    // }
  }

  /* Print the final result */
  printf("The sum of integers from 1 to %d is %d\n", endCount, sum);

  return 0;
}

```

## 9. C Program Modification II

Download or copy the following program: factorial.c
Download factorial.c. The code asks the user for a positive integer, then calculates the factorial of that number divided by the number provided by the user (effectively calculating (n-1)!, where n is the user input number and ! is the mathematical factorial operator). Unfortunately, the code gives erroneous answers for integer input values for which their factorial exceeds 231−1 or input values that are negative. Your mission is to extend this program so that it accepts only those inputs that will produce correct outputs, asking the user to try again until a valid entry is given. (Hint: Use a loop construct.) For each unacceptable input, the program should print the appropriate warning message "The input is not acceptable, try again."

a) Create a flow chart for your new, enhanced version of this program. Turn it in as part of your homework solution. Create a complete flow chart in a standard manner as shown in the textbook/lecture. By standard, we need start and end, proper use of boxes (rectangles, parallelograms, etc.), conditions..... If you are uncertain of how to draw correct flow charts, please refer to textbook chapter 13. There are plenty of examples.

b) Write, compile, run, test, and debug your program code to confirm that it provides the correct output for integer inputs within 32-bit range. Turn in a screenshot of your working program (code) as part of your homework solution.

```

/*
 *
 *  Factorial!: Computes the factorial of a positive integer
 *
 */

#include <stdio.h>

int main() {
  /* Initialization */
  int factorial; /* input to be entered by the user */
  int result;    /* result,  factorial! */

  printf("Please enter a number: ");
  scanf("%d", &factorial);
  while (18 <= factorial || 0 > factorial) {
    printf("The input is not acceptable, try again.");
    scanf("%d", &factorial);
  }

  int i;
  /* Compute factorial */
  result = 1;
  for (i = factorial - 1; i > 0; i = i - 1) {
    result *= i;
  }
  /* Print the answer */
  printf("%d\n", result);

  return 0;
}
```
