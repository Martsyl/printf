#include <unistd.h>
#include "main.h"
/**
 * _putchar - The official function that prints the c to stdout
 * @c: Variable that accepts input from user and prints character
 *
 * Return: the return function of the program after execution
 *Returns error if output is -1
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

