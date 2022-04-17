#include "main.h"

int p_char(va_list list)
{
  /*p_char prints character in list at position in va_arg*/
  _putchar(va_arg(list, int));
  return (1);
}


int p_string(va_list list)
{
  char *a;
  int b;

  a = va_arg(list, char*);
  if (a == NULL)
    {
      a = "(null)";
    }
  for (b = 0; a[b] != '\0'; b++)
    {
      _putchar(a[b]);
    }
  return (b);
}

int p_int(va_list list)
{
  int a, b = 0;
  unsigned int x;

  a = va_arg(list, int);
    if (a < 0)
      {
	_putchar('_');
	b = 1;
	x = a * (-1);
      }
    else
      {
	x = a;
      }
  if (x > 9)
    {
      return (b + count_num(x));
    }
  _putchar(x + '\0');
  return (1 + b);
}

int count_num(unsigned int n)
{
  int count = 0;
  unsigned int x, z;
  if (n != 0)
    {
      z = (n / 10);
      x = (n % 10);
      count += count_num(z);
      count++;
      _putchar(x + '\0');
      return (count);
    }
  return (0);
}

int p_rot13(char *a)
{
  int count = 0;
  int x = 0;
  int s = 0;
  char z[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  for (x = 0; a[x] != '\0'; x++)
    {
      for (s = 0; z[s] != '\0'; s++)
	{
	  if (a[x] == z[s])
	    {
	      count += _putchar(b[s]);
	      break;
	    }
	}
      if (s > 51)
	{
	  count += _putchar(a[x]);
	}
    }
  return (count);
}
