#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * c_handle - prints char
 * @count: pointer
 * @list: arguments
 * Return: none
 */
void c_handle(va_list list, int *count)
{
	char prnt_char = va_arg(list, int);

	write(1, &prnt_char, 1);
	(*count)++;
}
/**
 * str_handle - prints str
 * @count: pointer
 * @list: args
 */
void str_handle(va_list list, int *count)
{
	const char *prnt_str = va_arg(list, const char *);
	int get_len = 0;

	while (prnt_str[get_len] != '\0')
	{
		get_len++;
		(*count)++;
	}
	write(1, prnt_str, get_len);
}
/**
 * prcnt_handle - prints %
 * @count: pointer
 */
void prcnt_handle(int *count)
{
	write(1, "%", 1);
	(*count)++;
}
