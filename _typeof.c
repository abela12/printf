#include "main.h"

/**
 * _typefor - struct of format specifiers.
 * @argu: arguments passed.
 * @argb: position.
 * Return: 0.
 */
int (*_typefor(const char *argu, int argb))(va_list)
{
  s_type types[] = {
    {"c", p_char},
    {"s", p_string},
    {"d", p_int},
    {"i", p_int},
    {"R", print_R},
    {"b", p_binary},
    {NULL, NULL},
  };
  int i;

  for (i = 0; types[i].args != NULL; i++)
    {
      if (types[i].args[0] == argu[argb])
	{
	  return (types[i].func);
	}
    }
  return (NULL);
}
