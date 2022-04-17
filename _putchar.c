#include"main.h"

/**                                                        
 * _putchar -writes the charcter c to stdout               
 * @c: The character to print                              
 *                                                         
 *Return: On sucess 1.                                     
 * On error, -1 is returned, and errno is set appropriatel\
y.                                                         
*/

int _putchar(char c)
{
  return (write(1, &c, 1));
}
