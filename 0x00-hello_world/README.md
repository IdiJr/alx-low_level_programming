# 0x00. C - Hello, World
In this project, we are looking at the C programming concept

## Table of contents
* 0-preprocessor  
* 1-compiler
* 2-assembler
* 3-name
* 4-puts.c (Hello, puts)
* 5-printf.c (Hello, printf)
* 6-size.c (Size is not the grandeur, and territory does not make a nation)
* 100-intel 
* 101-quote.c (UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity)

### 0-preprocessor
A script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

### 1-compiler
A script that compiles a C file but does not link.
* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.o` instead of `.c.`
	* Example: if the C file is `main.c,` the output file should be `main.o`

### 2-assembler
A script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c.`
	* Example: if the C file is main.c, the output file should be `main.s`

### 3-name
A script that compiles a C file and creates an executable named cisfun.
* The C file name will be saved in the variable `$CFILE`

### 4-puts.c
A C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
* Use the function `puts`
* `printf`is not to be used
* The  program should end with the value `0`

### 5-printf.c
A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

* Use the function `printf`
* The function `puts` is not to be used
* The  program should return `0`
* The  program should compile without warning when using the `-Wall` `gcc` option

### 6-size.c
A C program that prints the size of various types on the computer it is compiled and run on.

* It produces the exact same output as in the example
* With no Warnings
* The program returns `0`
* You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option

### 100-intel
A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name is saved in the variable `$CFILE.`
* The output file is  named the same as the C file, but with the extension `.s` instead of `.c.`
	* Example: if the C file is `main.c`, the output file should be `main.s`

### 101-quote.c
A C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

* Without using any functions listed in the NAME section of the man (3) printf or man (3) puts
* The program returns 1
* The program compiles without any warnings when using the `-Wall` `gcc` option
