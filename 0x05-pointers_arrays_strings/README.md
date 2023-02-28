# 0x05-Pointers_Arrays_Strings
This project was done to learn how to use pointers, arrays and manipulation of strings.

## Table of contents
* 0-reset_to_98.c (98 Battery st.)
* 1-swap.c (Don't swap horses in crossing a stream)
* 2-strlen.c (This report, by its very length, defends itself against the risk of being read)
* 3-puts.c (I do not fear computers. I fear the lack of them)
* 4-print_rev.c (I can only go one way. I've not got a reverse gear)
* 5-rev_string.c (A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes)
* 6-puts2.c (Half the lies they tell about me aren't true)
* 7-puts_half.c (Winning is only half of it. Having fun is the other half)
* 8-print_array.c (Arrays are not pointers)
* 9-strcpy.c (strcpy)
* 100-atoi.c (Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers)
* 101-keygen.c (Don't hate the hacker, hate the code)

### 0-reset_to_98.c (98 Battery st.)
Write a function that takes a pointer to an int as parameter and updates the value it points to to `98`.Using the prototype `void reset_to_98(int *n);`.

### 1-swap.c (Don't swap horses in crossing a stream)
Write a function that swaps the values of two integers. Using the prototype `void swap_int(int *a, int *b);`

### 2-strlen.c (This report, by its very length, defends itself against the risk of being read)
Write a function that returns the length of a string.Using the prototype `int _strlen(char *s);`

### 3-puts.c (I do not fear computers. I fear the lack of them)
Write a function that prints a string, followed by a new line, to stdout. Using the prototype `void _puts(char *str);`

### 4-print_rev.c (I can only go one way. I've not got a reverse gear)
Write a function that prints a string, in reverse, followed by a new line. Using the prototype `void print_rev(char *s);`

### 5-rev_string.c (A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes)
Write a function that reverses a string. Using the prototype `void rev_string(char *s);`

### 6-puts2.c (Half the lies they tell about me aren't true)
Write a function that prints every other character of a string, starting with the first character, followed by a new line. Using the prototype `void puts2(char *str);`

### 7-puts_half.c (Winning is only half of it. Having fun is the other half)
Write a function that prints half of a string, followed by a new line. Using the prototype `void puts_half(char *str);`, the function prints the second half of the string, and If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

### 8-print_array.c (Arrays are not pointers)
Write a function that prints n elements of an array of integers, followed by a new line. Using the prototype `void print_array(int *a, int n);`, where `n` is the number of elements of the array to be printed, Numbers must be separated by `comma`, followed by a `space`,the numbers should be displayed in the same order as they are stored in the arrayd and the use of `printf` is allowed.

### 9-strcpy.c (strcpy)
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.Return value: the pointer to `dest`, using the prototype `char *_strcpy(char *dest, char *src);`


### 100-atoi.c (Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers)
Write a function that convert a string to an integer. Using the prototype `int _atoi(char *s);`, The number in the string can be preceded by an infinite number of characters, taking into account all the `-` and `+` signs before the number, If there are no numbers in the string, the function returns `0`, without using long, declaring new variables, using hard-code special values, and the code is compiled using -fsanitize=signed-integer-overflow gcc flag.

### 101-keygen.c (Don't hate the hacker, hate the code)
Create a program that generates random valid passwords for the program `101-crackm`e.using the standard library.
