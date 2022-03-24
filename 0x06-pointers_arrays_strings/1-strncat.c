#include "main.h"
/**
 * _strncat - concatenates n bytes of 2 strings
 * using at most n bytes from src
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int v;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
	dest[a] = src[v];
	a++;
	v++;
	}
	dest[a] = '\0';
	return (dest);
}
