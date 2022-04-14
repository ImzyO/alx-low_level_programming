#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * op_c - prints character
 * @form: name va_list
 *
 * Return: Nothing
 */

void op_c(va_list form)
{
	printf("%c", vaa_arg(form, int));
}

/**
 * op_i - prints integer
 * @form: name va_list
 *
 * Return: Nothing
 */

void op_i(va_list form)
{
	printf("%i", va_arg(form, int));
}

/**
 * op_f - prints float numbers
 * @form: name of va_list
 *
 * Return: nothing
 */

void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * op_s - prints string
 * @form: name va_list
 *
 * Return: nothing
 */

void op_s(va_list form)
{
	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
