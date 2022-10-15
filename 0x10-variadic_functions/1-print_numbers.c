#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- print a list of given numbers.
 * @n: number of numbers
 * @separator: separtor of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int counter;

	va_start(numbers, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(numbers, int));
		if (counter < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
