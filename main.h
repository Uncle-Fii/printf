#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;


/**
 * struct flag_s - A new type defining a flags struct.
 * @flag: A character representing a flag.
 * @value: The integer value of the flag.
 */
typedef struct flag_s
{
	unsigned char flag;
	unsigned char value;
} flags_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
int print_b(va_list binary_list);
int print_u(va_list ar_list);
int print_o(va_list ar_list);
int print_x(va_list ar_list);
int print_X(va_list ar_list);
int printf_HEX_aux(unsigned int num);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_char(va_list val);
int printf_string(va_list val);
int get_flag(char s, flags_t *f);
int (*get_func(char s))(va_list);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_oct(va_list val);
int printf_exclusive_string(va_list val);
int printf_rot13(va_list args);

#endif
