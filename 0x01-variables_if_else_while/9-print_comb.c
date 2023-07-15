#include <stdio.h>
/**
* main - Entry point
* Description: 'Prints combinations of single-digit numbers'
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2;

for (num1 = 0; num1 < 9; num1++)
{
for (num2 = num1 + 1; num2 < 10; num2++)
{
putchar((num1 % 10) + '0');
putchar(',');
putchar(' ');
putchar((num2 % 10) + '0');
}
}

putchar('\n');

return (0);
}
