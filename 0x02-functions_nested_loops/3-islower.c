#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: the character
 * Return: 1 if the letter is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
