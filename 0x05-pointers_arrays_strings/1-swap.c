#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @k: integer to swap
 * @l: integer to swap
 */
void swap_int(int *k, int *l)
{
	int m;

	m = *k;
	*k = *l;
	*l = m;
}
