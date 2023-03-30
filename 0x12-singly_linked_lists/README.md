# 0x12. C - Singly linked lists
This project contains tasks performed to better understand how to build linked lists, when, and why linked lists is used instead of arrays.

## Table of contents
* 0-print_list.c (Print list)
* 1-list_len.c (List length)
* 2-add_node.c (Add node)
* 3-add_node_end.c (Add node at the end)
* 4-free_list.c (Free list)
* 100-first.c (The Hare and the Tortoise)
* 101-hello_holberton.asm (Real programmers can write assembly code in any language)

### 0-print_list.c (Print list)
Write a function that prints all the elements of a `list_t` list. Using the prototype `size_t print_list(const list_t *h);`, return the number of nodes, if `str` is `NULL`, print `[0] (nil)`, and you are allowed to use `printf`

### 1-list_len.c (List length)
Write a function that returns the number of elements in a linked `list_t` list. Using the prototype: `size_t list_len(const list_t *h);`

### 2-add_node.c (Add node)
Write a function that adds a new node at the beginning of a list_t list. Using the prototype `list_t *add_node(list_t **head, const char *str);`, return the address of the new element, or `NULL` if it failed `str` needs to be duplicated, and You are allowed to use `strdup`

### 3-add_node_end.c (Add node at the end)
Write a function that adds a new node at the end of a list_t list. Using the prototype `list_t *add_node_end(list_t **head, const char *str);`, return the address of the new element, or `NULL` if it failed `str` needs to be duplicated, and you are allowed to use `strdup`

### 4-free_list.c (Free list)
Write a function that frees a list_t list. Using the prototype `void free_list(list_t *head);`

### 100-first.c (The Hare and the Tortoise)
Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
You are allowed to use the `printf` function

### 101-hello_holberton.asm (Real programmers can write assembly code in any language)
Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.
You are only allowed to use the `printf` function
You are not allowed to use interrupts
Your program will be compiled using `nasm` and `gcc`
