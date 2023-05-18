#include "shell.h"

/**
 * _strlen - returns length of the string
 * @s: the string which length is to check
 * Return: length of string integer
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs the lexicogarphic comparison of the two strangs.
 * @s1: the first string in the code
 * @s2: the second string in the code
 * Return: negative if s1 < s2, positive if the s1 > s2, zero if it is s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks the needle starts with the haystack
 * @haystack: the search string
 * @needle: the substring to find in the code
 * Return: address of the next character of the haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates the two of the strings
 * @dest: the buffers destination
 * @src: the buffer source
 * Return: pointer to the buffer destination
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
