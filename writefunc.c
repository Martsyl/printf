#include "main.h"
/**
 * c_write - prints str
 * @str: char to print
 * @buff: array
 * Return: chars printed
 */
int c_write(char str, char buff[])
{
	/*char pudd = ' ';*/
	int i = 0;

	/*NOTUSED(size);*/
	/*NOTUSED(pre);*/

	if (P_ZERO)
		/*pudd = '0';*/
	buff[i++] = str;
	buff[i] = '\0';

	return (write(1, &buff[0], 1));
}
