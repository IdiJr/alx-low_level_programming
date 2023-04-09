# 0x14. C - Bit manipulation
This project contains files created to learn bit manipulation in C.

## Table of contents
* 0-binary_to_uint.c (0)
* 1-print_binary.c (1)
* 2-get_bit.c (10)
* 3-set_bit.c (11)
* 4-clear_bit.c (100)
* 5-flip_bits.c (101)
* 100-get_endianness.c (Endianness)
* 101-password (Crackme3)

### 0-binary_to_uint.c (0)
Write a function that converts a binary number to an `unsigned int`. Using the prototype `unsigned int binary_to_uint(const char *b);`, where `b` is pointing to a string of `0` and `1` chars, return the converted number, or 0 if:
there is one or more chars in the string `b` that is not `0` or `1`, and `b` is `NULL`.

### 1-print_binary.c (1)
Write a function that prints the binary representation of a number.Using the prototype `void print_binary(unsigned long int n);`
Format: see example
You are not allowed to use arrays.
You are not allowed to use `malloc`.
You are not allowed to use the `%` or / operators.

### 2-get_bit.c (10)
Write a function that returns the value of a bit at a given index. Using the prototype `int get_bit(unsigned long int n, unsigned int index);`, where index is the index, starting from `0` of the bit you want to get, and returns the value of the bit at index `index` or `-1` if an error occured.

### 3-set_bit.c (11)
Write a function that sets the value of a bit to `1` at a given index. Using the rototype `int set_bit(unsigned long int *n, unsigned int index);`, where `index` is the index, starting from `0` of the bit you want to set, and returns `1` if it worked, or `-1` if an error occurred.

### 4-clear_bit.c (100)
Write a function that sets the value of a bit to `0` at a given index.Using the prototype `int clear_bit(unsigned long int *n, unsigned int index);`, where `index` is the index, starting from `0` of the bit you want to setand returns `1` if it worked, or `-1` if an error occurred.

### 5-flip_bits.c (101)
Write a function that returns the number of bits you would need to flip to get from one number to another. Using the prototype `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
You are not allowed to use the `%` or `/` operators.

### 100-get_endianness.c (Endianness)
Write a function that checks the endianness. Using the prototype `int get_endianness(void);`, and returns `0` if big endian, `1` if little endian.

### 101-password (Crackme3)
Find the password for a program.
Save the password in the file `101-password`
Your file should contain the exact password, no new line, no extra space.