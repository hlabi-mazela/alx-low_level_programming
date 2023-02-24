#include "holberton.h"

/*
 * _isupper - a function that checks for uppercase
 * @c: An input character
 * Return: 1 if true*/

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
