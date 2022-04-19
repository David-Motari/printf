#ifndef _MAIN_H_
#define _MAIN_H_

/*Header files*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*Macros*/
#define BUFSIZE 1024

/**
* struct types_arguements - Struct op
*
*
* @t: The operator
*
* @f: The function associated
*
*/

typedef struct types_arguements
{
char t;
int (*f)(va_list va);
} 
types;

int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
int print_number(va_list va);
int binary(va_list va);
int print_unsigned(va_list va);
int hexa(va_list va);
int hexa_upper(va_list va);
int octal(va_list va);
int print_rot(va_list va);
char *malloc_str(char *str);
char *_rot(char *p);
int prt_rev(va_list va);
int hexa_special(unsigned int c);
int stringhexa(va_list va);
int pointer(va_list va);
int hexa_pointer(unsigned long int c);
int _printf(const char *format, ...);

#endif
