# 0x13. C - More singly linked lists
This project contains tasks that were performed to learn how to use linked lists.

## Table of contents
* 0-print_listint.c (Print list)
* 1-listint_len.c (List length)
* 2-add_nodeint.c (Add node)
* 3-add_nodeint_end.c (Add node at the end)
* 4-free_listint.c (Free list)
* 5-free_listint2.c (Free)
* 6-pop_listint.c (Pop)
* 7-get_nodeint.c (Get node at index)
* 8-sum_listint.c (Sum list)
* 9-insert_nodeint.c (Insert)
* 10-delete_nodeint.c (Delete at index)
* 100-reverse_listint.c (Reverse list)
* 101-print_listint_safe.c (Print (safe version))
* 102-free_listint_safe.c (Free (safe version))
* 103-find_loop.c (Find the loop)

### 0-print_listint.c (Print list)
Write a function that prints all the elements of a `listint_t` linked list. Using the prototype `size_t print_listint(const listint_t *h);`, and Returns the number of nodes. 

### 1-listint_len.c (List length) 
Write a function that returns the number of elements in a `listint_t` linked list. Using the prototype `size_t listint_len(const listint_t *h);`

### 2-add_nodeint.c
Write a function that adds a new node at the beginning of a `listint_t` linked list. Using the prototype `listint_t *add_nodeint(listint_t **head, const int n);`, If the function fails - returns `NULL`. Otherwise - returns the address of the new element.

### 3-add_nodeint_end.c (Add node at the end)
Write a function that adds a new node at the end of a `listint_t` linked list. Using the prototype `listint_t *add_nodeint_end(listint_t **head, const int n);`.
If the function fails - returns `NULL`. Otherwise - returns the address of the new element.

### 4-free_listint.c (Free)  
Write a function that frees a `listint_t` linked list. Using the prototype `void free_listint(listint_t *head);`

### 5-free_listint2.c 
Write a function that frees a `listint_t` linked list. Using the prototype `void free_listint2(listint_t **head);` Sets the head to `NULL`.

### 6-pop_listint.c (Free)
Write a function that deletes the head node of a `listint_t` linked list.Using the prototype `int pop_listint(listint_t **head);` 
If the linked list is empty - returns `0`.

### 7-get_nodeint.c (Get node at index) 
Write a function that locates a given node of a `listint_t` linked list. Using the prototype `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`. where `node` is the index of the node, starting at `0`. If the node does not exist - returns `NULL`.

### 8-sum_listint.c 
Write a function that returns the sum of all the data (n) of a `listint_t` linked list. If the linked list is empty - returns `0`. Using the prototype `int sum_listint(listint_t *head);`

### 9-insert_nodeint.c (Insert)
Write a function that inserts a new node to a `listint_t` linked list at a given position. Using the prototype `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
Where `idx`  is the index of the list where the new node should be added. Index starts at `0`.
If it is not possible to add the new node at index `idx`, do not add new node and return `NULL`.

### 10-delete_nodeint.c (Delete at index)
Write a function that deletes the node at a given index of a `listint_t` linked list. Using the prototype `int delete_nodeint_at_index(listint_t **head, unsigned int index);` where `index` is the index of the node that should be deleted. index starts at `0`. If the function succeeds - returns 1. If the function fails - returns -1.

### 100-reverse_listint.c (Reverse list)
Write a function that reverses a `listint_t` linked list using the prototype `listint_t *reverse_listint(listint_t **head);`, a maximum of `1` loop and two variables. Returns a pointer to the first node of the reversed list.

### 101-print_listint_safe.c (Print (safe version))
Write a function that prints a `listint_t` linked Using the prototype `size_t print_listint_safe(const listint_t *head);`, returns the number of nodes in the list, can print lists with a loop, you should go throuhg the list only once should return `98` if the function fails.

### 102-free_listint_safe.c (Free (safe version))
Write a function that prints a `listint_t` linked. Using the prototype `size_t free_listint_safe(listint_t **h);`, this function can free lists with a loop, You should go though the list only once, returns the size of the list that was free’d, The function sets the `head` to `NULL`

### 103-find_loop.c (Find the loop)
Write a function that finds the loop contained in a `listint_t` linked list using the prototype `listint_t *find_listint_loop(listint_t *head);`, a maximum of two variables. If no loop is found - returns `NULL`, and returns the address of the node where the loop starts. Use of `malloc`, `free` or arrays.
