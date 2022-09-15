int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

vi 0-isupper.c

include "main.h"

/**
 * _isupper - checks if alphabet character is uppercase
 * @c: function argument i.e input parameter
 * Return:equals to 1 if alphabet character is uppercase otherwise 0;
 */

int _isupper(int c)
{
	if (c>= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

