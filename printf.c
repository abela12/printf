#include"main.h"
#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>


int _printf(const char *format, ...)
{
  va_list list;
  unsigned int i = 0, j = 0;
  va_start(list, format);

  if (!format || (format[0] == '%' && format[1] == '\0'))
    return (-1);
  for (i = 0; format != NULL && format[i] != '\0'; i++)
    {
      if (format[i] == '%')
	{
	  if (format[i + 1] == '%')
	    {
	      _putchar('%');
	      j++;
	      i++;
	    }
	  else if (_typefor(format, i + 1) != NULL)
	    {
	      j += _typefor(format, i + 1)(list);
	      i++;
	    }
	  else
	    {
	      _putchar(format[i]);
	      j++;
	    }
	}
      else
	{
	  _putchar(format[i]);
	  j++;
	}
    }
  va_end(list);
  return (j);
}
