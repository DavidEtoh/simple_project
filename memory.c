#include "shell.h"

/**
 * bfree - frees the pointer and NULLs address
 * @ptr: the free address of the pointer
 * Return: 1 if it is freed, if not 0.
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
