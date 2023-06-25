#include "main.h"
/**
 * c_print - char print
 * @types: args
 * @buff: array of buffer
 * Return: chars
 */
int c_print(va_list types, char buff[])
{
	char get_chars = va_arg(types, int);

	return (c_write(get_chars, buff));
}
/**
 * str_print - prints strings
 * @types: args
 * @buff: array of buffer
 * Return: strings
 */
int str_print(va_list types, char buff[])
{
	char *str_p = va_arg(types, char *);
	int getlen = 0;
	/*int i;*/

	NOTUSED(buff);

	if (str_p == NULL)
	{
		str_p = "(null)";
	}
	while (str_p[getlen] != '\0')
		getlen++;
	return (write(1, str_p, getlen));

}
/**
 * prcnt_print - prints percent
 * @types: args
 * @buff: array
 * Return: char
 */
int prcnt_print(va_list types, char buff[])
{
	NOTUSED(types);
	NOTUSED(buff);

	return (write(1, "%%", 1));
}
