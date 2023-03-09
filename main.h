#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>

/**
* struct format - match the conversion specifiers for printf
* @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
* @f: type pointer to function for the conversion specifier
*
*/

typedef struct format
{
char *id;
int (*f)();
} convert_match;

int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
