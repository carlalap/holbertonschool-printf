
<h1><b> Slim-printf: A Lighter Formatted Output Solution </b></h1>

<b>Description</b>

This is a custom _printf function developed by a team of two Holberton School Tulsa students from Cohort 20. The code was written to satisfy the project requirements outlined by the Holberton curriculum and for the greater good.  

This function can handle four conversion specifiers (%c, %s, %i, %d) and can also handle "%%", which prints a percent sign. Formatted output is printed to stdout, and the return value is the number of characters printed.  

<b>Usage</b>

When a string and any number of arguments are passed to _printf, the string will be formatted, printed to stdout, and subsequent arguments will be plugged into corresponding format specifiers in the inital string.

Usage examples, provided as a main.c file by Holberton School, are as follows:  

```
#include "main.h"

int main(void)  
{  
	_printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	_printf("Negative:[%d]\n", -762534);
	return (0);
}
```
Output:  
```
String:[I am a string !]  
Character:[H]  
Negative:[-762534]
```

<b>Files contained in this repository</b>

<TABLE BORDER>
	<TR>
		<TH>Name</TH> <TH>Information</TH> <TH>Relevant Files</TH>
	</TR>
	<TR>
		<TD>man_3_printf</TD> <TD>Man page of the _printf() function.</TD> <TD>None</TD>
	</TR>
	<TR>
		<TD>main.h</TD> <TD>Header file with the data type struct, standard libraries and custom prototypes.</TD> <TD>*.c compilation</TD>
	</TR>
        <TR>
		<TD>_printf.c</TD> <TD>Main printf function file. Calls other functions.</TD> <TD>printf_(name of var).c file</TD>
	</TR>
        <TR>
		<TD>printf_37.c</TD> <TD>Contains percentage print function.</TD> <TD>None</TD>
	</TR>
        <TR>
		<TD>printf_int.c</TD> <TD>Contains decimal and integer functions.</TD> <TD>None</TD>
	</TR>
        <TR>
		<TD>printf_char.c</TD> <TD>Custom function for char data type.</TD> <TD>None</TD>
	</TR>
        <TR>
		<TD>printf_string.c</TD> <TD>Function that calls string type variable.</TD> <TD>None</TD>
	</TR>
         <TR>
		<TD>printf_str.c</TD> <TD>Auxiliar functions such as strlen and strcpy.</TD> <TD>None</TD>
	</TR>
        <TR>
		<TD>_putchar.c</TD> <TD>Custom putchar function.</TD> <TD>None</TD>
	</TR>   
</TABLE>  


<b>Contributions</b>  

We are not open to contributions, but thanks for asking!

<b>Authors and Ackknowledgments</b>  

Coding by Carlos Alarcon & Sarah Markland

We would like to thank our peers and stutors at Holberton for teaching us about coding and kindness.

We would also like to thank our families (including pets) for supporting us through the challenges of learning to become software programmers and better humans. 
```
"Technology is best when it brings people together."  
-Matt Mullenweg
```
