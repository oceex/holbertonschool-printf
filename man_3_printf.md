```roff
.TH _PRINTF 3 "2026" "Holberton School" "Functions"

.SH NAME
_printf \- custom recreation of the printf function

.SH SYNOPSIS
.B #include "main.h"
.br
.B int _printf(const char *format, ...);

.SH DESCRIPTION
The _printf function outputs using a format string and writes it to stdout.
.PP

The format string is composed of 0 or more directives, characters are copied into the output. Each character introduces its own specifier. If the string detects an unknown specifier, _printf prints it unchanged. 

.PP
.B Specifiers

.br
%c: Prints a character
.br
%s: Prints a string
.br
%d: Prints integers
.br
%i: Prints integers
.br
%b: Prints in binary
.br
%u: Prints unsigned integers
.br
%x: Prints hexadecimals in lowercase
.br
%X: Prints hexadecimals in uppercase
.br
%r: Prints a reversed string
.br
%R: Prints a rot13 string

.SH AUTHORS
Leen Algraawi / Reema Almujalli
```
