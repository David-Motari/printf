#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>



/**
* struct op - Struct op
*
*
* @op: The operator
*
* @f: The function associated
*
*/

typedef struct op

{
char *op;
int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);

#endif
