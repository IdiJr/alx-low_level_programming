# 0x0E. C - Structures, typedef
This project contains tasks performed in the bid to understand how structures, typedef.

## Table of contents
* dog.h (Poppy)
* 1-init_dog.c (A dog is the only thing on earth that loves you more than you love yourself)
* 2-print_dog.c (A dog will teach you unconditional love. If you can have that in your life, things won't be too bad)
* dog.h (Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read)
* 4-new_dog.c (A door is what a dog is perpetually on the wrong side of)
* 5-free_dog.c (How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg)

### dog.h (Poppy)
Define a new type `struct` dog with the following elements:
`name`, type = `char *`
`age`, type = `float`
`owner`, type = `char *`

### 1-init_dog.c (A dog is the only thing on earth that loves you more than you love yourself)
Write a function that initialize a variable of type `struct dog` Using the prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

### 2-print_dog.c (A dog will teach you unconditional love. If you can have that in your life, things won't be too bad)
Write a function that prints a `struct dog`
Using the prototype: `void print_dog(struct dog *d);`
Format: see example bellow
You are allowed to use the standard library
If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
If `d` is `NULL` print nothing.

### dog.h (Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read)
Define a new type `dog_t` as a new name for the type `struct dog`.

### 4-new_dog.c (A door is what a dog is perpetually on the wrong side of)
Write a function that creates a new dog.
prototype: `dog_t *new_dog(char *name, float age, char *owner);`
You have to store a copy of `name` and `owner`
Return `NULL` if the function fails

### 5-free_dog.c (How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg)
Write a function that frees dogs.Using the prototype: `void free_dog(dog_t *d);`
