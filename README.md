# 0x11 C - printf project.
Collaboration between David Motari and Keith Obando, to create our own version of printf. 
## Prototype
The prototype is int _printf(const char *format, ...);_

## Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
## Compilation
The code will be compiled using $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c*
## Workflow
- Task 0 produces output according to a format. 
- Task 1 handle the following conversion specifiers:
d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
- Task 2 is a man page for our funtion, in the file name man_3_printf
- Task 3 handles the following custom conversion specifiers:
b: the unsigned int argument is converted to binary
- Task 4 handles the following conversion specifiers:
u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
- Task 5 uses a local buffer of 1024 chars in order to call write as little as possible
- Task 6 handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
- Task 7 handles the following custom conversion specifier:
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
- Task 8 handles the following flag characters for non-custom conversion specifiers:
\+
space
\#
- Task 9 handles the following length modifiers for non-custom conversion specifiers:
l
h
Conversion specifiers to handle: d, i, u, o, x, X
- Task 10 handles the field width for non-custom conversion specifiers.
- Task 11 handles  the precision for non-custom conversion specifiers.
- Task 12 handles the 0 flag character for non-custom conversion specifiers.
- Task 13 handles the - flag character for non-custom conversion specifiers.
- Task 14 handles the following custom conversion specifier:
r : prints the reversed string
- Task 15 handles Handle the following custom conversion specifier:
R: prints the rot13'ed string
- Task 16 ensures all above functions woke well together. 
