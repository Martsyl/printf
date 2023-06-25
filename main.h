#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
void c_handle(va_list list, int *count);
void str_handle(va_list list, int *count);
void prcnt_handle(int *count);
int _printf(const char *format, ...);
#endif
