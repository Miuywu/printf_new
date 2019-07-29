#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void _putchar(char);
void print_all(const char * const format, ...);

void op_char(va_list list);
void op_int(va_list list);
void op_float(va_list list);
void op_char_ptr(va_list list);
/**
 *struct ops - struct of functions and flags
 *@c: pointers to char string
 *@ch: pointer to list
 *
 */

typedef struct ops
{
	char *c;
	void (*ch)(va_list);
} op_t;

#endif
