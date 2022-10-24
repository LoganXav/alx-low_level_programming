#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;
	for (i = 0; i < a; i++)
	{
		a--;
		rev = s[i];
		s[i] = s[a];
		s[a] = rev;
	}
}
