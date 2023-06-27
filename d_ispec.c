#include "main.h"
/**
 * dispec - handle d & i specifie
 * @list: arguments
 * @count: pointer
 */
void dispec(va_list list, int *count)
{
	char *buffer;
	int getspec = va_arg(list, int);
	int buff_size;

	buff_size = snprintf(NULL, 0, "%d", getspec);
	buffer = malloc((buff_size + 1) * sizeof(char));
	if (buffer == NULL)
	{
		va_end(list);
		return;
	}
	snprintf(buffer, buff_size + 1, "%d", getspec);
	*count += write(1, buffer, buff_size);
	free(buffer);
}
