#include "main.h"

/**
 * S : prints the string.
 * Non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way
 * \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
