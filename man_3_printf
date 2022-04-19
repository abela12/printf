.\" _printf man page /usr/share/man/man3/printf.3
.\"
.TH _PRINTF 3 "15-03-2021" "0.1" "_printf"

.SH NAME
_printf

.B_printf - format and print data. Part of a project at Holberton School.

.SH SYNOPSIS
Part of a project at holberton school.
This project mimics the printf found in in C.

_printf FORMAT [ARGUMENT]...
.ss

.SH DESCRIPTION

_printf() the function produces output according to format string that \
specifies how subsequent arguments are written and converted to stdout, the \
standard output stream.

_printf() will loop through the format for a conversion specifier (%). If found\
, it will access an array of structures and match the corresponding character \
with the given function. The specified function will return a string-converted \
version of the result and immediately passed into the buffer.

.SH CONVERSION SPECIFIERS

.IP %s
prints a string.
.IP %c
prints a character.
.IP %d
prints an integer. Same as %i.
.IP %i
See %d.
.IP %u
Prints unsigned int.
.IP %o
Converts unsigned int to octal.
.IP %x
Converts unsigned int to hexadecimal (lowercase)
.IP %X
Converts unsigned int to hexadecimal (uppercase)
.IP %r
Prints reverse of intput string
.IP %R
Converts string to rot13

.SH OPTIONS

Pending

.SH FORMAT
controls the output as in C printf.  Interpreted sequences are:

       \n     new line

       \t     tab

       %%     a single %

.SS Example
.RS
_printf("Hello %s", "world");
Prints string "Hello world"

_printf("They call me mad, but one day when history of France is written, they \
will mark my name well ...%s ", "Sidney Applebaum")

.RE

.SS Return Value
Upon success, these main function will return the number of characters printed.

.SH "SEE ALSO"
.SH ""

.BR printf(1)

.P

.SH BUGS
Memory issues are known to frequent this function. User beware.

.SH "AUTHOR"
Beteab Admassu and Yitbarek yakob
