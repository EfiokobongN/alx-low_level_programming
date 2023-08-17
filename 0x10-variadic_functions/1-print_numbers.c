#include "variadic_functions.h"

/**
 * print_numbers - numbers to be prints then followed by a new line
 * @n: parameter number
 * @separator: separator between two numbers
 * Return:Return NULL Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
