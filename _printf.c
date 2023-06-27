#include"main.h"
#include <string.h>
/**
 *c_handle-printschar
 *@count:pointer
 *@list:arguments
 *Return:none
 */
void c_handle(va_list list, int *count)
{
	char prnt_char = (char)va_arg(list, int);

	write(1, &prnt_char, 1);
	(*count)++;
}
/**
 *str_handle-printsstr
 *@count:pointer
 *@list:args
 */
void str_handle(va_list list, int *count)
{
	const char *prnt_str = va_arg(list, const char *);
	int get_len = 0;

	if (prnt_str == NULL)
	{
		prnt_str = "(null)";
	}
	while (prnt_str[get_len] != '\0')
	{
		get_len++;
		(*count)++;
	}
	write(1, prnt_str, get_len);
}
/**
 *prcnt_handle-prints%
 *@count:pointer
 */
void prcnt_handle(int *count)
{
	write(1, "%%", 1);
	(*count)++;
}

/**
 *_printf- cheeekyprintf
 *@format: strformat
 *Return: numofchars
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c_handle(list, &count);
					break;
				case 's':
					str_handle(list, &count);
					break;
				case '%':
					prcnt_handle(&count);
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
			}
		}
		else
		{
			 write(1, format, 1);
			 count++;
		}
		format++;

	}
	va_end(list);
	return (count);
}
