#include "main.h"
/**
 * print_handle-  handles the printing
 * @str:  string to be print
 * @args: list of arguments
 * @id: pointer  indicator
 * @buffer: array of buffers
 * Return: 1 or 2;
 */
int print_handle(const char *str, int *id, va_list args, char buffer[])
{
	int printchars = -1;
	int i, get_len = 0;

	mart_alli struct_type[] = {
		{'c', c_print}, {'s', str_print}, {'%', prcnt_print}
	};
	for (i = 0; struct_type[i].mart != '\0'; i++)
		if (str[*id] == struct_type[i].mart)
			return (struct_type[i].alli(args, buffer));
	if (struct_type[i].mart == '\0')
	{
		if (str[*id] == '\0')
			return (-1);
		get_len += write(1, "%%", 1);
		if (str[*id - 1] == ' ')
			get_len += write(1, " ", 1);
		get_len += write(1, &str[*id], 1);
		return (get_len);
	}
	return (printchars);
}
