#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int r = 0;

	while (str[r])
	{
		while (!(str[r] >= 'a' && str[r] <= 'z'))
			r++;

		if (str[r - 1] == ' ' ||
		    str[r - 1] == '\t' ||
		    str[r - 1] == '\n' ||
		    str[r - 1] == ',' ||
		    str[r - 1] == ';' ||
		    str[r - 1] == '.' ||
		    str[r - 1] == '!' ||
		    str[r - 1] == '?' ||
		    str[r - 1] == '"' ||
		    str[r - 1] == '(' ||
		    str[r - 1] == ')' ||
		    str[r - 1] == '{' ||
		    str[r - 1] == '}' ||
		    r == 0)
			str[r] -= 32;

		r++;
	}

	return (str);
}
