= Lab2 worksheet
== 1
So during a PUSH or POP, STACK_TOP decrement or increment respectively to maintain indicating the last element stored in a stack. If the STACK_TOP is the same as STACK_START, the stack is empty.

And it will look like this in LC3 asm
```asm
LD   R1, STACK_TOP ; R1 = STACK_TOP
LD   R2, STACK_START ; R2 = STACK_START
NOT  R2, R2 ; R2 = -STACK_START
ADD  R2, R2, #1
ADD  R3, R1, R2 ; R3 = STACK_TOP - STACK_START
BRz  STACK_EMPTY ;
```

== 2
```asm
; my test code
AND R3, R3, #0 ; init R3 to 0
AND R4, R4, #0 ; init R4 to 0
ADD R3, R3, #3 ; set R3 to 3
ADD R4, R4, #4 ; set R4 to 4
JSR PLUS
JSR PRINT_HEX
; to see if the 0007 is printed
```
