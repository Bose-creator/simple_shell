#include "shell.h"

/**
 * bfree - it would free a pointer & NULLs D addrs
 * @ptr: addrs of the pointer tu free
 *
 * Return: 1 if freed, if otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

