#include "monty.h"
/**
* is_number - check is a letter is a number
*@str: string to check;
*Return: 1 for success and none or 0 for failure
*/
int is_number(char *str)
{
int counter = 0;

while (str[counter])
{
if (counter == 0 && str[counter] == '-' && str[counter + 1])
{
counter++;
continue;
}
if (str[counter] < '0' || str[counter] > '9')
{
return (0);
}
counter++;
}
return (1);
}
