#include "main.h"

/**
 * is_printable - check if char is printable
 * @c: evaluated char
 * Return: 1 if c is printable, 0 if not
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code
 * @buffer: Array of chars.
 * @i: Index at which to start
 * @ascii_code: ascci code
 * Return: always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map[ascii_code / 16];
	buffer[i] = map[ascii_code % 16];

	return (3);
}

/**
 * is_digit - checks if char is a digit
 * @c: char to be evaluated
 * Return: 1 if digit, 0 if not
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 *  convert_size_number - cast a num to specified size
 *  @num: Number to be casted
 *  @size: Number indecating type
 *  Return: Casted value
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - cast a num to specified size
 *  @num: Number to be casted
 *  @size: Number indecating type
 *  Return: Casted value
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

