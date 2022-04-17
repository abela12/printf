#include "main.h"

int print_R(va_list list)
{
  return (p_rot13(va_arg(list, char*)));
}

/**
 * p_binary - convert decimal number to binary number.
 * @valist: arguments
 * Return: number of characters printed
 */
int p_binary(va_list list)
{
  int i, j;
  int num = 0;
  unsigned int n;
  unsigned int arr[30];

  n = va_arg(list, unsigned int);
  if (n < 2)
    num += _putchar(n + '0');
  else
    {
      for (j = 0; n > 0; j++)
	{
	  arr[j] = n % 2;
	  n = n / 2;
	}
      for (i = j - 1; i >= 0; i--)
	num += _putchar(arr[i] + '0');
    }
  return (num);
}
