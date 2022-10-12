#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - point.
 * @name: name tp print
 * @f: poinetr
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
