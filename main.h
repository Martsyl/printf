#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/*Creating a struct called mart,*/
/* the int(*alli) is a reference to my partners name*/
/**
 * struct mart - struct
 * @mart: char
 * @alli: pointeer to an integer
 */
struct mart
{
	char mart;
	int (*alli)(va_list, char[]);
};
/**
 * tpedef struct mart mart_alli - struct
 * @mart: char
 * @mart_alli: function
 */
typedef struct mart mart_alli;

/*the possible flages and there defined value*/
#define P_ZERO 4
#define P_NEGATIVE 1
#define BUFFER_SIZE 1024
#define NOTUSED(y)(void)(y)

int _printf(const char *format, ...);
int print_handle(const char *str, int *id, va_list args, char buffer[]);
int c_print(va_list types, char buff[]);
int prcnt_print(va_list types, char buff[]);
void buffprint(char buffer[], int *buff_get);
int c_write(char str, char buff[]);
int str_print(va_list types, char buff[]);
int _printf(const char *format, ...);
#endif
