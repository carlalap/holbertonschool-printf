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
**\_printf** [*arguments*]...

# DESCRIPTION
The **\_printf** utility is a copycat of printf in the C <stdio.h> library. It takes a string argument and any number of other arguments which are the values to be formatted.

# OPTIONS
**%c** 
: prints a single character

**%s** 
: prints a string of characters

**%d** 
: prints an integer

**%i** 
: prints an integer

**%%** 
: prints a percent sign

# EXAMPLES
Print the string "Holberton":  
$ _printf "%s", Holberton  
Holberton

# AUTHORS
Written by Sarah Markland & Carlos Alarcon.

# BUGS
Submit bug reports online at: <https://github.com/sarahmarkland>
