#include "shell.h"

/**
 * _eputs - prints the input string in the code
 * @str: a string to print
 * Return: Nothing!
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes a char c in the stderr
 * @c: A char to be printed
 * Return: success 1.
 * if error, -1 is to be returned, and errno is to be set appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - writes char c to be given fd
 * @c: A char to be printed
 * @fd: A filedescriptor to be writing to
 * Return: if success 1.
 * if error, -1 is to be returned, and errno is to be set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - prints the input string in the code
 * @str: a string to print
 * @fd: a filedescriptor to be writing to
 * Return: the number of characters put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
