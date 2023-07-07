#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int u;
	int v;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	v = 0;
	while (v < n && src[j] != '\0')
	{
	dest[u] = src[v];
	u++;
	v++;
	}
	dest[u] = '\0';
	return (dest);
}
