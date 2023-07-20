# C - Function pointers
---

## Resources 
* Function Pointer in C
* Pointers to functions
* [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
* why pointers to functions?
* Everything you need to know about pointers in C
---

## General
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory
---

> NOTE- 
> You are not allowed to use global variables

> No more than 5 functions per file

> The only C standard library functions allowed are ,               total        used        free      shared  buff/cache   available
Mem:       16095688     3127784     8626256        1884     4341648    12639852
Swap:       8388604     1114660     7273944 and . Any use of functions like , , ,  etc… is forbidden


For 100-main_opcodes.c <ADVANCED TASK>

* Usage: ./main number_of_bytes
* Output format:
  ** the opcodes should be printed in hexadecimal, lowercase
  ** each opcode is two char long
  ** listing ends with a new line
  ** see example
* You are allowed to use printf and atoi
* You have to use atoi to convert the argument to an int
* If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
* If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
* You do not have to compile with any flags

Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli

Note 0- je is equivalent to jz
Note 1- depending on how you write your main function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example.
