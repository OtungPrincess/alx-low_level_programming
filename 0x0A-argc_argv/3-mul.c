#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of pointer to argument
 * Return: mul or 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 3)
{
	printf("Error\n");
	return (1);
}
if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	}
	return (0);

}
