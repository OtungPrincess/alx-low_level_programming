#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: arrays of pointers to argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);

	}

	return (0);

}
