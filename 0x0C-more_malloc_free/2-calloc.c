#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function to call memory
 *@nmemb: entry
 *@size: size
 *Return: memory in 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int o;
char *memory;

if (nmemb == 0 || size == 0)
	return (NULL);
memory = malloc(size * nmemb);
if (memory == NULL)
{
	free(memory);
	return (NULL);
}
for (o = 0; o < (nmemb * size); o++)
	memory[o] = 0;
return (memory);
}
