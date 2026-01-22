# ECE220 notion

## Lecture 1
Thu Jan 22 15:08:12 CST 2026
### LC-3 I/O

Here we are mainly talking about keyborad input and monitor output. The way we do it is called memory mapping. I do think this is a intriguing idea. So descipte normal memory locations we used last semester, we have four more special ones called   `KBDR`,`KBSR`,`DDR`,`DSR`(D for date, S for status.)

Peripheral devices and our processing unit can access and change these location. In those `DR`, the [7:0] are used to represent a ASCII char and in those `SR` the [15] is used to show whether the current device is available or not. It is also called *ready bit*.

Use keyboard as an example, the processing unit will constantly check(called polling) the ready bit. If the ready bit is 1 which means the data are loaded in the `DR`, the processing unit will read it and during this time, the keyboard will not take another input. After reading the char CPU will reset the bit to 0 which allows the keyboard to take another input. For the monitor, it is a similar process.

## Lecture 2
Thu Jan 22 15:08:12 CST 2026
### Subroutines

We talked about how LC-3 manipuate input and output behind the scene. However, we do know that usually we only use instructions like `GETC` and `OUT` to do it. How do we do it. 

In fact , those are called *Traps*. In my perspective, they are just subroutines built into the system and we can think about them as built-in functions that we can use directly to do something common but complicated. Just like last semester we can use `BR` to jump to an address and execute something then come back. We had the intuition that they are just like functions. Those can all be considerd subrountines.

So we have known that our user program always start at the address `x3000` and we also mentioned those in last lecture that `xFE00` to `xFFFF` are reserved for device registers. Just like those, `x0000` to `x00FF` are reserved for *Trap Vectors*. Each address stores an address to a subroutine corresponding to that Trap Vector. When executing those *Traps* like `OUT` we are jumping to the subroutine behind it. 

### Trap mechanism

1. look up in trap vector table
2. transfer to that address
3. return back to original PC

### Callee-save and Caller-save

Last semester, we mentioned some weired behavior about the register R7 but we didn't explain it. With the idea of subroutine we can now understand it. We have already known the trap mechanism involving jump to another place and restore the original PC which means during the process the original PC is stored somewhere and later restored. That place is R7. That is the reason R7 can be changed if we are dealing with the IO.

That reminds us of a important idea in programing called callee-save and caller-save. Now we consider about *Trap*. The PC is changed by those traps, and during the process, orignal PC value is stored in R7 first and then by the end of process the PC is reloaded with R7 like nothing is happened to the PC. Is is called the callee-save. It means the subroutine does not change the value of a register or something the main program is using which is really good and something we always want. 

Then what is a callor-save. Looking at the same process, the R7 is changed. If we want the value not to be lost, we need to save it manually in our main program and that is called a caller-save. Normally we don't do caller-save unless a register is used as output or return value.
