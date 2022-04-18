#include "main.h"
#include "main.h"

/**
*
* _printf - produces output according to a format.
*
* @format: is the string given
*
* Return: numbers of characters printed
*
*/

int _printf(const char *format, ...)
{
int index = 0, cnt = 0;
va_list va;
int (*ptr)();

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(va, format);
for (index = 0; format != NULL && format[index] != '\0'; index++)
{
if (format[index] == '%')
{
ptr = equal(format + index);
if (ptr != NULL)
{
cnt += ptr(va);
index++;
}
else
cnt += _putchar(format[index]);
}
else
cnt += _putchar(format[index]);
}
cnt += _write(-1, "c", 1);
va_end(va);
return (cnt);
}



/**
*
* _putchar - writes the character a to stdout
*
* @a: the character to print
*
* Return: numbers of characters printed*
*/

int _putchar(char a)

{
return (_write(1, &(a), 1));
}



/**
*
* equal - returns the right function of the specifier
*
* @format: the value to print
*
* Return: numbers of characters printed
*/

int (*equal(const char *format))()

{
int j;
op_t o[] = {
{"c", ch},
{"s", st},
{"i", inte},
{"d", inte},
{"%", por},
{"b", bina},
{"o", octa},
{"u", unsig},
{"x", hexal},
{"X", hexau},
{"S", sst},
{"p", point},
{"r", reve},
{"R", rot13},
{NULL, NULL},
};

for (j = 0; o[j].op != NULL; j++)
if (format[1] == o[j].op[0])
return (o[j].f);
return (o[j].f);
}
