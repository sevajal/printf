# printf
This is the repository for the proyect "printf".


DESCRIPTION

The _printf() function produce output according to a format as 
described below. The _printf() function write output to stdout, 
the standard output stream and return the number of characters printed. 
The function write the output under the control of a format string 
that specifies how subsequent arguments are converted for output.

Format of the format string
The format string is a character string, beginning and ending in
its initial shift state, if any.  The format string is composed
of zero or more directives: ordinary characters (not %), which
are copied unchanged to the output stream; and conversion
specifications, each of which results in fetching zero or more
subsequent arguments.  Each conversion specification is
introduced by the character %, and ends with a conversion
specifier.

The overall syntax of a conversion specification is:
%conversion

The arguments must correspond properly (after type promotion) 
with the conversion specifier.  By default, the arguments are 
used in the order given and each conversion specifier asks for 
the next  argument (and it is an error if insufficiently many 
arguments are  given).

Conversion especifies
A character that specifies the type of conversion to be applied.
The conversion specifiers and their meanings are:
d, i	The int argument is converted to signed decimal notation.
u, X	The unsigned int argument is converted to unsigned decimal
        (u), or unsigned hexadecimal (the letters ABCDEF are used 
        for X conversions.
c		The int argument is converted to an unsigned char, and the
        resulting character is written.
s		The const char * argument is expected to be a pointer to 
        an array of character type (pointer to a string).  
        Characters from the array are written up to (but not 
        including) a terminating null byte ('\0').
%		A '%' is written.  No argument is converted.  
        The complete conversion specification is '%%'.

RETURN VALUE
Upon successful return, these function return the number of characters 
printed (excluding the null byte used to end output to strings).

AUTHORS
Written by Ricardo Montaña and Sebastian Carvajal
