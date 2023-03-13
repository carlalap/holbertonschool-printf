---
title: _PRINTF(3)
section: 3
header: User Manual
footer: _printf 3.0.0
date: March 13, 2023
---
# NAME
**\_printf** - formatted output, Holbie style

# SYNOPSIS
This function requires the following elements:  

Header file: "main.h"  

Prototype: int **\_printf**(**const char** \**format*, ...);

# DESCRIPTION
The **\_printf** utility is a "lite" version of printf() from the stdio.h file belonging to the ANSI C standard library. This function takes a string and can be accompanied by any number of additional arguments. The string may contain format specifiers which will be replaced by data from the remaining arguments. The formatted text is printed to standard output.

# OPTIONS
This replication of the printf function will not handle flags, field width, precision, or length modifiers, in accordance with the rubric for Holberton School Course PP1200: 0x12. C - printf. The following format specifiers may be used:

**%c** 
: prints a single character

**%s** 
: prints a string of characters

**%d** 
: prints an integer

**%i** 
: prints an integer

# RETURN VALUE
A successful execution of _printf will return the number of characters printed. An error will return -1.

# EXAMPLES
Print the string "Holberton":  
$ _printf "%s", Holberton  
Holberton

# AUTHORS
Written by Sarah Markland & Carlos Alarcon

Sources: 
C ANSI Library printf man page
www.wikipedia.com
www.github.com

# BUGS
Submit bug reports online at:  

<https://github.com/carlalap>  
<https://github.com/sarahmarkland>
