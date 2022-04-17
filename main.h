#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct s_type- structure
 * @args- pointer arguments
 * @func: pointer function
 */
typedef struct s_type
{
	char *args;
	int (*func)(va_list);
} s_type;

int _putchar(char c);
int _printf(const char *format, ...);
int(*_typefor(const char *argu, int argb))(va_list);
int p_char(va_list list);
int p_string(va_list list);
int p_int(va_list list);
int count_num(unsigned int n);
int p_rot13(char *s);
int print_R(va_list list);
int p_binary(va_list list);

#endif
