#include "main.h"
/**
 * _printf - cheeeky printf
 * @format: str format
 * Return: num of chars
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	va_start(list, format);

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
