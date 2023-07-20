#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_numbers - a function that prints every argument + separator
  *@separator: the separator
  *@n: the count of args
  *Return: void
  */

	void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list nums;
		unsigned int index;


		va_start(nums, n);


		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(nums, int));


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(nums);
	}

