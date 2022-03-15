#include "main.h"

/**
* main - Function main entry
*
* Program that prints _putchar, followed by a new line
*
* Return: always 0 (success)
*/

int main(void)
{
char c[9] = "_putchar";
int i = 0;

while (i < 9)
{
 _putchar(c[i]);
i++;
}
_putchar('\n');

return (0);
}
