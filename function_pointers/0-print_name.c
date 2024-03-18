#include "function_pointers.h"

/**
 *print_name - pritns a name
 *@name: char string
 *@f: function pointer that takes string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
