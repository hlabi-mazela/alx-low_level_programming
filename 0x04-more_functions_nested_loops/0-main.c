#include "holberton.h"
#include <stdio.h>

/*
 * main - checks the code for Holberton School
 * Return: Always 0.
 * */

int main(void)
{
	char c;

	c = 'A';
	print("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return(0);
}
