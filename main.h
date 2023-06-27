#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
void dispec(va_list list, int *count);
int _printf(const char *format, ...);
#endif
