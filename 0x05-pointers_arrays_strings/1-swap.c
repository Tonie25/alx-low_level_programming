#include "main.h"

/**
* swap_int- funation that swaps value of two integers. 
* @a: entry one
* @b: entry two
*
*
*/
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
