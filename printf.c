#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints to standard output
 * @format: String to print
 * @...: A variable number of arguments
 * 
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	/*The number of characters printed*/
	int len = 0;
	int parameter_index = 1;

	while (*format)
	{
		/*check for %c format*/
		if (*format == '%' && *(format+1) == 'c')
		{
			va_list ap;
			char c;
			int i;

			va_start(ap, format);
				i = 0;

				for (i = 0; i < parameter_index; i++)
					c = va_arg(ap, int);

				write(1, &c, 1);
			va_end(ap);

			/*skip the %c characters*/
			len += 2;
			format += 2;
			parameter_index++;
		}

		/*check for %s format and print string*/
		if (*format == '%' && *(format+1) == 's')
		{
			va_list ap;
			char *str;
			int i;

			va_start(ap, format);
				i = 0;
				
				for (i = 0; i < parameter_index; i++)
					str = va_arg(ap, char*);

				while (*str)
				{
					write(1, &*str, 1);
					str++;
				}

			va_end(ap);

			/*skip the %s characters*/
			len += 2;
			format += 2;
			parameter_index++;
		}

		/*Write to stdout*/
		write(1, &*format, 1);

		/*Updation*/
		len++;
		format++;
	}

	return (len);
}
