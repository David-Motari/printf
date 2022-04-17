#include "main.h"

/**
  * rot13 - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int rot13(va_list a)
{
	char *st = va_arg(a, char *), *rot = "";
	int i = 0, j = 0, k = 0, cont = 0;
	char leet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chan[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (st == NULL)
	{
		st = "(null)";
		cont = _write(1, rot, i);
		return (cont);
	}

	for (i = 0; st[i] != '\0'; i++)
		;

	rot = malloc(i + 1);
	if (rot == NULL)
		return (0);

	for (j = 0; j < i; j++)
	{
		for (k = 0; leet[k] != '\0'; k++)
			if (st[j] == leet[k])
				break;
		if (leet[k] != '\0')
			rot[j] = chan[k];
		else
			rot[j] = st[j];
	}
	rot[j] = '\0';
	cont = _write(1, rot, i);
	free(rot);
	return (cont);
}
