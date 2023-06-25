#include "main.h"

void buffprint(char buff[], int *buff_get);
/**
 * _printf - Almighty printf
 * @format: format
 * @... args
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	va_list list;
	char buffersize[BUFFER_SIZE];
	int buff_get = 0;
	int printed_chars = 0;
	int printed = 0;
	int i;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffersize[buff_get++] = format[i];
			if (buff_get == BUFFER_SIZE)
				buffprint(buffersize, &buff_get);
			printed_chars++;
		}
		else
		{
			buffprint(buffersize, &buff_get);
			printed = print_handle(format, &i, list, buffersize);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	buffprint(buffersize, &buff_get);
	va_end(list);
	return (printed_chars);
}
/**
 * buffprint-check code
 * @buffer: array
 * @buff_get: gets space from user
 */
void buffprint(char buffer[], int *buff_get)
{
	if (*buff_get > 0)
		write(1, &buffer[0], *buff_get);
	*buff_get = 0;
}
